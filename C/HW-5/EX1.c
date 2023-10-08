#include <stdio.h>
#include <string.h>
#include <conio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
void main()
{
    struct Student students[100];
    int count = 0;
    char firstname[50], lastname[50];
    do
    {
        printf("Enter information of student %d : \n", count);
        printf("Enter firstname: ");
        scanf("%s", &students[count].name);
        printf("Enter roll number: ");
        scanf("%d", &students[count].roll);
        printf("Enter marks: ");
        scanf("%f", &students[count].marks);
        count++;
        if (count == 100)
            break;
    } while (getch() == 'y');
    for (int i = 0; i < count; i++)
    {
        printf("Displaying Information of student %d: \n", i);
        printf("name:%s \n", students[i].name);
        printf("roll number:%d \n", students[i].roll);
        printf("marks: %0.2f \n", students[i].marks);
    }
}
