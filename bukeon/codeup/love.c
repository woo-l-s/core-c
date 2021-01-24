#include <stdio.h>
#include<string.h>
int main(){

    char a[5];
    char b[11] = "I love you.";
    char love[5] = "love";



    scanf("%s", a);
    int compare = strcmp (a, love);

    if(compare == 0) {

    printf("%s", b);

    }



return 0;
}
