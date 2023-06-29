#include<stdio.h>

int main()
{
        int m1,m2,m3,m4,m5,m6,a,b;
        printf("enter 6 subjects");
        scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
        a=m1+m2+m3+m4+m5+m6;
        b=a*100/600;
        switch(b)
        {
                case 80 ... 100://if(b>=80&&b<=100)
                                {
                        printf("honour\n");
                                }
                         break;
                case 60 ... 79:// if(b>=60&&b<=79)
                               {
                        printf("first division\n");
                               }
                         break;
		case 50 ... 59://if(b>=50&&b<=59)
                               {
                        printf("second division\n");
			       }
			       break;
                case 40 ... 49: //if(b>=40&&b<=49)
                               {
                                       printf("third division\n");
                               }
                               break;
                case 0 ... 39://if(b<=39)
                             {
                                     printf("fail");
                             }
                               break;
                default:printf("enter valid numbers");
                        break;
        }
}


          
