# 📚 C++ Module 00: Introduction to OOP

![Language](https://img.shields.io/badge/Language-C++98-blue)
![School](https://img.shields.io/badge/School-42-black)
![License](https://img.shields.io/badge/License-MIT-green)

## 🗣️ Overview

This repository contains the solutions for **Module 00** of the 42 School C++ curriculum. The goal of this module is to introduce the basics of **Object-Oriented Programming (OOP)** in C++. It covers namespaces, classes, member functions, stdio streams, initialization lists, static, const, and basic syntax differences between C and C++.

---
## 🚀 How to Run

Clone the repository and navigate to the project folder:

```bash
git clone [https://github.com/yourusername/CPP00.git](https://github.com/yourusername/CPP00.git)
cd CPP00
```
## 📂 Project Structure

### 📢 Exercise 00: Megaphone
A simple program that converts all input characters to uppercase. It behaves like a megaphone: if you shout into it, it shouts back!

**Key Concepts:**
- Basic C++ syntax (`iostream`)
- String manipulation
- Arguments (`argc`, `argv`)

```bash
cd ex00
make
./megaphone "shhhhh... I think the students are asleep..."
```


### 📞 Exercise 01: My Awesome PhoneBook
A basic phonebook software that stores up to **8 contacts**. It behaves like a retro 80s phonebook system.

**Features:**
- **ADD:** Saves a new contact. If the memory is full (8 contacts), the oldest one is replaced by the new one.
- **SEARCH:** Displays a formatted list of contacts and allows viewing detailed information for a specific index.
- **EXIT:** Quits the program and wipes the data.
- **Validation:** Handles empty inputs, EOF signals (`Ctrl+D`), and invalid indexes gracefully.

**Key Concepts:**
- Classes and Objects (`PhoneBook`, `Contact`)
- Input/Output streams (`std::cin`, `std::cout`, `std::getline`)
- Formatting output (`std::setw`)
- Static arrays

**Usage**: Follow the prompt > Type "ADD", "SEARCH" or "EXIT"
```bash
cd ../ex01
make
./phonebook
```

### 🏦 Exercise 02: The Job Of Your Dreams
A reverse-engineering task where a missing `Account.cpp` file must be recreated based on a log file and a header file.

**Key Concepts:**
- Static member variables and functions
- Timestamps and logging
- `diff` comparison
- Constructor/Destructor logic

```bash
cd ../ex02
make
./account
````

```bash
# 1. Run the program and save output to a file
./account > test.log

# 2. Compare your log with the original log (ignoring timestamps)
diff <(cut -d " " -f 2- 19920104_091532.log) <(cut -d " " -f 2- test.log)
```



