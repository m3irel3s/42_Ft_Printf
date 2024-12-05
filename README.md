# 🔠 **Ft_Printf**

![Screenshot from 2024-12-05 14-19-10](https://github.com/user-attachments/assets/792da8a6-1ade-49eb-9faa-6a7d24c125db)

## 🔍 Overview
**Ft_Printf** is a custom implementation of the standard C `printf` function. This project re-creates the functionality of `printf` to handle formatted output, providing a learning experience in managing variable arguments and format specifiers in C. The goal is to build a robust, reusable version of `printf` that can be used across future projects, while understanding the intricacies of formatting and printing data in different styles.

---

## 🛠 Features

### **Supported Format Specifiers**
This `ft_printf` implementation supports the following format specifiers:
- `%c` – Print a single character.
- `%s` – Print a string.
- `%d` / `%i` – Print a signed integer.
- `%u` – Print an unsigned integer.
- `%x` / `%X` – Print a hexadecimal number (lowercase/uppercase).
- `%p` – Print a pointer (address).
- `%%` – Print a literal percent sign.

### **Functionality**
- Handles variable argument lists using the `va_list`, `va_start`, `va_arg`, and `va_end` macros.
- Efficiently prints data based on the provided format specifiers.
- Supports both uppercase and lowercase hexadecimal representation for integers.
- Ensures proper handling of edge cases, such as printing `NULL` or zero values.

---

## 💡 Inspiration

This project was created to deepen my understanding of variable argument functions in C and to build a useful utility for formatted output, which is a common task in many C-based applications. By re-implementing printf, I gained valuable insights into managing variable arguments, handling different data types, and ensuring robust and efficient formatting.

