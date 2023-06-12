#include <stdio.h>
#include <string.h>

/* Student Structure Definition */
struct student
{
	char name[50];
	int number;
	int age;
};

/* Structure pointer as a structure parameter */
void showStudentDetails(struct student *studptr)
{
	printf("\nSTUDENT:\n");
	printf("Name:\t%s\n", studptr->name);
	printf("Number:\t%d\n", studptr->number);
	printf("Age:\t%d\n", studptr->age);
}

/* main block */
int main(void)
{
	struct student stud1;
	struct student stud2;

	strcpy(stud1.name, "Dukeson Ehigboria");
	stud1.number = 120;
	stud1.age = 35;

	strcpy(stud2.name, "Kelvin Rotimi");
	stud2.number = 80;
	stud2.age = 38;

	showStudentDetails(&stud1);
	showStudentDetails(&stud2);

	return (0);
}
