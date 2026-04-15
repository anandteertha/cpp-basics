# Basics and Foundations

This folder introduces a few of the first C++ concepts every beginner should be comfortable with.

## What This Example Covers

The current `main.cpp` demonstrates:

- Integer division using `int`
- Floating-point division using `double`
- Mixed arithmetic between `double` and `int`
- Printing a `char`
- Converting a `char` to its numeric ASCII value

## File Overview

- `main.cpp`: small demo program for type behavior and output
- `program.exe`: compiled output generated from the source file
- `INTERVIEW_HELPER.md`: quick revision notes and likely interview prompts for this topic

## Code Walkthrough

### 1. Integer division

```cpp
int a = 10;
int b = 3;
std::cout << a / b << std::endl;
```

Because both operands are `int`, the result is also an integer.  
So `10 / 3` becomes `3`, not `3.333...`.

### 2. Floating-point division

```cpp
double x = 10;
double y = 3;
std::cout << x / y << std::endl;
```

Since both values are `double`, C++ performs floating-point division.  
The result is approximately `3.33333`.

### 3. Mixed-type division

```cpp
double m = 10;
int n = 3;
std::cout << m / n << std::endl;
```

Because one operand is `double`, C++ promotes the `int` to `double` and performs floating-point division.

### 4. Character and ASCII value

```cpp
char c = 'A';
std::cout << c << std::endl;
std::cout << (int)c << std::endl;
```

This prints:

- the character itself: `A`
- its ASCII value: `65`

## Expected Output

Approximate output from the current program:

```text
3
3.33333
3.33333
A
65
```

## Why This Folder Matters

These basics show up everywhere in C++:

- Bugs often happen because of accidental integer division
- Type conversion is a common interview topic
- Understanding `char` as a small integer type helps with strings and encoding basics

## Good Practice Ideas

- Change values and predict the output before running
- Try `float` instead of `double`
- Test lowercase letters and print their ASCII values
- Add examples for modulo `%`
- Compare explicit casting with implicit conversion
