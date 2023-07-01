#include <stdio.h>
#include <string.h>
int main()
{
    char string1[10];
    int i, l;
    int word = 0;
    printf("Enter a string:");
    scanf("%s", string1);
    l = strlen(string1);
    for(i=0;i < l ;i++){
        if(string1[i] != string1[l-i-1]){
            word = 1;
            break;
   }
}
    if (word) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}
