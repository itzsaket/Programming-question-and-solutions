// Online C compiler to run C program online
#include <stdio.h>

int strlen(char *str){
    int i = 0;
    for (i = 0; *(str + i) != '\0'; i++);
    return i;
}

void revstr(char *str){
    
    int len = strlen(str);
    int i, temp;
    printf("string length %d\n",len);
    for (i = 0; i<len/2 ; i++) {
        temp = str[i];
        str[i] = str[len -i -1];
        str[len -i -1] = temp;
    }
    
}


int main() {
    
    char str[50];
    printf("Enter a string:");
    gets(str);
    printf("Entered string %s\n",str);
    revstr(str);
    
    printf("reverse string %s\n",str);
    

    return 0;
}