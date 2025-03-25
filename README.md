# 🏠 SmartHomeProject

A simple Qt Quick (QML + C++) based Smart Home UI that allows toggling devices like a **fan** and **light** using an intuitive interface.

---

## 📸 UI Preview

- Toggle buttons for **Fan** and **Light**
- Real-time status updates ("Fan is On/Off", "Light is On/Off")
- Modern UI with background image and colored controls

---

## 🔧 Tech Stack

| Component | Version | Purpose |
|----------|---------|---------|
| Qt       | 6.5+    | GUI Framework |
| QML      | 2.15    | UI Design |
| C++      | C++17   | Backend Logic |
| CMake    | ≥ 3.16  | Build System |

---

## 🧠 Architecture

### 📁 Project Structure

SmartHomeProject/
├── CMakeLists.txt
├── main.cpp
├── qml.qrc                  # Resource file (images/fonts/etc.)
├── images/                  # Background image and icons
│   └── background.jpg
├── devicecontroller.h/.cpp  # Main controller logic (C++)
├── deviceobserver.h/.cpp    # Optional observer (e.g., pattern implementation)
└── qml/
    └── Main.qml             # QML UI



### 🧩 MVP Pattern (Model-View-Presenter)
- **View (QML)**: `Main.qml` handles layout and user interaction
- **Presenter (Controller)**: `devicecontroller.cpp` contains logic
- **Model (optional)**: `deviceobserver.cpp` could represent data or state observer

---

## 🚀 Features

- ✅ Toggle devices (Fan, Light)
- ✅ Live status feedback
- ✅ Styled buttons with colors
- ✅ Background image support
- ✅ Clean, modular CMake-based setup

---

## 📦 Dependencies

Make sure you have the following installed:

- Qt 6.5 or higher
- CMake 3.16+
- Git (for version control)
- C++17 compatible compiler (MSVC, Clang, or GCC)

---

## 🛠️ Build Instructions

### 🖥️ Windows (Qt Creator or CLI)

1. Clone the repository:
   ```bash
   git clone https://github.com/yourname/SmartHomeProject.git
   cd SmartHomeProject
