// Demostrates the function read_and_clean.

#include <iostream>
#include <cstdlib>
#include <cctype>

void read_and_clean(int& n);
// Reads a line of input. Discards all symbols except the digits. Converts the C string to an integer and sets n equal to the value of this integer.

void new_line();
// Discards all the input remaining on the current input line. Also discards the '\n' ad the end of the line.

int main()
{
    using namespace std;
    int n;
    char ans;
    do
    {
        cout << "Enter an integer and press Return: ";

    } while ((ans != 'n') && (ans != 'N'));
    
}

void read_and_clean(int& n)
{
    using namespace std;
    const int ARRAY_SIZE = 6;
    char digit_string[ARRAY_SIZE];

    char next;
    cin.get(next);
    int index = 0;
    while (next != '\n')
    {
        if ((isdigit(next)) && (index < ARRAY_SIZE - 1))
        {
            digit_string[index] = next;
            index++;
        }
        cin.get(next);
    }
    digit_string[index] = '\0';
    n = atoi(digit_string);
}

void new_line()
{
    char symbol;
    using namespace std;
    do
    {
        cin.get(symbol);
    } while (symbol != '\n');
    
}