#include <stdio.h>

int main(){
    // creating pointer
    FILE *p;
    char ch;
    
    // Opens file to read
    p = fopen("sample.txt", "r");

    while(1){
        ch = fgetc(p); // Gets data by char
        if(ch==EOF){break;} // Checks for any data
        printf("%c", ch);
    }
    return 0;
}
