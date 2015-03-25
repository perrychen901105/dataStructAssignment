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

double testFive(double sum, int count) {
    count ++;
    sum = sqrt(sum+count);
    if (count >= 100) {
        printf("sum is %.2f\n",sum);
        return sum;
    } else {
        return testFive(sum, count);
    }
}

double testSix(double sum, int count, double factor) {
    if (count == 0) {
        sum = 2;
        factor = 0.0;
    }
    if (count >= 1) {
        factor = sqrt(factor+2);
        sum = sum * (2 / factor);
    }
    count ++;
    if (count >= 100) {
        printf("sum is %.2f\n",sum);
        return sum;
    } else {
        return testSix(sum, count, factor);
    }
}

double testSeven(double sum, int count, int factor, double lastSum) {
    lastSum = lastSum+(factor/(2*factor+1));
    printf("last sum %f\n",lastSum);
    sum = factor / (2 * factor + 1) + sum + lastSum;
    factor++;
    if (count >= 4) {
        printf("sum %f\n",sum);
        return sum;
    } else {
        count++;
        return testSeven(sum, count, factor, lastSum);
    }
}

void testEight() {
    int number = 99;
    int arr[10];
    for (int i = 0; i <= 9; i++) {
        arr[i] = i*i;
    }
    for (int i = 1; i <= 9; i++) {
        int ti = arr[i];
        for (int j = 0; j <= 9; j++) {
            int tj = arr[j];
            for (int k = 0; k <= 9; k++) {
                number++;
                if (number % 11 == 0) {
                    int temp = number / 11;
                    if (temp == arr[k]+ti+tj) {
                        printf("number %d\n",number);
                    }
                }
            }
        }
    }
}

void testNine() {
    int number = 999;
    int arr[10];
    for (int i = 0; i <= 9; i++) {
        arr[i] = i*i*i*i;
    }
    
    for (int i = 1; i <= 9; i++) {
        int ti = arr[i];
        for (int j = 0; j <= 9; j++) {
            int tj = arr[j];
            for (int k = 0; k <= 9; k++) {
                int tk = arr[k];
                for (int l = 0; l <= 9; l++) {
                    number++;
                    if (number == ti+tj+tk+arr[l]) {
                        printf("number %d\n",number);
                    }
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    testOne();
//    testTwo();
//    testThree();
//    testFour();
    
//    testSix(0.0, 0, 0);
//    testSeven(0, 0, 0, 0);
//    testEight();
    testNine();
    return 0;
}
