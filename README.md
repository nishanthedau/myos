# myos
long-term OS project

needs :
    grub-mkrescure
    qemu-system-x86
installed before hand to run the kernel

head into src,
    do : 
        make install
        make clean

head back to root directory,
    use qemu-system-i386 -cdrom myos.iso to run the os


