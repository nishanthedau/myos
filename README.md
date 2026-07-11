#updation in progress

# MyOS

A long-term operating system project built from scratch using C++ and x86 Assembly.

## Requirements

Install the following packages before building:

- grub-mkrescue
- qemu-system-x86

## Project Structure

```
myos/
├── iso/
│   └── boot/
│       ├── grub/
│           └── grub.cfg
│       
└── src/
    ├── kernel.cpp
    ├── linker.ld
    ├── loader.s
    └── makefile
```

## Build

From the `src` directory:

```bash
make
make install
```

## Run

From the project root:

```bash
grub-mkrescue -o myos.iso iso
qemu-system-i386 -cdrom myos.iso
```

If you're using GitHub Codespaces or another headless environment:

```bash
qemu-system-i386 -cdrom myos.iso -display curses
```