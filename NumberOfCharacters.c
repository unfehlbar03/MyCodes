#include <stdio.h>
int main(){
    char inputstr[10000];
    int lower=0, upper=0, special=0,num;
    printf("Please enter a string consisting of uppercase, lowercase, special character: ");
    gets(inputstr);
    int i =0;
    while(inputstr[i] != '\0'){
        if( inputstr[i]>=65 && inputstr[i]<=90 )
            upper++;
        else if( inputstr[i]>=97 && inputstr[i]<=122)
            lower++;
        else if(inputstr[i]>=48 && inputstr[i]<=57){
            num++;
        }
        else{
            special++;
        }
        i++;
    }

    printf("In the string provided by user we have:\nNumber of uppercase character = %d \nNumber of lowercase character = %d\nNumber of special character = %d\n ", upper, lower,special);

    return 0;
}
