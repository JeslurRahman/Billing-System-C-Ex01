
//a
/*

#include<stdio.h>
#include<string.h>

int main()
{
    int i,package;
    float km,price;

    printf("Choose a Package : \n\n 1.Comfort Journey \n 2.Budget cab Journey \n 3.Crowded Journey – Dual A/C \n 4.Crowded Journey – Single A/C \n\n (Enter the Numeric value)\n");
    scanf("%d",&package);

    printf("Enter the Total distance of the tour in Kilometers:");
    scanf("%f",&km);


    if(package==1)
    {
        printf("Package Name: Comfort Journey\n");

        price=150+175*(km-1);

        printf("Total Amount: Rs.%f",price);

    }
    else if(package==2)
    {
        printf("Package Name: Budget cab Journey\n");

        price=100*km;

        printf("Total Amount: Rs.%f",price);
    }
    else if(package==3)
    {
        printf("Package Name: Crowded Journey – Dual A/C\n");

        price=130+150*(km-1);

        printf("Total Amount: Rs.%f",price);
    }
    else if(package==4)
    {
        printf("Package Name: Crowded Journey – Single A/C\n");

        price=120+130*(km-1);

        printf("Total Amount: Rs.%f",price);
    }
    else
        printf("Invalid Package\n");
}

*/

// c

#include<stdio.h>
#include<string.h>

int main()
{
    int i,package;
    float km,price;
    char answr;

    printf("\t\t\t welcome to 'BLACK CABS TRANSPORT'\n");

    do{

    printf("\nChoose a Package : \n\n 1.Comfort Journey \n 2.Budget cab Journey \n 3.Crowded Journey – Dual A/C \n 4.Crowded Journey – Single A/C \n\n (Enter the Numeric value)\n");
    scanf("%d",&package);

    printf("\nEnter the Total distance of the tour in Kilometers:");
    scanf("%f",&km);


    if(package==1)
    {
        printf("Package Name: Comfort Journey\n");

        price=150+175*(km-1);

        printf("Total Amount: Rs.%f",price);

    }
    else if(package==2)
    {
        printf("Package Name: Budget cab Journey\n");

        price=100*km;

        printf("Total Amount: Rs.%f",price);

    }
    else if(package==3)
    {
        printf("Package Name: Crowded Journey – Dual A/C\n");

        price=130+150*(km-1);

        printf("Total Amount: Rs.%f",price);
    }
    else if(package==4)
    {
        printf("Package Name: Crowded Journey – Single A/C\n");

        price=120+130*(km-1);

        printf("Total Amount: Rs.%f",price);
    }
    else
    {
        printf("Invalid Package\n");
    }

        printf("\n Do you have more customers? \n Y.Yes \n N.No\n");
        scanf("%s",&answr);
        i++;

    }
     while(answr=='y'||answr=='Y');

}
