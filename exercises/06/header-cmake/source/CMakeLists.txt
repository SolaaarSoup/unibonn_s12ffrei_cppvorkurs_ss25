# Mindestversion von CMake festlegen, hier Version 3.10 oder höher
cmake_minimum_required(VERSION 3.10)

# Projektdefinition: Name, Version und verwendete Programmiersprachen
project(SimpleMathProject VERSION 1.0 LANGUAGES CXX)

# Setze den verwendeten C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Definiere Variablen für die Quell- und Headerverzeichnisse
set(SRC_DIR "${CMAKE_SOURCE_DIR}")
set(INC_DIR "${CMAKE_SOURCE_DIR}/../include")

# ---
# Erstellen einer statischen Bibliothek für die Mathefunktionen:
# Die Bibliothek wird aus der Datei simple_math.cpp erstellt, die sich im source-Verzeichnis befindet.
# ---
add_library(simple_math STATIC ${SRC_DIR}/simple_math.cpp)
add_library(double_int STATIC ${SRC_DIR}/double_int.cpp)

# Füge das Include-Verzeichnis hinzu, damit alle Targets den Header simple_math.h finden.
target_include_directories(simple_math PUBLIC ${INC_DIR})
target_include_directories(double_int PUBLIC ${INC_DIR})

# ---
# Liste der Executable-Programme, die die simple_math-Bibliothek nutzen.
# Hier werden drei Programme erwartet: prog1.cpp, prog2.cpp, prog3.cpp.
# ---
set(PROGRAMS prog1 prog2 prog3 prog4)

# ---
# Durchlaufe die Liste der Programme und erstelle jeweils ein Executable,
# das mit der Bibliothek simple_math verlinkt wird.
# Dies ist ein Beispiel, wie man in CMake Schleifen verwendet.
# ---
foreach(prog IN LISTS PROGRAMS)
    # Erstelle das Executable aus der entsprechenden .cpp-Datei im source-Verzeichnis
    add_executable(${prog} ${SRC_DIR}/${prog}.cpp)
    # Verlinke das Executable mit der simple_math-Bibliothek
    target_link_libraries(${prog} PRIVATE simple_math)
    target_link_libraries(${prog} PRIVATE double_int)
endforeach()