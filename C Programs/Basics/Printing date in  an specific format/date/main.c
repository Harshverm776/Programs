#include<stdio.h>
#include<string.h>
char* month(int m)
{ char str[15];
  switch(m)
	{ case 1:
		{   strcpy(str,"january");

		}
		break;
 case 2:
		{ strcpy(str,"febraury");

		}
		break;
case 3:
		{ strcpy(str,"march");

		}
		break;
case 4:
		{  strcpy(str,"april");

		}
		break;
case 5:
		{ strcpy(str,"may");

		}
		break;
case 6:
		{ strcpy(str,"june");

		}
		break;
case 7:
		{ strcpy(str,"july");

		}
		break;
case 8:
		{ strcpy(str,"august");

		}
		break;
case 9:
		{strcpy(str,"september");

		}
		break;
case 10:
		{strcpy(str,"october");

		}
		break;
case 11:
		{ strcpy(str,"november");

		}
		break;
case 12:
		{ strcpy(str,"december");

		}
		break;
default:
		{
		    strcpy(str,"INVALID-INPUT");

		}

}
return(str);
}
void main()
{char mon[15];
 struct date
   {
	int day;
	int month;
	int year;
	}d;
 printf(" Enter the day of the month \n");
 scanf("%d",&d.day);
 if(d.day<1 || d.day>31)
  {printf(" INVALID INPUT\n");
  }
 else{
	printf(" Enter the month of the year\n");
	scanf("%d",&d.month);
	if(d.month<1 || d.month>12)
	{ printf("INVLAID-INPUT");
	}
	else{ strcpy(mon,month(d.month));
	      printf(" \nEnter the year( between 1950-2050) : ");
	      scanf("%d",&d.year);
	      printf(" DATE :\n %s  %d of the year %d ",mon,d.day,d.year);
	    }
     }
}
