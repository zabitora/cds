#include <stdio.h>

int main(){
    FILE *p;
    char ch;

    p = fopen("sample.txt", "r");

    while(1){
        ch = fgetc(p);
        if(ch==EOF){break;}
        printf("%c", ch);
    }
    return 0;
}