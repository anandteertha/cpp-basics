# Interview Helper: References

Use this sheet for quick revision before practice rounds or interviews.

## Core Concepts

### What is a reference?

A reference is another name for an existing variable.

```cpp
int a = 10;
int& ref = a;
```

`ref` and `a` refer to the same object.

### Does a reference need initialization?

Yes. A non-const reference must be initialized when it is declared.

```cpp
int a = 10;
int& ref = a;
```

### Can a reference be changed to refer to another variable later?

No. After a reference is bound to an object, it cannot be reseated.

```cpp
int a = 10;
int b = 20;
int& ref = a;
ref = b;   // copies b into a, does not rebind ref
```

### Why use pass-by-reference?

It lets a function work with the original variable instead of a copy.

```cpp
void addFive(int& value) {
  value += 5;
}
```

### Can arrays be passed by reference?

Yes. You can take a reference to the whole array.

```cpp
void printArray(int (&arr)[3]) {
  for (int value : arr) {
    std::cout << value << std::endl;
  }
}
```

This keeps the array size and avoids pointer decay.

## Fast Interview Answers

### What is the difference between a reference and a pointer?

A reference is an alias for an existing object and is usually safer and simpler to use. A pointer stores an address and can be reassigned or set to `nullptr`.

### How do you declare a reference to an integer?

```cpp
int a = 10;
int& ref = a;
```

### Can a reference be null?

A normal reference is expected to refer to a valid object. Unlike pointers, references are not meant to represent "no object."

### What does pass-by-reference mean?

It means the function parameter refers to the caller's original variable, so changes inside the function affect the original value.

### How do references work with arrays?

You can reference a single element like `int& first = arr[0];` or the whole array like `int (&ref_arr)[3] = arr;`.

### What is a const reference?

A `const` reference lets you avoid copying while preventing modification.

```cpp
void printValue(const int& value) {
  std::cout << value << std::endl;
}
```

## Common Interview Traps

- Thinking a reference is a separate copied variable
- Forgetting that non-const references must be initialized
- Assuming `ref = b` makes `ref` point to `b`
- Forgetting that array parameters usually decay to pointers unless you use a reference
- Mixing up pass-by-reference with pass-by-pointer
- Forgetting when to use `const` references for read-only access

## Short Talking Points

- "A reference is another name for the same object."
- "Passing by reference lets a function modify the caller's variable."
- "References must be initialized and cannot be reseated."
- "A reference to an array preserves the array's size."
- "Const references are common for efficient read-only parameters."

## Mini Practice Questions

1. What happens when you modify a variable through its reference?
2. Why must a non-const reference be initialized?
3. What is the difference between `int& ref = a;` and `int* ptr = &a;`?
4. Why does `ref = b;` copy a value instead of rebinding the reference?
5. Why would `int (&arr)[3]` behave differently from `int arr[]` in a function?

## Quick Self-Check

You are ready to move on when you can explain:

- how references alias existing variables
- why references must be initialized
- how pass-by-reference works in functions
- how array references avoid pointer decay
- when references are preferable to pointers
