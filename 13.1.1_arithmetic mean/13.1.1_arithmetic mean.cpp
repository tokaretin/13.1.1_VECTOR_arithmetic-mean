/*Задание 1
Пользователь вводит с клавиатуры число n, а затем -- n целых чисел.
Необходимо вычислить их среднее арифметическое и вывести на экран.*/

/*Задание 2
Пользователь вводит с клавиатуры число n, а затем -- n действительных 
(дробных) чисел. Необходимо вывести их все в обратном порядке (то есть 
сначала то число, которые пользователь ввёл последним и так далее).*/


#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cout << "How many elemets do you want: ";
    std::cin >> n;
    std::vector<float>numbers(n);
 
    // ввод каждого елемента (n)
    std::cout << "Input of each element: " << '\n';
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    // елементы в обратном порядке
    std::cout << "Elements in reverse order: " << '\n';
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << '\n';

    // максимум из всех элементов
    float max = numbers[0];
    for (int i = 1; i < n; i++)
    {
        if (max < numbers[i]) {
            max = numbers[i];
        }
    }
    std::cout << "Max number = " << max << '\n';
    
    // сумма елементов
    float sum = 0.f;
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }
    std::cout << "Sum numbers = " << sum << '\n';

    // среднее арифметическое
    std::cout << "Arithmetic mean = " << sum / n << '\n';


}

