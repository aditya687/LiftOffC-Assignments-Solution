#include <stdio.h>  
#include<conio.h>  
int main() {  
    char c;  
    printf("Enter an Alphabet\n");//taking character as c  
    scanf("%c", &c);  
    switch(c) {  /*checking input as vowel or consonant using switch case*/
        case 'a':    
        case 'A':
        case 'e':  
        case 'E':
        case 'i':  
        case 'I':  
        case 'o':  
        case 'O':  
        case 'u':  
        case 'U': printf("%c is VOWEL", c);  
        break;  
        default: printf("%c is CONSONANT", c);  
    }  
    return 0;  
}
