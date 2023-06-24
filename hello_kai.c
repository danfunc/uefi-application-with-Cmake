#include <Uefi.h>

volatile int sub(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
  SystemTable->ConOut->OutputString(SystemTable->ConOut,
                                    L"Hello, world! kai!\n");
  return 1;
}