#include <stdio.h>

int main(void)
{
    int num_class = 0;
    int num_student = 0;
    int sum_grade = 0;
    int arg = 0;
    int over_arg = 0;

    scanf("%d", &num_class);
    float result[num_class];

    for (int i = 0; i < num_class; i++)
    {
        scanf("%d", &num_student);
        int grade[num_student];
        for (int j = 0; j < num_student; j++)
        {
            scanf("%d", &grade[j]);
            sum_grade += grade[j];
        }
        arg = sum_grade / (float)num_student;
        for (int k = 0; k < num_student; k++)
        {
            if (grade[k] > arg)
                over_arg++;
        }
        printf("%.3f%%\n", over_arg / (float)num_student * 100);
        sum_grade = 0;
        over_arg = 0;
    }
}