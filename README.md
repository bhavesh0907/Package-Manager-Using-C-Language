# Package Manager

## Overview
The **Package Manager** is a simple C program that allows users to install, remove, and list packages using a command-line interface. It maintains package information in an array and ensures that duplicate installations are prevented while enabling basic package management operations. 🚀

## Features
- 📦 **Install Packages** – Add packages to the system while avoiding duplicates.
- 🗑 **Remove Packages** – Uninstall existing packages from the system.
- 📋 **List Installed Packages** – View a list of currently installed packages.
- ⚡ **Command-Line Interface** – Lightweight and easy to use.

## Repository Structure
```
Package-Manager/
│── src/                  # Source code files
│── include/              # Header files
│── docs/                 # Documentation
│── main.c                # Main program file
│── Makefile              # Build script
│── README.md             # Project documentation
```

## Technologies Used
- **Programming Language**: C
- **Data Structures**: Arrays, Structs
- **Development Tools**: GCC, Makefile

## Installation & Usage
### Prerequisites
Ensure you have a C compiler (GCC or Clang) installed on your system.

### Build & Run
```bash
# Clone the repository
git clone https://github.com/your-username/Package-Manager.git

# Navigate to the project directory
cd Package-Manager

# Compile the program
make

# Run the Package Manager
./package_manager
```

## Usage
1. **Launch the Package Manager**
   ```bash
   ./package_manager
   ```
2. **Follow on-screen instructions** to install, remove, or list packages.
3. **Exit the program** when done.

## Contributors
- **Bhavesh Mishra** *(Lead Developer)*

## Contributing
Contributions are welcome! If you find any issues or want to improve the project, feel free to fork the repository and submit a pull request.

---
Developed with ❤️ to simplify package management using C.
