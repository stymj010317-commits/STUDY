#include <stdio.h>

int main(void)
{
    double light_speed = 300000.0;
    double distance = 40e12;
    double year_in_seconds = 365.0 * 24.0 * 60.0 * 60.0;
    double voyager_speed = 60000.0;

    double voyager_time = distance / (voyager_speed * year_in_seconds);

    printf("보이저로 가려면 얼마의 시간이 걸리는가?[광년] : %.1lf[광년]\n", voyager_time);

    return 0;
}
