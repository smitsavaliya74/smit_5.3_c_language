#include<stdio.h>
#include<conio.h>

void main ()
{
  int choice,english,hindi,gujarati;
  clrscr();
  printf("\t\t**************** TELECOM CALL SERVICE ****************");
  printf("Press 1 For English.\n");
  printf("Press 2 For Hindi.\n");
  Printf("Press 3 For Gujarati.\n\n");
  printf("Enter Your Choice");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1 :
      printf("Press 1 for Internet Recharge  ");
      printf("Press 2 for Top - up Recharge  ");
      printf("Press 3 for Special Recharge   ");
       switch(english)
       {
	 case 1 :
	   printf("");
       }

      break;

    case 2 :
     printf("Internet Recharge ke liye 1 dabaiye ");
     printf("Top - up Recharge ke liye 2 dabaiye ");
     printf("Special Recharge ke liye 3 dabaiye  ");
     break;

    case 3 :
     printf("Internet Recharge mate 1 dabavo ");
     printf("Top - up Recharge mate 2 dabavo ");
     printf("Special Recharge mate 3 dabavo  ");
     break;

  }



  getch();
}