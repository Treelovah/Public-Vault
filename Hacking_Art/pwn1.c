#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Hello, World!\n");
    }
    return 0;
}
/*
// First four registers are known as general purpose registers.
// 
// eax -- Accumulator 
// ecx -- Counter
// edx -- Data
// ebx -- Base
//
// They are used for a variety of purposes, but mainly
// act as a temp variable for the CPU when it's executing
// machine instructions
//
//
// The next 4 registers are known as general purpose registers
// they are sometimes known as pointers and indexs
//
// esp -- stack pointer
// ebp -- base pointer
// esi -- source index
// edi -- destination index
//
// The first 2 are called pointers, because they store 32-bit addresses
// pointing to that location in memory.
// ---- MORE ON THIS LATER
//
// The last 2 are also technically pointers, which are commonly used
// to point to the source and destination when data needs to be read
// from OR written to. There are load and store instructions that use
// these registers, but for the most part, they can be thought of as
// general purpose registers.
*/