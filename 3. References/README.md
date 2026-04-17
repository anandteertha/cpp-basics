# References

This folder introduces C++ references using a small example that shows how a reference acts like another name for the same variable.

## What This Example Covers

The current `main.cpp` demonstrates:

- Declaring a reference with `&`
- Seeing that a reference and its original variable refer to the same object
- Updating a variable through a reference
- Updating the original variable and observing the change through the reference
- Passing a variable to a function by reference
- Referencing an array element
- Referencing an entire array without losing its size

## File Overview

- `main.cpp`: small demo program for reference basics
- `program.exe`: compiled output generated from the source file
- `INTERVIEW_HELPER.md`: quick revision notes and likely interview prompts for references

## Code Walkthrough

### 1. Creating a reference

```cpp
int a = 10;
int& ref_a = a;
```

`ref_a` is a reference to `a`.  
It does not store a separate copy of the value.  
It is another name for the same variable.

### 2. Reference and original variable share the same object

```cpp
std::cout << "address of a: " << &a << std::endl;
std::cout << "address of ref_a: " << &ref_a << std::endl;
```

These addresses match because `ref_a` and `a` refer to the same memory location.

### 3. Updating through a reference

```cpp
ref_a = 15;
std::cout << "value of a after ref_a = 15: " << a << std::endl;
```

Changing `ref_a` changes `a` because they are the same underlying object.

### 4. Updating the original variable

```cpp
a = 20;
std::cout << "value of ref_a after a = 20: " << ref_a << std::endl;
```

If the original variable changes, the reference reflects that updated value immediately.

### 5. Passing by reference

```cpp
void addFive(int& value) { value += 5; }
addFive(a);
```

The function receives the original variable, not a copy.  
So the function can modify the caller's value directly.

### 6. Referencing an array element

```cpp
int arr[3] = {1, 2, 3};
int& first = arr[0];
```

`first` is a reference to the first element of the array.  
If you change `first`, you are really changing `arr[0]`.

### 7. Referencing the whole array

```cpp
int(&ref_arr)[3] = arr;
```

This means `ref_arr` is a reference to an array of 3 integers.  
Unlike a plain pointer, this preserves the full array type and size.

```cpp
ref_arr[1] = 20;
```

Changing `ref_arr` changes the original array because both names refer to the same array object.

## Expected Output

The exact memory addresses will be different on every run and machine, but the pattern is roughly:

```text
value of a: 10
value of ref_a: 10
address of a: 0x...
address of ref_a: 0x...
value of a after ref_a = 15: 15
value of ref_a after a = 20: 20
value of a after addFive(a): 25
value of ref_a after addFive(a): 25
first element before update: 1
arr[0] after updating first: 10
array through ref_arr: 10 20 3
```

## Why This Folder Matters

References are important in C++ because they help you understand:

- aliasing without pointer syntax
- how pass-by-reference avoids unnecessary copying
- why functions can modify caller variables
- how references work with both variables and arrays
- how references compare with pointers in interviews and real code

## Good Practice Ideas

- Try changing the initial value of `a` and predict the output
- Add another function that doubles a value using a reference parameter
- Compare this example with the pointers folder
- Add a `const int&` example for read-only access
- Try a function that accepts `int (&arr)[3]`
- Test what happens if you try to declare a reference without initializing it
