




int main()
{
    system("CLS");
    system("color 0A");

    FILE *details;
    details = fopen("park details.txt", "a");

    printf("\n ENTER TODAYS DATE FOR CONTINUE ");
    printf("\n\tENTER DAY: " );
    scanf("%d", &date);
    printf("\n\tENTER MONTH: ");
    scanf("%d", &month);
    printf("\n\tENTER YEAR: ");
    scanf("%d", &year);

    fprintf(details, "\n\nDATE: %d-%d-%d", date, month, year);
    fprintf(details, "\n---------------");
    system("CLS");

    while(1)
    {
        car();
        menu();
        printf("ENTER AN OPTION: ");
        scanf("%d", &option);
        FILE *details;
        details = fopen("park details.txt", "a");

        switch(option)
        {
        case 1:
            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total1 +=100;

            fprintf(details, "\t\tBUS\t\t%.2f\t\t%d\t\t100\n", time, number);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;

        case 2:

            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total2+=80;
            fprintf(details, "\t\tTRUCK      \t\t%.2f\t\t%d\t\t80\n", time, number);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;

        case 3:
            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total3+=70;
            fprintf(details, "\t\tPRIVATE CAR\t\t%.2f\t\t%d\t\t70\n", time, number);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;

        case 4:
              printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total4+=60;
            fprintf(details, "\t\tMOTOR CYCLE\t\t%.2f\t\t%d\t\t60\n", time, number);
                printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;

        case 5:
            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);

            total5+=40;
            fprintf(details, "\t\tBY CYCLE\t\t%.2f\t\t%d\t\t40\n", time, number);
             printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;

        case 6:
            system("CLS");
            park_details();
                 printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK TO MAIN MENU....");

             getch();
            system("CLS");
            break;

        case 7:
            total=total1+total2+total3+total4+total5;
            fprintf(details,"\t\t\t\t\t\t\t\t\t\t\t Total = %d",total);
             fprintf(details,"\n.....................................................................................................\n");



            exit(0);
            break;

        default:
             printf("INVALID INPUT!!!");
            getch();
             printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK TO MAIN MENU....");
            system("CLS");
            break;

        }


    }


    return 0;
}