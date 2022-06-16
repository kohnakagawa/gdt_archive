# gdt files for Windows platform

## winternl64.gdt, winternl32.gdt

It contains the data types defined in x86\_64-w64-mingw32/include/winternl.h. For example,

- Windows NTAPI functions (e.g., NtQuerySystemInformation, NtCreateFile, ...)
- Windows RTL functions (e.g., RtlAnsiStringToUnicodeString, RtlInitUnicodeString, ...)

winternl32.gdt is the 32 bit version of winternl64.gdt.


