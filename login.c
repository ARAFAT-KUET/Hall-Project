
#include<stdio.h>
#include "sign_up.h"
#include "login_page_student.h"

void login()
{
    int choice;
printf("*****LOGIN*****\n\n\n\n");
 printf("1. Student Login\n");
 printf("2. Administrator Login \n\n\n");
 printf("NO ACCOUNT ??? 3.SIGN UP \n\n \n\n");

 printf("Enter your choice (1 or 2 or 3): ");
scanf("%d", &choice);
 if(choice==1){
 login_page_student();
 }else if(choice==2){
 printf("logine");
 }else if(choice==3){
 sign_up();
 }else
 {
     printf("Enter valid choice");
 }

}
