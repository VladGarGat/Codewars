#include <iostream>
#include <cmath>
bool narcissistic(int num) {
    int i = 0, copy_num = num, check = num;
    while (num > 0) { i++; num /= 10; }
    int output = 0, j;

    while (copy_num > 0)
    {
        j = copy_num % 10;
        output += pow(j, i);
        copy_num /= 10;
    }
    return output == check;
}
