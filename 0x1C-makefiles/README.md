# 0x1C. Makefiles

This project is part of the ALX Software Engineering program. It focuses on understanding and using **Makefiles**, an essential tool in building and managing C projects.

## Learning Objectives

By the end of this project, you should be able to:

- Understand what **make** and **Makefiles** are.
- Use Makefiles to compile and manage C programs.
- Define and use rules in Makefiles.
- Differentiate between explicit and implicit rules.
- Create common and useful Makefile rules.
- Understand and use variables in Makefiles.

## Resources

- [What is a makefile and how does it work](https://opensource.com/article/18/8/what-how-makefile)
- [Installing the make utility](https://www.gnu.org/software/make/)
- [make-official documentation](https://www.gnu.org/software/make/manual/make.html)
- [More about Makefile](https://makefiletutorial.com/)

## Requirements

- **Editor:** `vi`, `vim`, `emacs`
- **Operating System:** Ubuntu 20.04 LTS
- **GCC version:** 9.3.0
- **Make version:** GNU Make 4.2.1
- All files should end with a new line.
- A `README.md` file is mandatory at the root of the project directory.

## Tasks Overview

### 0. **make -f 0-Makefile**

- Create a basic Makefile to build the executable `school`.
- **Requirements:**
  - No variables.
  - Rule `all` compiles the executable.

### 1. **make -f 1-Makefile**

- Extend the Makefile to use variables `CC` for the compiler and `SRC` for the source files.
- **Requirements:**
  - Rule `all` compiles the executable.

### 2. **make -f 2-Makefile**

- Introduce object files and optimize the Makefile.
- **Requirements:**
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`.
  - Rule `all` recompiles only the updated files.

### 3. **make -f 3-Makefile**

- Add cleaning and recompiling rules.
- **Requirements:**
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`.
  - Rules: `all`, `clean`, `oclean`, `fclean`, `re`.

### 4. **A complete Makefile**

- Add compiler flags for stricter compilation.
- **Requirements:**
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`.
  - Rules: `all`, `clean`, `fclean`, `oclean`, `re`.

### 5. **Island Perimeter (Python)**

- Write a Python function `island_perimeter(grid)` that calculates the perimeter of an island in a grid.
- **Requirements:**
  - First line contains `#!/usr/bin/python3`.
  - You are not allowed to import any modules.

### 6. **make -f 100-Makefile**

- Create a more advanced Makefile.
- **Requirements:**
  - Rules: `all`, `clean`, `fclean`, `oclean`, `re`.
  - Restrict the number of times you use certain variables like `$(CC)` and `$(RM)`.
  - Makefile should not compile if the header file is missing.

## Conclusion

This project helps in understanding how to create and manage Makefiles to streamline the compilation and management of C programs. Proper understanding of Makefiles is crucial in working on large-scale C projects efficiently.
