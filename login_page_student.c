#include<stdio.h>
#include<string.h>

int login_page_student(){
int roll;
char password_new[100];
char filename[100];
char line[100];
char password_old[100];


printf("Enter Your Roll Number : \n");
scanf("%d",&roll);
getchar();



FILE *fp;

 sprintf(filename,"%d.txt",roll);
    fp=fopen(filename,"r");
        if (fp == NULL) {
        printf("YOU HAVE NO ACCOUNT . SIGN UP FIRST !!!\n");
        return 1;
    }




while(fgets(line,sizeof(line),fp)){
    if(strstr(line,"password:")!=NULL){
        sscanf(line,"password: %s",password_old);
        break;
    }
}
fclose(fp);

A:
printf("Enter Your password:\n ");


gets(password_new);


if(strcmp(password_old,password_new)==0){
    printf("LOGIN SUCCESSFULL ");
//    after_student_login(roll);

}else{
printf("WRONG PASSWORD !!!\n");
goto A;


}


}
