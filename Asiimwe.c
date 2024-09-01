#include <stdio.h>
int main(int argc, char *argv[]) {
// Loop through each argument and print it
for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
return 0;
}
