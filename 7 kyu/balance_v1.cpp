#include <string>
std::string balancedNum(unsigned long long int number)
{
    int numLength = 0; // длина числа
    int leftsum = 0, rightsum = 0;
    for (int i = 1; (number / i) > 0; i *= 10) numLength++; // находим длину number

    // создаем массив из numLength элементов для хранения каждого разряда (от стр. к мл.)
    int* arr = new int[numLength - 1];
    // извлекаем значение каждого разряда числа number и записываем в массив
    for (int i = 1, k = numLength - 1; k >= 0; i *= 10, k--) arr[k] = (number % (10 * static_cast<unsigned long long>(i))) / i;


    // Считаем суммы крайних чисел
    if (numLength % 2 == 0) {
        for (int i = 0; i < numLength / 2 - 1; i++) leftsum += arr[i];
        for (int i = numLength - 1; i > numLength / 2; i--) rightsum += arr[i];
    }
    else {
        for (int i = 0; i < numLength / 2; i++) leftsum += arr[i];
        for (int i = numLength - 1; i > numLength / 2; i--) rightsum += arr[i];
    }

    if (leftsum == rightsum) return "Balanced";
    else return "Not Balanced";

    for (int i = 0; i < numLength; i++) std::cout << arr[i] << " : ";
}
