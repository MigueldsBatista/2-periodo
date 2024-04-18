#include <string.h>
#include <stdio.h>

struct Store
{
    char food_name[51]; // 30 bytes
    float food_price;   // 8 bytes  == 38 bytes
};
struct Store food[10000];

int main()
{
    int food_case, i, j, food_cont, test_case, food_quantity;
    char temp_food_name[51];
    float money;
    scanf("%d", &test_case);
    while (test_case--)
    {
        money = 0;
        scanf("%d", &food_case);
        for (i = 0; i < food_case; i++)
        {
            scanf("%s %f", food[i].food_name, &food[i].food_price);
        }

        scanf("%d", &food_cont);

        for (i = 0; i < food_cont; i++)
        {
            scanf("%s %d", temp_food_name, &food_quantity);

            for (j = 0; j < food_case; j++)
            {

                if (strcmp(food[j].food_name, temp_food_name) == 0)
                {
                    money=money+food[j].food_price*food_quantity;
                }
            }
        }

        printf("R$ %.2f\n", money);
    }
    return 0;
}