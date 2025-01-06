# Undefined Behavior: Incorrect Memory Deallocation in C

This repository demonstrates a common error in C programming: attempting to deallocate memory using `free()` that was not dynamically allocated using functions like `malloc()` or `calloc()`.  This leads to undefined behavior, potentially resulting in program crashes or unpredictable results.

## The Bug

The `bug.c` file contains the problematic code.  The integer `x` is allocated on the stack. The pointer `ptr` points to `x`. Attempting to free `ptr` causes the undefined behavior. 

## The Solution

The `bugSolution.c` file shows how to correct this issue. Dynamic memory allocation and deallocation are used correctly using `malloc()` and `free()`.