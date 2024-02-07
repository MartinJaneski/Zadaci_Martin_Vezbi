cmake_minimum_required(VERSION 3.14)

project(Zadaci_Martin_Vezbi LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Zadaci_Martin_Vezbi
  main.cpp
  zadaca_1.h zadaca_1.cpp
  zivotno.h zivotno.cpp
  datum.h datum.cpp
  dropki.h dropki.cpp
)
target_link_libraries(Zadaci_Martin_Vezbi Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS Zadaci_Martin_Vezbi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
