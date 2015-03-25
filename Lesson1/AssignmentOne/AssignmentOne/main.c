//
//  main.c
//  AssignmentOne
//
//  Created by chenzhipeng on 3/25/15.
//  Copyright (c) 2015 chenzhipeng. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void testOne() {
    double sum = 0.0;
    for (int i = 1; i <= 100; i++) {
        sum += (1.0 / (i * i));
    }
    double totalSum = sqrt(6 * sum);
    printf("the total sum is %.2f\n",totalSum);
}

void testTwo() {
    double tempSum = 0.0;
    int counter = 1;
    int j = 1;
    while ((2*counter - 1)<=19999) {
        tempSum += j*(1.0/(2*counter - 1));
        j = -j;
        counter++;
    }
    tempSum = tempSum * 4;
    printf("the sum is %.10f\n",tempSum);
}

void testThree() {
    double tempSum = 0.0;
    int counter = 1;
    int j = 1;
    while ((counter + counter % 2)<=19998) {
        int TwoOfTheReminder = counter % 2;
        int denominator = (counter + TwoOfTheReminder);
        int element = denominator - j;
        double reminder = ((double)denominator/(double)element);
        tempSum = reminder * tempSum;
        j = -j;
        counter++;
    }
    tempSum = tempSum * 2;
    printf("the sum is %.10f\n",tempSum);
}

void testFour() {
    int sum = 1;
    for (int i = 0; i < 1000; i++) {
        sum = sum * 2;
        if (sum > 1000) {
            sum = sum % 1000;
        }
    }
    printf("sum %d\n",sum);
}

int testFive(double sum, int count) {
    count ++;
    sum = sqrt(sum+count);
    if (count >= 100) {
        printf("sum is %.2f\n",sum);
        return sum;
    } else {
        return testFive(sum, count);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    testOne();
//    testTwo();
//    testThree();
//    testFour();
    testFive(0.0, 0);
    return 0;
}
