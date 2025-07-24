# calculator_program-
# 🔢 Simple C Calculator

This is a basic calculator program written in C. It performs **addition, subtraction, multiplication, division, and modulus** operations based on user input.

## 📂 Files

- `calculator.c` — Contains the calculator logic and functions

## 💡 Features

- Input two integers
- Choose an operation:
  - `+` Addition
  - `-` Subtraction
  - `*` Multiplication
  - `/` Division
  - `%` Modulus
- Error handling for divide/modulus by zero

## ▶️ Sample Output
## 🧠 How It Works

- The program uses a `switch` statement to match the operator and calls the appropriate function.
- Results are printed directly from each function.
- Added basic input validation for division/modulus by zero.

## 🛠️ Compile and Run

```bash
gcc calculator.c -o calculator
./calculator
