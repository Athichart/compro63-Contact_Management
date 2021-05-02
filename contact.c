#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>

// Creating Struct to store data krub
struct contact
{
    long phone;
    char name[30],add[100],email[60];
} list;

char namefind[30],name[30];
FILE *fp, *ft;
int i,n,ch,l,found;

int main(){

main:
    // Creating Main Menu Interface krub
    system("cls");    
    printf("\n\t <<< Contact Management System by GFKK >>>");
    printf("\n\n\t\t\tM-E-N-U\n");
    printf("\t\t<+-+-+-+-+-+-+-+-+-+>\n");
    printf("\t\t[1] Add\n");
    printf("\t\t[2] List all\n");
    printf("\t\t[3] Search\n");
    printf("\t\t[4] Edit\n");
    printf("\t\t[5] Delete\n");
    printf("\t\t[0] Exit\n");
    printf("\t\t<+-+-+-+-+-+-+-+-+-+>\n");
    printf("\t\tEnter number: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        printf("\n\n\t\tDo you want to exit?");
        break;
    // Add function
    case 1:
        system("cls");
        fp=fopen("contact.txt","a");
        for (;;)
        {
            fflush(stdin);
            printf("To exit enter blank space\nName:");
            scanf("%[^\n]",&list.name);
            if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)
            break;
            fflush(stdin);
            printf("Phone:");
            scanf("%ld",&list.phone);
            fflush(stdin);
            printf("Address:");
            scanf("%[^\n]",&list.add);
            fflush(stdin);
            printf("Email address:");
            gets(list.email);
            printf("\n");
            fwrite(&list,sizeof(list),1,fp);
        }
        fclose(fp);
        break;


    default:
        printf("Invalid Choice");
        break;
    }
}

