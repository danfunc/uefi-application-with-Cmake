cmake_minimum_required(VERSION 3.26)
project(test C CXX ASM)
add_executable(BOOTX64.efi hello.c hello_kai.c)
target_include_directories(BOOTX64.efi PUBLIC include include/UEFI include/X64)