GPPPARAMS = -m32 -fno-use-cxa-atexit -nostdlib -fno-exceptions -fno-rtti -fno-builtin -fno-leading-underscore
ASPARAMS = --32
LDPARAMS = -m elf_i386

objects = loader.o kernel.o

%.o: %.cpp
	g++ $(GPPPARAMS) -o $@ -c $<

%.o: %.s
	as $(ASPARAMS) -o $@ $<

mykernel.bin: linker.ld $(objects)
	ld $(LDPARAMS) -T $< -o $@ $(objects)

install: mykernel.bin
	sudo cp $< /boot/mykernel.bin