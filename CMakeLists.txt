cmake_minimum_required(VERSION 3.16)

project(SmartHomeProject VERSION 0.1 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required Qt modules
find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

# Apply Qt standard setup
qt_standard_project_setup(REQUIRES 6.5)

# Add the executable target
qt_add_executable(appSmartHomeProject
    main.cpp
)

# Add the QML module
qt_add_qml_module(appSmartHomeProject
    URI SmartHomeProject
    VERSION 1.0
    QML_FILES
        Main.qml
    SOURCES
        devicecontroller.h devicecontroller.cpp
        deviceobserver.h deviceobserver.cpp
)

# Target properties for macOS/iOS/Windows bundles
set_target_properties(appSmartHomeProject PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    # Uncomment and customize the line below if you need a bundle identifier for macOS/iOS
    # MACOSX_BUNDLE_GUI_IDENTIFIER com.example.smarthome
)

# Link Qt modules
target_link_libraries(appSmartHomeProject
    PRIVATE Qt6::Quick
)

# Install rules
include(GNUInstallDirs)
install(TARGETS appSmartHomeProject
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
