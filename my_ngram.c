


#include <stdio.h>

void countCharacters(const char* str) {
    int count[127] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 127; i++) {
        if (count[i] > 0) {
            printf("%c:%d\n", (char)i, count[i]);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
    
    const char* str = argv[1]; // Birinchi argument sifatida berilgan so'zni olamiz
    countCharacters(str);
    return 0;
}
