/*

TODO :  Write simple programs like calculators, number guessing games, etc.


*/


//* Program to create a simple calculator
/*
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}

*/

/*
//* Program to create a number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int tries = 0;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > number)
        {
            cout << "Too high" << endl;
        }
        else if (guess < number)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << tries << " tries" << endl;
        }
    } while (guess != number);

    return 0;
}

*/


//* Program to create a simple calculator using functions

/*
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << add(num1, num2) << endl;
        break;
    case '-':
        cout << subtract(num1, num2) << endl;
        break;
    case '*':
        cout << multiply(num1, num2) << endl;
        break;
    case '/':
        cout << divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}

*/


//* Program to create a number guessing game using functions

/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber()
{
    srand(time(0));
    return rand() % 100 + 1;
}

void playGame(int number)
{
    int guess;
    int tries = 0;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > number)
        {
            cout << "Too high" << endl;
        }
        else if (guess < number)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << tries << " tries" << endl;
        }
    } while (guess != number);
}

int main()
{
    int number = generateRandomNumber();
    playGame(number);

    return 0;
}

*/


/*
//* Program to create a simple calculator using classes

#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }
};

int main()
{
    Calculator calc;
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << calc.add(num1, num2) << endl;
        break;
    case '-':
        cout << calc.subtract(num1, num2) << endl;
        break;
    case '*':
        cout << calc.multiply(num1, num2) << endl;
        break;
    case '/':
        cout << calc.divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}

*/



//* Program to create a number guessing game using classes

/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuessingGame
{
public:
    int generateRandomNumber()
    {
        srand(time(0));
        return rand() % 100 + 1;
    }

    void playGame(int number)
    {
        int guess;
        int tries = 0;

        do
        {
            cout << "Enter your guess: ";
            cin >> guess;
            tries++;

            if (guess > number)
            {
                cout << "Too high" << endl;
            }
            else if (guess < number)
            {
                cout << "Too low" << endl;
            }
            else
            {
                cout << "Congratulations! You guessed the number in " << tries << " tries" << endl;
            }
        } while (guess != number);
    }
};


int main()
{
    NumberGuessingGame game;
    int number = game.generateRandomNumber();
    game.playGame(number);

    return 0;
}

*/



//* Program to create a simple calculator using functions and classes

/*
#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }
};

int main()
{
    Calculator calc;
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << calc.add(num1, num2) << endl;
        break;
    case '-':
        cout << calc.subtract(num1, num2) << endl;
        break;
    case '*':
        cout << calc.multiply(num1, num2) << endl;
        break;
    case '/':
        cout << calc.divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}

*/




//* Program to create a number guessing game using functions and classes
/*
#include <iostream>
#include <cstdlib>

using namespace std;


class NumberGuessingGame
{
public:
    int generateRandomNumber()
    {
        srand(time(0));
        return rand() % 100 + 1;
    }

    void playGame(int number)
    {
        int guess;
        int tries = 0;

        do
        {
            cout << "Enter your guess: ";
            cin >> guess;
            tries++;

            if (guess > number)
            {
                cout << "Too high" << endl;
            }
            else if (guess < number)
            {
                cout << "Too low" << endl;
            }
            else
            {
                cout << "Congratulations! You guessed the number in " << tries << " tries" << endl;
            }
        } while (guess != number);
    }
};

int main()
{
    NumberGuessingGame game;
    int number = game.generateRandomNumber();
    game.playGame(number);

    return 0;
}

*/


/*
//* Program to create a simple calculator using functions and classes with private members

#include <iostream>
using namespace std;

class Calculator
{
private:
    int num1, num2;

public:
    void setNumbers(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    int add()
    {
        return num1 + num2;
    }

    int subtract()
    {
        return num1 - num2;
    }

    int multiply()
    {
        return num1 * num2;
    }

    int divide()
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator calc;
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator: ";
    cin >> op;

    calc.setNumbers(num1, num2);

    switch (op)
    {
    case '+':
        cout << calc.add() << endl;
        break;
    case '-':
        cout << calc.subtract() << endl;
        break;
    case '*':
        cout << calc.multiply() << endl;
        break;
    case '/':
        cout << calc.divide() << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}
*/


//* Program to create a number guessing game using functions and classes with private members

/*

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuessingGame
{
private:
    int number;
    int tries;
    

public:
    NumberGuessingGame()
    {
        srand(time(0));
        number = rand() % 100 + 1;
        tries = 0;
    }

    void playGame()
    {
        int guess;

        do
        {
            cout << "Enter your guess: ";
            cin >> guess;
            tries++;

            if (guess > number)
            {
                cout << "Too high" << endl;
            }
            else if (guess < number)
            {
                cout << "Too low" << endl;
            }
            else
            {
                cout << "Congratulations! You guessed the number in " << tries << " tries" << endl;
            }
        } while (guess != number);
    }
};

*/