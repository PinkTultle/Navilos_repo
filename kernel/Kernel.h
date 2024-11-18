#ifndef KERNEL_KERNEL_H_
#define KERNEL_KERNEL_H_

#include "task.h"
#include "event.h"

void Kernel_start(void);
void Kernel_yield(void);

#endif /* KERNEL_KERNEL_H_ */