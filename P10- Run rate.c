#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        float overs_played = (300 - c) / 6.0;
        float overs_remaining = c / 6.0;

        float run_rate = b / overs_played;
        float required_run_rate = ((a - b) + 1) / overs_remaining;

        printf("%.2f %.2f\n", run_rate, required_run_rate);
    }

    return 0;
}
