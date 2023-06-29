
#include<stdio.h>
enum first{sunday,monday,tuesday};
enum second{jan,feb,march};
int main()
{
printf("%d%d\n",sunday,tuesday);
printf("%d\n",feb);
}
/*if we define two enum having same scope, then these two enums should have different enum names otherwise compiler will throw an error.
 enum first{sunday,monday,tuesday};
enum second{jan,feb,march,sunday};
*/
