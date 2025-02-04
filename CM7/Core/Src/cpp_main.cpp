#include "cpp_main.h"
#include "main.h"
#include "retarget.h"
#include <iostream>

#include "fonts.h"

#include "Package.h"

#include "pool.h"
#include "util_ring_allocator_std.h"
#include <vector>
#include <iterator>

extern UART_HandleTypeDef huart3;
extern I2C_HandleTypeDef hi2c2;

//MY CODE STARTS HERE...
//MY CODE ENDS HERE...

float detectAndGetWeight() {
	static uint8_t count = 1;
	float Weight = 0.0;
	Weight = static_cast<float>(count) / 2.0;
	count++;
	if (count > 30) count=1;
	return Weight;
}

void cpp_main(){
	RetargetInit(&huart3);

	std::cout << "\n\r\n\rStart up\n\r" << std::endl;

	auto Mem_pool = new k2lib::Pool<Package,5>;

	std::vector<Package*, util::ring_allocator_std<Package*>> conveyer_belt;

	while(1){
		if (conveyer_belt.size() >= 3) {
			conveyer_belt.pop_back();
		}

		float current_weight = detectAndGetWeight();
		Package *package_item = Mem_pool->palloc();
		package_item->setWeight(current_weight);
		conveyer_belt.insert(conveyer_belt.begin(), package_item);

		for (auto & element : conveyer_belt) {
			std::cout << "Package Weight: ";
			std::cout << element->getWeight() << std::endl;
		}
	}
}
