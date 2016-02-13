#include <errno.h>
#include <stdint.h>

#include "arch.h"

int __attribute__ ((weak)) arch_reg_width(void) 
{
	return sizeof(uintptr_t);
}

int __attribute__ ((weak)) arch_reg_atoi(const char *name) 
{
	return -ENOSYS;
}

int __attribute__ ((weak)) arch_reg_arg(int num) 
{
	return -ENOSYS;
}

int __attribute__ ((weak)) arch_reg_func(void) 
{
	return -ENOSYS;
}