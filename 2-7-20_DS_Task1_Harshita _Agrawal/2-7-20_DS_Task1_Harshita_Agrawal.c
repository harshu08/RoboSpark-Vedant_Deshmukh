
#include<stdio.h>

struct student {
                char name[20];
                int id;
                int year;
                float cgpa;
               };
int main( )
{
        int i,n;
        printf("Enter how many records u want to store :: ");
        scanf("%d",&n);
        struct student stud[n];
        printf("Enter name, id.,year and cgpa below :: \n");

        for(i=0; i<n; i++)
        {
                printf("\nEnter %d record :: \n",i+1);

                printf("Enter Name :: ");
                scanf("%s",stud[i].name);
                printf("Enter id. :: ");
                scanf("%d",&stud[i].id);
                printf("Enter year :: ");
                scanf("%d",&stud[i].year);
                printf("Enter cgpa :: ");
                scanf("%f",&stud[i].cgpa);

        }
        
        for(i=0; i<n; i++)
                printf("\t%s\t%d\t%d\t%.2f\t\n", stud[i].name, stud[i].id, stud[i].year, stud[i].cgpa);

                return 0;
}
