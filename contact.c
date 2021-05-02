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
{
