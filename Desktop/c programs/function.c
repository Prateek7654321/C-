#include<stdio.h>
void indian();
void french();
int main(){
    char user;
    printf("enter user\n");
    scanf("%c",&user);
    if (user=='i')
    {indian();}
    else
    { french();}
    return 0;

}
void indian(){
    printf("Namaste");
}
void french(){
    printf("Bonjour");
}
