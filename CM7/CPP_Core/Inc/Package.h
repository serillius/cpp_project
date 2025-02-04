/*
 * Package.h
 *
 *  Created on: Feb 4, 2025
 *      Author: seraphin
 */

#ifndef SRC_PACKAGE_H_
#define SRC_PACKAGE_H_

class Package {
public:
	Package();
	Package(float _Weight);
	virtual ~Package();

	float getWeight();
	void setWeight(float _Weight);

private:
	float Weight;
};

#endif /* SRC_PACKAGE_H_ */
