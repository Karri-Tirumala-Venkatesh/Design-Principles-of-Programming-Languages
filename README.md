# Design Principles for Programming Languages

## 📋 Project Overview

This repository was built as part of the **"Design Principles for Programming Languages"** course during my second year of undergraduate studies. It includes practical implementations of various programming language concepts and data structures, demonstrating core principles of language design and implementation.

## ✨ Main Features

### 🔢 Long Integer Operations
- **Long Integer Multiplication**: Implementation using C language character arrays (with maximum length constraints) converted to linked lists
- **Long Integer Division**: Similar approach for division operations using character arrays and linked lists
- **Dynamic Long Integer Multiplication**: Supports dynamically sized numbers with no size constraints

### 📊 Data Processing
- **Input Data Classification**: Classifies input data as Integer, String, and Float types
- **Set Operations**: Implementation of sets and set operations through bit vectors
- **Basic Python Dictionary**: Custom implementation of a dictionary data structure

## 🛠️ Languages Used
- **C (100%)**: All implementations are written in C programming language

## 🚀 Installation & Usage Instructions

### Prerequisites
- GCC compiler or any C compiler
- Make utility (optional)

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/Karri-Tirumala-Venkatesh/Design-Principles-of-Programming-Languages.git
   ```

2. Navigate to the project directory:
   ```bash
   cd Design-Principles-of-Programming-Languages
   ```

### Usage
Compile and run individual programs:

```bash
# For long integer multiplication
gcc long_multiply.c -o long_multiply
./long_multiply

# For dynamic long multiplication
gcc dynamic_long_multiply.c -o dynamic_long_multiply
./dynamic_long_multiply

# For data type classification
gcc data_types.c -o data_types
./data_types

# For set operations
gcc set.c -o set
./set

# For dictionary implementation
gcc dictionary.c -o dictionary
./dictionary

# For long division
gcc long_division.c -o long_division
./long_division
```

## 🤝 Contributing Guidelines

We welcome contributions to improve this educational repository! Here's how you can help:

### How to Contribute
1. **Fork** the repository
2. **Create** a new branch for your feature (`git checkout -b feature/amazing-feature`)
3. **Commit** your changes (`git commit -m 'Add some amazing feature'`)
4. **Push** to the branch (`git push origin feature/amazing-feature`)
5. **Open** a Pull Request

### Contribution Guidelines
- Ensure your code follows C programming best practices
- Add comments to explain complex algorithms
- Test your implementations thoroughly
- Update documentation if necessary

### Issues
Feel free to open issues for:
- Bug reports
- Feature requests
- Questions about implementations
- Documentation improvements

## 📄 License

This project is licensed under the MIT License - see below for details:

```
MIT License

Copyright (c) 2025 Karri Tirumala Venkatesh

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## 📚 Academic Context

This repository serves as a practical exploration of:
- **Memory Management**: Through linked list implementations
- **Data Structure Design**: Custom implementations of sets and dictionaries
- **Algorithm Optimization**: Efficient handling of large integers
- **Type Systems**: Classification and handling of different data types

---

**Course**: Design Principles for Programming Languages  
**Academic Year**: Second Year Undergraduate Studies  
**Author**: Karri Tirumala Venkatesh
