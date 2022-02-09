




int year, month, date, number, option, total, total1=0, total2=0, total3=0, total4=0, total5=0;
float time;
char ch;

// Information of Car
void car()
{
    FILE *car;
    car = fopen("car image.txt", "r");
    if(car==NULL)
    {
         printf("FILE DOES NOT EXIST!");
    }
    else
    {
        while(!feof(car))
        {
            ch = fgetc(car);
            printf("%c", ch);
        }
    }

}

void park_details()
{
    FILE *details;
    details = fopen("ParkDetails.txt", "r");
    if(details==NULL)
    {
          printf("FILE DOES NOT EXIST!!!!");
    }
    else
    {
        while(!feof(details))
        {
           ch = fgetc(details);
           printf("%c", ch);
        }
    }


}

void menu()
{
    FILE *menu;
    menu = fopen("ParkMenu.txt", "r");
    if(menu==NULL)
    {
        printf("FILE DOES NOT EXIST!");
    }
    else
    {
        while(!feof(menu))
        {
            ch=fgetc(menu);
            printf("%c", ch);
        }
    }

}