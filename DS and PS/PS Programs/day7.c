#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    char a[10];
    int check;
    scanf("%s",&s);

    strcpy(a,strrev(s));
    printf("%s\n",a);
    check=strcmp(s,a);
    if(check==0)
        printf("Palindrome\n");
    else
        printf("Not\n");
}
