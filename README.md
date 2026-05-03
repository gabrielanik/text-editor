# Text Editor Application

This project is a simple text editor developed in C++ using the Qt framework. It allows users to create, open, edit and save text files through a graphical user interface. The application demonstrates fundamental concepts of object-oriented programming, file handling, and GUI development.

## Build and Run instructions

### Prerequisites

Make sure the following tools are installed:

- **Qt (Qt 5 or Qt 6)**  
  Install via the official Qt installer: https://www.qt.io/download

- **C++ compiler**
  - macOS: clang 
  - Linux: gcc/g++
  - Windows: MSVC or MinGW-w64

- **CMake (recommended)**  
  Version 3.16 or higher

- **Visual Studio Code (recommended)**

---

### Required VS Code Extensions

- Qt Extension Pack  
- C/C++ (Microsoft)  
- CMake Tools (Microsoft)  

---

### Running the Application in VS Code

Follow these steps to configure and run the project:

### 1. Install Qt Extension

Install the Qt extension pack from the VS Code marketplace.


### 2. Open the Project

```bash
git clone https://github.com/your-username/your-qt-app.git
cd your-qt-app
code .
```

---

### 3. Register Qt Installation

Open Command Palette:

```
Cmd + Shift + P   (macOS)
Ctrl + Shift + P  (Windows/Linux)
```

Run:

```
Qt: Register Installation
```

Select your Qt installation path.

---

### 4. Build and Run (VS Code GUI)

From Command Palette:

```
CMake: Build
CMake: Run
```

---

### 5. Debug Configuration

Open Run & Debug:

```
Cmd + Shift + D
```

Create `launch.json` and select:

```
Qt: Debug with cppdbg
```

---

## Build with CMake (Terminal Alternative)

If you prefer using the terminal or if VS Code does not detect Qt automatically:

### 1. Create build directory

```bash
mkdir build
cd build
```

---

### 2. Configure the project

```bash
cmake ..
```

If Qt is not found:

```bash
cmake -DCMAKE_PREFIX_PATH=/path/to/Qt ..
```

---

### 3. Build

```bash
cmake --build .
```

---

### 4. Run

```bash
./YourAppName
```

---

## Notes

- Qt must be correctly registered in VS Code
- If build fails, check `CMAKE_PREFIX_PATH`
- Ensure your compiler matches your Qt installation
- On macOS, install required tools:

```bash
xcode-select --install
```

## Alternative: Build with Qt Creator

1. Open **Qt Creator**
2. Select **Open Project**
3. Choose the `CMakeLists.txt` file
4. Configure the kit (compiler + Qt version)
5. Click **Run**
