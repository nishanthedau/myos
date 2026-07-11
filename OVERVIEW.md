# OS

An educational x86 operating system written from scratch in C++ and x86 Assembly to explore low-level systems programming and kernel development.

## Implemented

### Boot Process
- Multiboot-compliant kernel
- GRUB bootloader support
- Custom linker script for kernel memory layout
- Bootable ISO generation
- Successfully boots on an emulated x86 machine using QEMU

### Kernel Initialization
- Assembly bootloader (`loader.s`)
- Stack initialization
- Transition from Assembly to C++
- Custom kernel entry point (`kernelMain`)

### VGA Text Driver
- Direct memory-mapped VGA text mode output (`0xB8000`)
- Basic `printf()` implementation
- Character rendering
- Automatic line wrapping
- Newline (`\n`) support

### Global Descriptor Table (GDT)
- Complete GDT implementation
- Null Segment Descriptor
- Code Segment Descriptor
- Data Segment Descriptor
- Segment Descriptor abstraction
- GDT loading during kernel initialization

## Current Progress

- ✅ Bootloader
- ✅ Kernel Initialization
- ✅ VGA Text Mode Driver
- ✅ Basic Terminal Output
- ✅ Global Descriptor Table (GDT)

## Planned

- Interrupt Descriptor Table (IDT)
- Hardware Interrupt Handling
- Programmable Interrupt Controller (PIC)
- Keyboard Driver
- Timer Driver
- Memory Management
- Command Line Interface (CLI)
- Process Scheduling
