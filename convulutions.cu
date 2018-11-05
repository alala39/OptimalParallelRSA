//File where main computation occurs
#include <stdio.h>
#include <cuda.h>
#include <cuda_runtime.h>
#include <driver_functions.h>
#include "RSA.h"
#include "CycleTimer.h"

#define CONVO_STRIDE 2;

//Can use shared memory to enhance locality and speed up convolutions

//TODO DEFINE SINGULAR KERNEL TO DO THE CONVOLUTIONS
//Cuda has library for fast mat mult
