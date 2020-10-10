#include <onlineShoppingCart_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

int main()
{
char username[15];
char password[12];


printf("Enter your username:\n");
scanf("%s",&username);

printf("Enter your password:\n");
scanf("%s",&password);

//Username = christy
//Password = 123
if(strcmp(username,"christy")==0){
  if(strcmp(password,"123")==0){

    printf("\nWelcome.Login Success!");
    onlineShopping();


    }else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
}
 return 0;
}
