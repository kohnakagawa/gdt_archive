#include <windows.h>

// https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/ntifs/ne-ntifs-_memory_information_class
typedef enum _MEMORY_INFORMATION_CLASS {
  MemoryBasicInformation
} MEMORY_INFORMATION_CLASS;

// https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/ntifs/nf-ntifs-ntqueryvirtualmemory
NTSYSCALLAPI NTSTATUS NtQueryVirtualMemory(
  HANDLE                   ProcessHandle,
  PVOID                    BaseAddress,
  MEMORY_INFORMATION_CLASS MemoryInformationClass,
  PVOID                    MemoryInformation,
  SIZE_T                   MemoryInformationLength,
  PSIZE_T                  ReturnLength
);

// From RactOS https://doxygen.reactos.org/d7/de4/boot_2environ_2lib_2rtl_2libsupp_8c.html#a281660cbec703b18ab0f91f1cfc9c5fa
NTSTATUS RtlImageNtHeaderEx(
  ULONG Flags,
  PVOID Base,
  ULONG64	Size,
  PIMAGE_NT_HEADERS* OutHeaders 
);
