
##cpp-cipher 🔐

Classic Caesar Cipher Encryption and Decryption Tool
Written in C++

<div align="center">
  <img src="https://raw.githubusercontent.com/Anon-404/My-assets/main/cpp-cipher/cpp-cipher.jpg" alt="cpp-cipher Logo" width="200"/>
</div>Features ✨

🔒 Encrypt Text: Securely encrypts your text using the Caesar Cipher method.

🔓 Decrypt Text: Decrypts text using a custom shift or tests all possible shifts.

🛠️ Customizable Shift Value: Choose a specific shift value for encryption and decryption.

🔍 Test All Shifts: Automatically tests all possible shifts when decrypting.

📖 User-Friendly Interface: Easy-to-use command-line interface.


Installation 🛠️

Step 1: Install a C++ Compiler

Ensure you have g++ or any C++ compiler installed on your system.

Arch-based Linux:

sudo pacman -S gcc

Debian-based Linux:

sudo apt install g++ -y

Fedora:

sudo dnf install gcc-c++

Termux:

pkg install clang -y


Step 2: Clone and Build the Project

For Linux/Termux:

git clone https://github.com/Anon-404/cpp-cipher
cd cpp-cipher
g++ -o cpp-cipher main.cpp

Now, you are ready to use the cpp-cipher tool!

Usage 🧑‍💻

Run the cpp-cipher tool using the following syntax:

./cpp-cipher

Main Options:

Encryption
🔐 Encrypt Text
Select the "Encryption" option to encrypt your plaintext with a specified shift.

Decryption
🔓 Decrypt Text
Choose the "Decryption" option to decrypt ciphertext either by using a custom shift or testing all possible shifts.


Example:

Encryption:

./cpp-cipher
1) Encryption
Enter your text here: hello world
Enter shift number: 3

Output: khoor zruog

Decryption:

./cpp-cipher
2) Decryption
Enter encrypted text here: khoor zruog
1) Custom shift number
Enter shift number: 3

Output: hello world

Contributions 🤝

Contributions are welcome! Feel free to open issues or submit pull requests.
