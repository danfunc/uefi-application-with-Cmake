#include <Uefi.h>

int sub(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable);

EFI_STATUS EfiMain(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
  sub(ImageHandle, SystemTable);
  while (1) {
  }

  return 0;
}
