#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>

// Creating Struct to store data krub
struct contact
{
    long ph;
    char name[20],add[20],email[30];
} list;

char query[20],name[20];
FILE *fp, *ft;
int i,n,ch,l,found;

int main(){

main:
    // Creating Main Menu Interface krub
    system("cls");    
    printf("\n\t <<< Contact Management System by GFKK >>>");
    printf("\n\n\t\t\tM-E-N-U\n\t\t<+-+-+-+-+-+-+-+-+-+>\n\t\t[1] Add\n\t\t[2] List all\n\t\t[3] Search\n\t\t[4] Edit\n\t\t[5] Delete\n\t\t[0] Exit\n\t\t<+-+-+-+-+-+-+-+-+-+>\n\t\t");
    printf("Enter number: ");
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
            printf("To exit enter blank space in the name input\nName (Use identical):");
            scanf("%[^\n]",&list.name);
            if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)
            break;
            fflush(stdin);
            printf("Phone:");
            scanf("%ld",&list.ph);
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

