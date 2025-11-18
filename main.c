// Updated code to fix security vulnerability
int main(int argc, char *argv[]) {
    char buffer[10];  
    
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv);
        return 1;
    }
    gets(buffer); 
    printf("Buffer content: %s\n", buffer);
    
    return 0;
}
