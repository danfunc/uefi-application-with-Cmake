set(CMAKE_C_COMPILER clang)
set(CMAKE_AS llvm-as)
set(CMAKE_NM llvm-nm)
set(CMAKE_OBJDUMP llvm-objdump)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER_TARGET x86_64-pc-windows-msvc)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
include_directories(include include/UEFI include/X64)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -mno-red-zone -fno-stack-protector -fshort-wchar -target x86_64-pc-windows-msvc -nostdlib")
set(ld_flags "-Wl,-subsystem:efi_application -Wl,-entry:EfiMain -fuse-ld=lld-link")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${ld_flags}")

