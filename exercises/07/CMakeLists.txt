cmake_minimum_required(VERSION 3.10)
project(PhysikSim)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Füge das include-Verzeichnis zu den Suchpfaden hinzu
include_directories(${PROJECT_SOURCE_DIR}/include)

# Liste der Quellcodedateien
set(SOURCES
    src/main.cpp
    src/vektor3d.cpp
    src/teilchen.cpp
)

# Erstelle das ausführbare Programm
add_executable(PhysikSim ${SOURCES})
