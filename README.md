# C++ Basics

This repository is a personal learning space for practicing core C++ concepts in small, focused folders.

## Current Structure

```text
cpp-basics/
|-- README.md
|-- 1. Basics_and_foundations/
|   |-- README.md
|   |-- INTERVIEW_HELPER.md
|   |-- main.cpp
|   `-- program.exe
|-- 2. Pointers/
|   |-- README.md
|   |-- INTERVIEW_HELPER.md
|   |-- main.cpp
|   `-- program.exe
`-- 3. References/
    |-- README.md
    |-- INTERVIEW_HELPER.md
    |-- main.cpp
    `-- program.exe
```

## Goal

The idea of this repo is to build C++ understanding one topic at a time:

- Keep each folder narrow and easy to review
- Write small examples before moving to larger programs
- Use the folder docs as both study notes and interview revision material

## How To Run

From the relevant folder, compile and run with a C++ compiler such as `g++`:

```bash
g++ main.cpp -o program
./program
```

On Windows PowerShell, you may run:

```powershell
g++ .\main.cpp -o program
.\program.exe
```

## Learning Approach

Each topic folder is expected to contain:

- `main.cpp` or other source files with focused examples
- `README.md` explaining the concept and code in that folder
- `INTERVIEW_HELPER.md` for quick revision, common questions, and talking points

## Current Topics

`1. Basics_and_foundations` covers a few foundational ideas:

- Integer division
- Floating-point division
- Mixed-type arithmetic
- Character values and ASCII conversion

`2. Pointers` introduces one of the most important C++ topics:

- Variable addresses
- Pointer declaration and initialization
- Dereferencing pointers
- Updating values through pointers
- Pointer expression pitfalls such as `*ptr++`

`3. References` continues the memory model discussion with a cleaner aliasing tool:

- Reference declaration and initialization
- References as aliases, not copies
- Updating values through a reference
- Pass-by-reference in functions
- Comparison thinking between references and pointers

## Notes

- `program.exe` is a generated build artifact and can be recreated anytime.
- As the repo grows, each folder can stay independent and beginner-friendly.
