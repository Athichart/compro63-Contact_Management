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

        /* *********************edit contacts************************/

    case 4:

        system("cls");

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");

        fflush(stdin);

        printf("..::Edit contact\n");
        printf("===============================\n\n");
        printf("\t..::Enter the name of contact to edit:");

        scanf("%[^\n]",name);

        while(fread(&list,sizeof(list),1,fp)==1)

        /*check name in list*/
        {

            if(stricmp(name,list.name)!=0)

                fwrite(&list,sizeof(list),1,ft);

        }

        fflush(stdin);

        printf("\n\n..::Editing '%s'\n\n",name);

        printf("..::Name(Use identical):");

        scanf("%[^\n]",&list.name);

        fflush(stdin);

        printf("..::Phone:");

        scanf("%ld",&list.phone);

        fflush(stdin);

        printf("..::address:");

        scanf("%[^\n]",&list.add);

        fflush(stdin);

        printf("..::email address:");

        gets(list.email);

        printf("\n");

        fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat","contact.dll");

        break;
            
    default:
        printf("Invalid Choice");
        break;
    }
}

