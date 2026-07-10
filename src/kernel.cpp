// #include "stdio.h"

static int x = 0;
static int y = 0;

void printf(const char *str){
    unsigned short *VideoMemory = (unsigned short *)0xb8000;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == '\n'){
            x = 0;
            y++;

            if(y >= 25)
                y = 0;
            continue;
        }

        VideoMemory[80 * y + x] = (VideoMemory[80 * y + x] & 0xFF00) | str[i];
        x++;

        if(x >= 80){
            x = 0;
            y++;

            if(y >= 25)
                y = 0;
        }
        // VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
    }
}

// minor fix to avoid bugs - ensure proper initialization
typedef void (*constructor)();
extern "C" constructor start_ctors;
extern "C" constructor end_ctors;
extern "C" void callConstructors(){
    for(constructor* i = &start_ctors; i != &end_ctors; i++){
        (*i)();
    }
}

// extern cuz we dont want it to be renamed by compiler
extern "C" void kernelMain(void *multiboot_structure, unsigned int /*multiboot_magic*/){
    printf("test bzz\n");
    printf("testok\n");
    while (1);
}