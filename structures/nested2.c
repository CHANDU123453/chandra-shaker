//nested structure
#include<stdio.h>
#include<string.h>
struct company
{
char company_name[40];
int  reg_no;
};
struct employee
{
int employe_id;
char employe_name[45];
int age;
float salary;
struct company com;
};
int main()
{
struct employee emp={147,"chandu",24,45000.0};
strcpy(emp.com.company_name,"QUALCOMM");
emp.com.reg_no=183;
printf("displaying employee details\n");
printf("enter id\tenter name\tenter age\tenter salary\n");
printf("%d\t	%s\t	%d\t	%.1f\n",emp.employe_id,emp.employe_name,emp.age,emp.salary);
printf("......displaying organization.......\n");
printf("enter company name\tenter reg_no\n");
printf("%s\t	%d\n",emp.com.company_name,emp.com.reg_no);
}



