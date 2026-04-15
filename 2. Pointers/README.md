# Pointers

This folder introduces C++ pointers using a small example that connects variables, memory addresses, and dereferencing.

## What This Example Covers

The current `main.cpp` demonstrates:

- Printing the value of a normal variable
- Printing the address of a variable with `&`
- Storing that address in a pointer
- Dereferencing a pointer with `*`
- Modifying a variable through its pointer
- Comparing two pointers that point to the same variable

## File Overview

- `main.cpp`: small demo program for pointer basics
- `program.exe`: compiled output generated from the source file
- `INTERVIEW_HELPER.md`: quick revision notes and likely interview prompts for pointers

## Code Walkthrough

### 1. Getting a variable's value and address

```cpp
int a = 10;
std::cout << "value of a: " << a << std::endl;
std::cout << "address of a: " << &a << std::endl;
```

`a` stores the value `10`.  
`&a` gives the memory address where `a` is stored.

### 2. Creating a pointer

```cpp
int *ptr_a = &a;
std::cout << "ptr_a value: " << ptr_a << std::endl;
```

`ptr_a` is a pointer to an `int`.  
It stores the address of `a`, not the value of `a`.

### 3. Dereferencing a pointer

```cpp
std::cout << "derefencing ptr_a value: " << *ptr_a << std::endl;
```

`*ptr_a` means "go to the address stored in `ptr_a` and read the value there."  
So this prints `10`.

### 4. Updating a value through a pointer

```cpp
*ptr_a = *ptr_a + 1;
```

This changes the value stored at the pointed location.  
Since `ptr_a` points to `a`, the value of `a` becomes `11`.

### 5. Another pointer to the same variable

```cpp
int *ptr_a_dash = &a;
std::cout << "ptr_a_dash value: " << ptr_a_dash << std::endl;
std::cout << "derefencing ptr_a_dash value: " << *ptr_a_dash << std::endl;
```

Both `ptr_a` and `ptr_a_dash` point to the same variable, so dereferencing either one gives the same updated value.

## About `*ptr_a++`

Your code asks why `*ptr_a++` does not behave like incrementing the pointed value.

The reason is operator precedence:

- `ptr_a++` happens first
- `*` is applied after that

So `*ptr_a++` is interpreted like:

```cpp
*(ptr_a++)
```

That moves the pointer itself to the next memory location instead of incrementing the value of `a`.

If you want to increment the value being pointed to, use:

```cpp
(*ptr_a)++
```

or

```cpp
*ptr_a = *ptr_a + 1;
```

## Expected Output

The exact memory addresses will be different on every run and machine, but the pattern is roughly:

```text
value of a: 10
address of a: 0x...
ptr_a value: 0x...
derefencing ptr_a value: 10
value of a after *ptr_a++: 11
dereferencing ptr_a value after increment: 11
ptr_a_dash value: 0x...
derefencing ptr_a_dash value: 11
```

## Why This Folder Matters

Pointers are central to C++ because they help you understand:

- how memory is accessed
- how variables can be modified indirectly
- how arrays and dynamic memory work later
- why references, objects, and low-level debugging make more sense once addresses are clear

## Good Practice Ideas

- Print the addresses of multiple variables and compare them
- Try `(*ptr_a)++` and observe the difference
- Create two pointers pointing to the same variable and update through one
- Add a `nullptr` example
- Compare pointers and references in a future exercise
