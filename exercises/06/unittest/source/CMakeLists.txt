cmake_minimum_required(VERSION 3.14)
project(PolynomialsUnitTests)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Catch2 per FetchContent aus GitHub herunterladen
include(FetchContent)
FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.4.0  
)
FetchContent_MakeAvailable(catch2)

# Bibliothek für die Polynomfunktionen
add_library(polynomials polynomial.cpp)
target_include_directories(polynomials PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)

#Ändern Sie nun die CMakeLists hier noch um, dass die Tests auch gebaut werden.

