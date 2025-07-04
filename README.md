# Basic Encryption Tool

A C++ implementation of Caesar cipher and ROT13 encryption/decryption algorithms.

## Features

- **Caesar Cipher**:
  - Encrypt or decrypt text with a user-defined shift value (1-25)
  - Preserves case (uppercase/lowercase)
  - Maintains non-alphabetic characters (numbers, symbols, spaces)
  
- **ROT13**:
  - Special case of Caesar cipher with fixed 13-character shift
  - Same function performs both encryption and decryption
  
- **User Interface**:
  - Simple console menu system
  - Clear input prompts
  - Error handling for invalid inputs

## Prerequisites

- C++ compiler (GCC, Clang, or MSVC)
- CMake (optional, for alternative build method)
- Eclipse IDE with C/C++ support (if using Eclipse)

## Installation

### Method 1: Using Eclipse IDE

1. Clone or download this repository
2. In Eclipse:
   - File → Import → Existing Projects into Workspace
   - Select the project directory
   - Click Finish

### Method 2: Command Line Compilation

```bash
g++ -o EncryptionTool src/EncryptionTool.cpp
```

## Usage

### Menu Options:

```bash
1. Caesar Cipher - Encrypt
2. Caesar Cipher - Decrypt
3. ROT13 (Encrypt/Decrypt)
4. Exit
```
#### For Caesar Cipher:

- Enter text to process

- Enter shift value (1-25)

- View transformed text

For ROT13:

- Enter text to process

- View transformed text (same function encrypts/decrypts)

## Examples

### Caesar Cipher Encryption
```bash
Enter your choice: 1
Enter the text: Hello World
Enter shift value (1-25): 3
Encrypted text: Khoor Zruog
```
### Caesar Cipher Decryption
```bash
Enter your choice: 2
Enter the text: Khoor Zruog
Enter shift value (1-25): 3
Decrypted text: Hello World
```
### ROT13 Transformation
```bash
Enter your choice: 3
Enter the text: Uryyb Jbeyq
ROT13 transformed text: Hello World
```
