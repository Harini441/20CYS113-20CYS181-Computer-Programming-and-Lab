#include <stdio.h>

#define FREE_UNITS 100
#define RATE1_UNITS 300
#define RATE2_UNITS 400
#define RATE3_UNITS 500

#define RATE1_PER_UNIT 2.25
#define RATE2_PER_UNIT 4.50
#define RATE3_PER_UNIT 6.00
#define RATE4_PER_UNIT 8.00

#define TOTAL_HOUSES 5

struct Consumer {
    char name[50];
    int ebNumber;
    int unitsConsumed;
    float billAmount;
};

void calculateBill(struct Consumer *consumer) {
    int units = consumer->unitsConsumed;
    float bill = 0.0;

    if (units <= FREE_UNITS) {
        consumer->billAmount = 0.0;
        return;
    } else {
        units -= FREE_UNITS;
    }

    if (units <= RATE1_UNITS) {
        bill += units * RATE1_PER_UNIT;
    } else {
        bill += RATE1_UNITS * RATE1_PER_UNIT;
        units -= RATE1_UNITS;

        if (units <= RATE1_UNITS) {
            bill += units * RATE2_PER_UNIT;
        } else {
            bill += RATE2_UNITS * RATE2_PER_UNIT;
            units -= RATE2_UNITS;

            if (units <= RATE1_UNITS) {
                bill += units * RATE3_PER_UNIT;
            } else {
                bill += RATE3_UNITS * RATE3_PER_UNIT;
                units -= RATE3_UNITS;

                bill += units * RATE4_PER_UNIT;
            }
        }
    }

    consumer->billAmount = bill;
}

int main() {
    struct Consumer consumers[TOTAL_HOUSES];

    printf("Enter the details for %d houses:\n", TOTAL_HOUSES);
    for (int i = 0; i < TOTAL_HOUSES; i++) {
        printf("\nHouse %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", consumers[i].name);
        printf("EB Number: ");
        scanf("%d", &consumers[i].ebNumber);
        printf("Units Consumed: ");
        scanf("%d", &consumers[i].unitsConsumed);

        calculateBill(&consumers[i]);
    }

    printf("\nElectricity Bills:\n");
    for (int i = 0; i < TOTAL_HOUSES; i++) {
        printf("\nHouse %d:\n", i + 1);
        printf("Name: %s\n", consumers[i].name);
        printf("EB Number: %d\n", consumers[i].ebNumber);
        printf("Units Consumed: %d\n", consumers[i].unitsConsumed);
        printf("Bill Amount: %.2f INR\n", consumers[i].billAmount);
    }

    return 0;
}
