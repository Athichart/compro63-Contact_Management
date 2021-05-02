    case 5:

        system("cls");
        fflush(stdin);
        printf("\n\n\t..::DELETE A CONTACT\n\t==========================\n\t..::Enter the name of contact to delete:");
        scanf("%[^\n]", &name);
        fp = fopen("contact.dll", "r");
        ft = fopen("temp.dat", "w");
        while(fread(&list,sizeof(list),1,fp)!=0)
        {
            if (stricmp(name,list.name)!=0)
                fwrite(&list,sizeof(list),1,ft);
        fclose(fp);
        fclose(ft);
        remove("contact.dll");
        rename("temp.dat","contact.dll");
        break;
        }
    default:
        printf("Invalid choice");
        break;