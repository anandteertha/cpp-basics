# Interview Helper: Basics and Foundations

Use this sheet for quick revision before practice rounds or interviews.

## Core Concepts

### Integer division

If both operands are integers, C++ returns the integer part only.

```cpp
10 / 3   // 3
```

### Floating-point division

If at least one operand is `float` or `double`, the result keeps the decimal part.

```cpp
10.0 / 3   // 3.333...
```

### Implicit type conversion

In mixed expressions, C++ usually converts the smaller or narrower type to the wider type.

```cpp
double m = 10;
int n = 3;
m / n   // n becomes 3.0
```

### Character values

A `char` stores a character, but internally it is represented by a numeric value.

```cpp
char c = 'A';
(int)c   // 65
```

## Fast Interview Answers

### What is the difference between `int` and `double`?

`int` stores whole numbers. `double` stores decimal values with fractional precision.

### Why does `10 / 3` give `3` in C++?

Because both operands are integers, so C++ performs integer division and discards the fractional part.

### How do you force decimal division?

Make at least one operand floating-point.

```cpp
10.0 / 3
static_cast<double>(10) / 3
```

### What happens in `double + int` or `double / int`?

The `int` is promoted to `double`, then the operation happens in floating-point.

### What is the ASCII value of `'A'`?

`65`

### How do you print the numeric value of a `char`?

Cast it:

```cpp
std::cout << (int)c;
```

Better modern style:

```cpp
std::cout << static_cast<int>(c);
```

## Common Interview Traps

- Assuming `10 / 3` is `3.333`
- Forgetting that operand types affect the result
- Not noticing implicit conversion in mixed expressions
- Using C-style casts when `static_cast` is clearer and safer

## Short Talking Points

- "C++ chooses integer division when both operands are integers."
- "If one operand is `double`, the expression is promoted to floating-point."
- "`char` is a character type, but it still has an underlying numeric representation."
- "Understanding promotion rules helps avoid subtle bugs."

## Mini Practice Questions

1. What is the output of `7 / 2`?
2. What is the output of `7.0 / 2`?
3. What is the output of `char ch = 'b'; std::cout << (int)ch;`?
4. Why is `static_cast<int>(3.9)` different from rounding?
5. What is the difference between implicit and explicit type conversion?

## Quick Self-Check

You are ready to move on when you can explain:

- why integer division truncates
- when type promotion happens
- how mixed-type arithmetic works
- why characters can be printed as numbers
