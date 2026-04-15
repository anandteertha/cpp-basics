# Interview Helper: Pointers

Use this sheet for quick revision before practice rounds or interviews.

## Core Concepts

### What is a pointer?

A pointer is a variable that stores the memory address of another variable.

```cpp
int a = 10;
int* ptr = &a;
```

### What does `&` do?

`&` gives the address of a variable.

```cpp
&a
```

### What does `*` do?

`*` has two common uses:

- in declarations, it means the variable is a pointer
- in expressions, it dereferences the pointer

```cpp
int* ptr = &a;   // declaration
*ptr             // dereference
```

### What is dereferencing?

Dereferencing means accessing the value stored at the address inside a pointer.

```cpp
*ptr
```

If `ptr` stores the address of `a`, then `*ptr` is the value of `a`.

## Fast Interview Answers

### What is the difference between `a`, `&a`, and `*ptr`?

- `a` is the actual value
- `&a` is the memory address of `a`
- `*ptr` is the value at the address stored in `ptr`

### How do you declare a pointer to an integer?

```cpp
int* ptr;
```

### How do you make a pointer point to a variable?

```cpp
int a = 10;
int* ptr = &a;
```

### How do you change a variable through a pointer?

```cpp
*ptr = 20;
```

If `ptr` points to `a`, this updates `a`.

### Can two pointers point to the same variable?

Yes. If both store the same address, both can access and modify the same underlying value.

### What is `nullptr`?

`nullptr` is a special value that means the pointer is not pointing to any valid object.

```cpp
int* ptr = nullptr;
```

## Common Interview Traps

- Confusing the address with the value
- Forgetting to initialize pointers
- Dereferencing invalid or null pointers
- Mixing up `*ptr++` with `(*ptr)++`
- Assuming printed memory addresses are fixed or meaningful across runs

## Operator Precedence Trap

### What is the difference between `*ptr++` and `(*ptr)++`?

`*ptr++` means:

```cpp
*(ptr++)
```

The pointer moves to the next location.

`(*ptr)++` means:

```cpp
(*ptr)++
```

The value being pointed to is incremented.

## Short Talking Points

- "A pointer stores an address, not the direct value."
- "Dereferencing lets us read or update the value at that address."
- "Two pointers can refer to the same variable if they store the same address."
- "Pointer bugs often come from invalid addresses or precedence mistakes."

## Mini Practice Questions

1. What is the output meaning of `cout << ptr;` versus `cout << *ptr;`?
2. How do `&` and `*` work together in pointer code?
3. Why is `*ptr++` different from `(*ptr)++`?
4. What happens if you dereference `nullptr`?
5. Why are pointers important in C++ even when references exist?

## Quick Self-Check

You are ready to move on when you can explain:

- how a pointer stores an address
- how dereferencing works
- how to modify a value through a pointer
- the difference between changing a pointer and changing the pointed value
