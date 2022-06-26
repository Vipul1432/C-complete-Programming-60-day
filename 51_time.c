#include <stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
} t;

int main(void)
{
    printf("Enter Hour : ");
    scanf("%d", &t.hour);
    printf("Enter Minute : ");
    scanf("%d", &t.minute);
    printf("Enter Second : ");
    scanf("%d", &t.second);

    printf("Time %d:%d:%d", t.hour % 24, t.minute % 60, t.second % 60);

    return 0;
}
