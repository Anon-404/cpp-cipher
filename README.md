
# cpp-cipher 🔐

Classic Caesar Cipher Encryption and Decryption Tool
Written in C++

## Features ✨

- 🔒 Encrypt Text: Securely encrypts your text using the Caesar Cipher method.

- 🔓 Decrypt Text: Decrypts text using a custom shift or tests all possible shifts.

- 🛠️ Customizable Shift Value: Choose a specific shift value for encryption and decryption.

- 🔍 Test All Shifts: Automatically tests all possible shifts when decrypting.

- 📖 User-Friendly Interface: Easy-to-use command-line interface.


## Installation 🛠️

#### Step 1: Install a C++ Compiler

Ensure you have g++ or any C++ compiler installed on your system.

- **Arch-based Linux:**

```bash
sudo pacman -S gcc
```

- **Debian-based Linux:**

```bash
sudo apt install g++ -y
```

- **Fedora:**

```bash
sudo dnf install gcc-c++
```

- **Termux:**

```bash
pkg install clang -y
```

#### Step 2: Clone and Build the Project

- **For Linux/Termux:**

```bash
git clone https://github.com/Anon-404/cpp-cipher
cd cpp-cipher
g++ cpp-cipher.cpp -o cpp-cipher -lstdc++
```

Now, you are ready to use the cpp-cipher tool!

## Usage 🧑‍💻

Run the cpp-cipher tool using the following syntax:

```bash
./cpp-cipher
```

## Main Options:

### Encryption
#### 🔐 Encrypt Text
Select the "Encryption" option to encrypt your plaintext with a specified shift.

### Decryption
#### 🔓 Decrypt Text
Choose the "Decryption" option to decrypt ciphertext either by using a custom shift or testing all possible shifts.


### Example:

#### Encryption:

```bash

./cpp-cipher
1) Encryption
Enter your text here: hello world
Enter shift number: 3

```

#### Output:
```bash
khoor zruog
```

### Decryption:
```bash
./cpp-cipher
2) Decryption
Enter encrypted text here: khoor zruog
1) Custom shift number
Enter shift number: 3
```

#### Output: 
```bash
hello world
```

### Contributions 🤝

Contributions are welcome! Feel free to open issues or submit pull requests.
