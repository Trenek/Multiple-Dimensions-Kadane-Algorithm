@echo off

cmake -G "MinGW Makefiles" -B build
cmake --build .\build\ --target all -j16
pause