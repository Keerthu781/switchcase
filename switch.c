#include<stdio.h>

main()
{
   int choice;
   printf("\n\tEnter The choice: \n1.GRADE A \n2.GRADE B\n3.GRADE C\n4.GRADE D\n5.GRADE E\n6. FAIL\n");
   scanf("%d", &choice);
   switch(choice)
   {
      
       case 1 :
           printf("\n Your Grade is: A");
           break;
       case 2 :
           printf("\n Your Grade is: B" );
           break;
       case 3 :
           printf("\n Your Grade is: C" );
           break;
       case 4 :
           printf("\n Your Grade is: D" );
           break;
       case 5 :
           printf("\n Your Grade is: E" );
           break;
        case 6 :
           printf("\n Your FAIL" );
           break;
       default :
           printf("\n Invalid choice\n");
   }
}
