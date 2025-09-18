# ft_printf

The **ft_printf** project from [42 School](https://42.fr) is a custom implementation of the standard C library function `printf`.  
The goal is to recreate its core functionality while learning about **variadic functions**, **format parsing**, and **string/number formatting**.

---

## 📌 Project Overview

- Re-implements the C standard library’s `printf` function.
- Handles a subset of format specifiers.
- Uses **variadic arguments (`stdarg.h`)**.
- Strengthens understanding of **formatting**, **buffering**, and **output** in C.

---

## ⚙️ Compilation

```sh
make        # builds libftprintf.a
make clean  # removes object files
make fclean # removes library and objects
make re     # full rebuild
