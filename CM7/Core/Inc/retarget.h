#ifndef _RETARGET_H__
#define _RETARGET_H__

#include "stm32h7xx_hal.h"
#include <sys/stat.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif

void RetargetInit(UART_HandleTypeDef *huart);

//int _isatty(int fd);
int _write(int fd, char* ptr, int len);
//int _close(int fd);
//int _lseek(int fd, int ptr, int dir);
int _read(int fd, char* ptr, int len);
//int _fstat(int fd, struct stat* st);S
int getentropy(void* buffer, size_t length);

#ifdef __cplusplus
} //extern "C"
#endif

#endif //#ifndef _RETARGET_H__
