# 24C-Series-EEPROM-driver
An MCU agnostic driver for the 24C series of EEPROMs commonly used in hobby electronics.

## Features
- Support partitioning the memory space into sectors each with their own boundary checks.
- Allows different writing schemes for different sectors. You can have one sector grow up and one grow down. Think of it like a stack and heap scheme. One grows up
  the other grows down and they meet in the middle.
- Look up table mechanism.
- Enough error reporting so that you know when you have exceeded memory space or reached a boundary.
