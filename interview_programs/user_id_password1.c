#include<stdio.h>
#include<string.h>
int main(){
char name[20];
char password[10];
printf("Enter username: ");
scanf("%s",name);
printf("Enter password: ");
scanf("%s",password);
if (strcmp(name, "sunny") == 0 && strcmp(password, "pass") == 0)
printf("Access granted\n");
else printf("Access denied\n");
}
