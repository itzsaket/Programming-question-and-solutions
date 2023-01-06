// Online C compiler to run C program online
#include <stdio.h>

int _strlen(char *str){
    int i = 0;
    while(*(str+i) != '\0'){
        i++;
    }
    return i;
}

int main() {
    char str[]= "saket mishra saket";
    int i , temp;
    char res[_strlen(str)];
    for (i = 0; str[i]!= '\0';i++) {
        int count = 0;
        for (int j = 0; str[j]!= '\0';j++) {
            if (str[i]==str[j]) {
                count++;
            }
        }
        if (count == 1) {
            int s = _strlen(res);
            res[s] = str[i];
        } 
    }
    
    
    // Write C code here
    printf("string: %s",res);

    return 0;
}