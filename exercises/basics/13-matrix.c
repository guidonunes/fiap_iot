#include <stdio.h>


#define N_STUDENTS 4
#define N_CHAR 30


int main()
{
    char name[N_STUDENTS][N_CHAR];
    int i;

    for(i = 0; i < N_STUDENTS; i++)
    {
      printf("Type the student name: ");
      fgets(name[i], N_CHAR, stdin); 
    }

    for(i = 0; i < N_STUDENTS; i++)
    {
        printf("Student %d: %s", i + 1, name[i]);
    }
}