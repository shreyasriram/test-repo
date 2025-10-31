#include <stdio.h>
#include <string.h>

#include <stdio.h>

int main(int argc, char *argv[]) {
    char buffer[10];  
    
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv);
        return 1;
    }
    fgets(buffer, sizeof(buffer), stdin); 
    printf("Buffer content: %s\n", buffer);
    
    return 0;
}
