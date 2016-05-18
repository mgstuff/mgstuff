#include <iostream>


using namespace std;
void calculate_digits_in_number(int number_to_calculate);

int main()
{

    calculate_digits_in_number(148);
    return 0;
}

void calculate_digits_in_number(int number_to_calculate)
{
    int result = 0;

    while(number_to_calculate != 0)
    {
        result = result + (number_to_calculate % 10);
        number_to_calculate = number_to_calculate/10;
    } cout << result;

}
