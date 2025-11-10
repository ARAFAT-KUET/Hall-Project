
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int sign_up(){

    int roll;
    char filename[50];
    char name[100];
    char Hall_name[100];
    char password[100];



    printf("=== Student Sign Up ===\n");
    printf("Enter your full name : ");
    getchar();
    gets(name);





    printf("Enter your roll number : ");
    scanf("%d",&roll);

    printf("Enter your Hall name : ");
    getchar();

    gets(Hall_name);

    printf("Create a new password : ");
    getchar();
    gets(password);


    sprintf(filename,"%d.txt",roll);
    FILE *fp;
    fp=fopen(filename,"w");


    if (fp == NULL) {
        printf("❌ Error creating file!\n");
        return 1;
    }

    fprintf(fp,"name: %s \n",name);
    fprintf(fp, "Roll: %d\n", roll);
    fprintf(fp, "Hall name: %s\n", Hall_name);
    fprintf(fp, "password: %s\n", password);




    fclose(fp);


    printf("SIGN UP SUCCESSFULL !!");




}
