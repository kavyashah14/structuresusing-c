// make a structure to store the above information about a vehicle
#include <stdio.h>
// creating a structure and naming it 'car'
struct car
{
char name[50];
int mYear;
int cost;
char category;
};
 struct car model[3];
 
 int main()
{
int i,j;
//declaring and array of the struct data type'car' and calling it 'model'

// taking user input for the name, manufacturing year , cost and category
//printf("Name :");
//scanf("%s" , &model.name);

//printf("Manufacturing year: ");
//scanf("%d", &model.nYear);

//printf("cost:");
//scanf("%d", &model.cost);

//printf("%s %d %d", model.name, model.nYear, model.cost);

//storing details of 10(3 for now) cars in an array
    for(i=0; i<3; i++)
{
printf("Name:");
scanf("%s", &model[i].name);

printf("Manufacturing year:");
   scanf("%d", &model[i].mYear);
   
   printf("cost:");
   scanf("%d", &model[i].cost);
   
   printf("\n\n\n");
   
}
}
void printInput()
{
int j;
printf("Available database:\n\n");
printf("Name MYear Cost \n");

for(j= 0; j<3;j++)
{
printf("%s %d %d \n", model[j].name, model[j].mYear, model[j].cost);
}
return ;
}
