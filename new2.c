#include <stdio.h>
int main()
{
    int this_is_a_number; //integer für die Nummer wird festgelegt
    printf("Bitte geben Sie eine Nummer ein:"); //Aufforderung
    scanf("%d",&this_is_a_number); //Hält nach eingegebender Nummer Ausschau, also der integer
    printf("Sie haben %d eingegeben.\n",this_is_a_number); //Ausgabe
    return 0;
}
