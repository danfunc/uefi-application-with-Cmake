#include <Uefi.h>
EFI_STATUS EfiMain(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
  SystemTable->ConOut->OutputString(SystemTable->ConOut,
                                    L"Hello, world! kai!\n");
  while (1) {
  }

  return 0;
}