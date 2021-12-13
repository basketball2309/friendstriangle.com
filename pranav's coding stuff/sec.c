#include <stdio.h>

int main()
{
    char input;
    int first, second;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453593;
    float inchestometers = 0.0254;

    while (1)
    {
        printf("Enter the input character . q to quit\n        1. kms to miles\n        2. inches to foot\n        3. cms to inches\n        4. pound to meters\n        5. inches to meters\n");
        scanf(" %c", &input);

        printf("Enter the quantity in terms of first unit\n");
        scanf(" %f", &first);

        switch (input)
        {
        case 'q':

            printf("Quitting the program.....");
            goto end;
            break;

        case '1':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * kmstomiles;
            printf("%f kms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * inchestofoot;

            printf("%f inches is equal to %f foot \n", first, second);
            break;

        case '3':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * cmstoinches;
            printf("%f cms is equal to %f inches \n", first, second);
            break;

        case '4':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * poundtokgs;
            printf("%f pounds is equal to %f kgs\n", first, second);
            break;

        case '5':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * inchestometers;
            printf("%f  inches is equal to %f meters \n", first, second);
            break;

        default:
            break;
        }
    }
end:

    return 0;
}