/*
  TODO: PLEASE INSTALL BETTER COMMENTS EXTENSION TO VIEW THIS FILE PROPERLY

    !   USE THIS LINK TO DOWNLOAD THE EXTENTION   OR  SEARCH IT IN VISUAL STUDIO EXTENTION TAB [BETTER COMMENTS]
    ?   https://marketplace.visualstudio.com/items?itemName=aaron-bond.better-comments


 * 1. Learn the Basics of C++

! Syntax and fundamentals:
* Keywords, identifiers, data types (int, float, char, bool, etc.)
* Operators (arithmetic, relational, logical, bitwise)
* Input/output operations (cin, cout, file I/O)


!Control flow:
* Conditional statements (if-else, switch)
* Loops (for, while, do-while)


!Functions:*
* Function declaration, definition, and calling
* Parameters and return types
* Recursion

!Arrays:
* Declaration, initialization, access, manipulation

!Strings:
* Declaration, initialization, access, manipulation

*/

//*  -------------------------      Syntax and fundamentals       -------------------------


//?   Keywords, identifiers, data types (int, float, char, bool, etc.)


/*
todo:  What is a keyword?
* Keywords are predefined, reserved words used in programming that have special meanings to the compiler.
* Keywords are part of the syntax and they cannot be used as an identifier.
* Keywords in C++ are case sensitive.
* There are 90 keywords in C++.
* Some of the keywords are: int, float, if, else, while, for, switch, break, continue, return, etc.

todo:  What is an identifier?
* An identifier is a name given to a variable, function, class, module, or any other user-defined item.
* An identifier starts with a letter A to Z or a to z or an underscore (_) followed by zero or more letters, underscores, and digits (0 to 9).
* C++ does not allow punctuation characters such as @, $, and % within identifiers.
* C++ is case-sensitive. Therefore, Manpower and manpower are two different identifiers in C++.

* Here are some examples of acceptable identifiers:
    * mohd       zara    abc   move_name  a_123
    * myname50   _temp   j     a23b9      retVal
    
    * Here are some examples of unacceptable identifiers:
    * 2myname     my-name   temp?   a+b

todo:  What is a data type?
* Data types specify how we enter data into our programs and what type of data we enter.
* C++ has a rich set of built-in as well as user-defined data types.
* C++ provides various data types that can be used to define variables.
* The data types in C++ are used to tell the variables the type of data it can store.
* We can also use modifiers with data types to modify the amount of memory allocated to a variable.
* There are the following data types in C++:
    
    * Basic Data Types: int, float, double, char, bool
    * Derived Data Types: array, pointer, reference
    * Enumeration Data Type: enum
    * User-defined Data Type: structure, class, union, enumeration
    * Void Data Type: void
    * Null Pointer: nullptr
    
* NOTE:  Data types are used to define a variable before using in a program.

 ! Basic Data Types:
    * int: It is used to store an integer value.
    * float: It is used to store decimal numbers with single precision.
    * double: It is used to store decimal numbers with double precision.
    * char: It is used to store a single character.
    * bool: It is used to store only two values: true or false.

 ! Derived Data Types:
    * Array: It is used to store a fixed-size sequential collection of elements of the same type.
    * Pointer: It is used to store the memory address of a variable.
    * Reference: It is used to assign two different names to the same variable.
    * Function: It is used to store the address of a function.
    * Derived data types are built by combining basic data types and are used to store complex data.
    * Derived data types are also known as user-defined data types.

 ! Enumeration Data Type:
    * Enumeration data types are user-defined data types that consist of integral constants.
    * To define an enumeration data type, we use the keyword enum.
    * Enumeration data types are used to define a collection of named constants.
    * The enumeration data type is declared using the keyword enum.
    * The enum keyword is used to declare an enumeration.
    * The enum keyword is also used to define the enumeration data type.

 ! User-defined Data Type:
    * User-defined data types are created by the user.
    * User-defined data types are derived from the basic data types.
    * User-defined data types are also known as abstract data types.
    * User-defined data types are used to store complex data.
    * User-defined data types are created using the class keyword.
    * User-defined data types are created using the struct keyword.
    * User-defined data types are created using the union keyword.
    * User-defined data types are created using the enum keyword.
    * User-defined data types are created using the typedef keyword.

 ! Void Data Type:
    * The void data type is used to specify the return type of a function.
    * The void data type means that the function does not return any value.
    * The void data type is used to specify that a function does not take any arguments.
    * The void data type is used to specify that a pointer does not point to any data type.

 ! Null Pointer:
    * The nullptr is a keyword that is used to represent a null pointer.
    * The nullptr is used to initialize pointers.
    * The nullptr is used to compare pointers.
    * The nullptr is used to assign pointers.
    * The nullptr is used to return pointers.
    * The nullptr is used to pass pointers as arguments.


TODO:  Operators (arithmetic, relational, logical, bitwise)

* Operators are symbols that tell the compiler to perform specific mathematical or logical manipulations.
* Operators are used to perform operations on variables and values.

! Arithmetic Operators:
*       Arithmetic operators are used to perform mathematical operations    like addition, subtraction, multiplication, division, etc.
*       The arithmetic operators in C++ are as follows:
*        + (Addition)
*        - (Subtraction)
*        * (Multiplication)
*        / (Division)
*        % (Modulus)
*        ++ (Increment)
*        -- (Decrement)
        
     * NOTE : 
        * The modulus operator (%) returns the remainder of a division operation.
        * The increment operator (++) increases the value of a variable by 1.
        * The decrement operator (--) decreases the value of a variable by 1.
        * The increment and decrement operators can be used as prefix or postfix operators.
        * a++ (postfix) and ++a (prefix) are equivalent if used alone.
        * The prefix increment and decrement operators increase or decrease the value of a variable before using it.
        * The postfix increment and decrement operators increase or decrease the value of a variable after using it.
        * The increment and decrement operators can be used with variables and constants.
        * The increment and decrement operators can be used with integers and floating-point numbers.
        * The increment and decrement operators cannot be used with boolean values.
    
   //*[Example: 
        int a = 5;
        int b = 10;    //*outputs
        int c = a + b;  // c = 15
        int d = a - b;  // d = -5
        int e = a * b;  // e = 50
        int f = b / a;  // f = 2
        int g = b % a;  // g = 0
        a++; (post)     // a = 6
        b--;            // b = 9
        ++a; (pre)      // a = 7
        --b;            // b = 8
    ]


! Relational Operators:
*   Relational operators are used to compare two values.
*   The relational operators in C++ are as follows:
*        == (Equal to)
*        != (Not equal to)
*        > (Greater than)
*        < (Less than)
*        >= (Greater than or equal to)
*        <= (Less than or equal to)
        
    * NOTE:
        * The equal to operator (==) checks if two values are equal.
        * The not equal to operator (!=) checks if two values are not equal.
        * The greater than operator (>) checks if the left operand is greater than the right operand.
        * The less than operator (<) checks if the left operand is less than the right operand.
        * The greater than or equal to operator (>=) checks if the left operand is greater than or equal to the right operand.
        * The less than or equal to operator (<=) checks if the left operand is less than or equal to the right operand.

        * The relational operators return a boolean value (true or false).
        * The relational operators can be used with integers, floating-point numbers, characters, and pointers.
        * The relational operators cannot be used with arrays, strings, and structures.
        
     //*[ Example:
        int a = 5;
        int b = 10;
        if (a == b) // false
        if (a != b) // true
        if (a > b)  // false
        if (a < b)  // true
        if (a >= b) // false
        if (a <= b) // true
        ]


! Logical Operators:
*   Logical operators are used to combine two or more conditions.
*   The logical operators in C++ are as follows:
*        && (Logical AND)
*        || (Logical OR)
*        ! (Logical NOT)
        
    * NOTE:
        * The logical AND operator (&&) returns true if both conditions are true.
        * The logical OR operator (||) returns true if at least one condition is true.
        * The logical NOT operator (!) returns true if the condition is false.
        * The logical operators return a boolean value (true or false).
        * The logical operators can be used with integers, floating-point numbers, characters, and pointers.
        * The logical operators cannot be used with arrays, strings, and structures.
        * The logical operators are used to combine multiple conditions in a single expression.
        * The logical operators are used to make decisions based on multiple conditions.
        * The logical operators are used to check if a value is within a range.
        * The logical operators are used to check if a value is outside a range.
        
    //*[ Example:
        int a = 5;
        int b = 10;
        if (a > 0 && b > 0) // true
        if (a > 0 || b < 0) // true
        if (!(a > 0))       // false
        if (!(a < 0))       // true
        ]
        
! Bitwise Operators:
*   Bitwise operators are used to perform bitwise operations on integer operands.
*   The bitwise operators in C++ are as follows:
*        & (Bitwise AND)
*        | (Bitwise OR)
*        ^ (Bitwise XOR)
*        ~ (Bitwise NOT)
*        << (Left shift)
*        >> (Right shift)
        
    * NOTE:
        * The bitwise AND operator (&) sets a bit to 1 if it is set in both operands.
        * The bitwise OR operator (|) sets a bit to 1 if it is set in at least one of the operands.
        * The bitwise XOR operator (^) sets a bit to 1 if it is set in one, but not both, of the operands.
        * The bitwise NOT operator (~) inverts the bits of its operand.
        * The left shift operator (<<) shifts the bits of its left operand to the left by a number of positions specified by the right operand.
        * The right shift operator (>>) shifts the bits of its left operand to the right by a number of positions specified by the right operand.
        * The bitwise operators can be used with integers.
        * The bitwise operators cannot be used with floating-point numbers, characters, and pointers.
        * The bitwise operators are used to manipulate individual bits of an integer.
        * The bitwise operators are used to perform low-level programming.
        * The bitwise operators are used to perform bit manipulation.
        * The bitwise operators are used to perform bit masking.
        * The bitwise operators are used to perform bit shifting.
        * The bitwise operators are used to perform bit rotation.
        * The bitwise operators are used to perform bit counting.
        * The bitwise operators are used to perform bit testing.
        * The bitwise operators are used to perform bit setting.
        
    //*[ Example:
        int a = 5; // 101
        int b = 10; // 1010
        int c = a & b; // 0
        int d = a | b; // 15
        int e = a ^ b; // 15
        int f = ~a; // -6
        int g = a << 1; // 10
        int h = b >> 1; // 5
        ]

TODO:  Input/output operations (cin, cout, file I/O)

* Input/output operations are used to read data from the user and display data to the user.
* Input/output operations are used to interact with the user.
* Input/output operations are used to read data from files and write data to files.

! Input Operations:
*   Input operations are used to read data from the user.
*   The input operations in C++ are performed using the cin object.
*   The cin object is used to read data from the standard input device (keyboard).

    //*[ Example:
        int a;
        cin >> a;
        ]

! Output Operations:
*   Output operations are used to display data to the user.
*   The output operations in C++ are performed using the cout object.
*   The cout object is used to write data to the standard output device (screen).

//* Example:
*        int a = 5;
*        cout << a;
*    //* outputs: 5

! File I/O Operations:
*   File I/O operations are used to read data from files and write data to files.
*   File I/O operations are used to interact with files.
*   File I/O operations are performed using file streams.
*   File I/O operations are performed using the ifstream and ofstream classes.

//* Example:
*        ifstream infile;
*        infile.open("file.txt");
*        ofstream outfile;
*        outfile.open("file.txt");
*        infile.close();
*        outfile.close();



//*  -------------------------      Control FLow       -------------------------

* Control flow is the order in which the statements in a program are executed.
* Control flow is used to determine the order in which the statements in a program are executed.

! Conditional Statements:
*   Conditional statements are used to make decisions in a program.
*   Conditional statements are used to execute different code based on different conditions.

! If-else Statement:
*   The if-else statement is used to execute a block of code if a condition is true.

//*  Example:
*        int a = 5;
*        if (a > 0) {
*            cout << "Positive";
*        } else {
*            cout << "Negative";
*        }
* 


! Switch Statement:
*   The switch statement is used to execute one block of code from multiple blocks of code.

*   Example:
*        int a = 5;         //* outputs
*        switch (a) {       //* THE OUTPUT WILL BE "Other"
*            case 1:
*                cout << "One";
*                break;
*            case 2:
*                cout << "Two";
*                break;
*            default:
*                cout << "Other";
*        }
* 

! Loops:
*   Loops are used to execute a block of code multiple times.
*   Loops are used to iterate over a sequence of values.

? For Loop:

*   The for loop is used to execute a block of code a specified number of times.
*   The for loop is used when the number of iterations is known.
*   The for loop consists of three parts: initialization, condition, and increment/decrement.

//*  Example:
*        for (int i = 0; i < 5; i++) {
*            cout << i;
*        }
*        //* outputs: 01234

?While Loop:
*  The while loop is used to execute a block of code as long as a condition is true.
*  The while loop is used when the number of iterations is not known.
*  The while loop consists of a condition.

//*  Example:
*        int i = 0;
*        while (i < 5) {
*            cout << i;
*            i++;
*        }
*        //* outputs: 01234

? Do-While Loop:
*  The do-while loop is used to execute a block of code at least once, and then repeatedly execute it as long as a condition is true.
*  The do-while loop is used when the number of iterations is not known.

//*  Example:
*        int i = 0;
*        do {
*            cout << i;
*            i++;
*        } while (i < 5);
*        //* outputs: 01234



//*  -------------------------      Function       -------------------------


* Functions are used to perform a specific task.
* Functions are used to break a program into smaller pieces.
* Functions are used to make a program more modular.
* Functions are used to make a program more readable.
* Functions are used to make a program more maintainable.

! Function Declaration:
*   A function declaration tells the compiler about a function's name, return type, and parameters.
*   A function declaration consists of a return type, a function name, and parameters.

//*  Example:
*        int add(int a, int b);

! Function Definition:
*   A function definition provides the actual body of the function.
*   A function definition consists of a return type, a function name, parameters, and a function body.

//*  Example:
*        int add(int a, int b) {
*            return a + b;
*        }

! Function Calling:
*   A function call is used to invoke a function.
*   A function call consists of a function name and arguments.

//*  Example:
*        int sum = add(5, 10);
*        //* sum = 15

! Parameters and Return Types:
*   Parameters are used to pass values to a function.
*   Return types are used to return values from a function.

! Parameters:
*   Parameters are used to pass values to a function.
*   Parameters are used to specify the type and number of values that a function can accept.
*   Parameters are used to pass arguments to a function.

//*  Example:
*        int add(int a, int b) {
*            return a + b;
*        }

! Return Types:
*   Return types are used to specify the type of value that a function can return.
*   Return types are used to return a value from a function.
*   Return types are used to specify the type of value that a function can return.

//*  Example:
*        int add(int a, int b) {
*            return a + b;
*        }

! Recursion:
*   Recursion is a technique in which a function calls itself.
*   Recursion is used to solve problems that can be broken down into smaller, similar subproblems.
*   Recursion is used to solve problems that can be solved by smaller instances of the same problem.

//*  Example:
*        int factorial(int n) {
*            if (n == 0) {
*                return 1;
*            } else {
*                return n * factorial(n - 1);
*            }
*        }


//*  -------------------------      Array       -------------------------


* Arrays are used to store multiple values in a single variable.
* Arrays are used to store a collection of values.
* Arrays are used to store a fixed-size sequential collection of elements of the same type.

! Declaration:
*   An array declaration tells the compiler the type of the elements that the array will hold.
*   An array declaration consists of a type and a name.

//*  Example:
*        int numbers[5];

! Initialization:
*   An array initialization assigns values to the elements of the array.
*   An array initialization consists of a list of values enclosed in curly braces.

//*  Example:
*        int numbers[5] = {1, 2, 3, 4, 5};

! Access:
*   Array access is used to retrieve the value of an element in the array.
*   Array access consists of the array name and the index of the element.

//*  Example:
*        int numbers[5] = {1, 2, 3, 4, 5};
*        int x = numbers[2];
*  output    x = 3

! Manipulation:
*   Array manipulation is used to change the value of an element in the array.
*   Array manipulation consists of the array name, the index of the element, and the new value.

//*  Example:
*        int numbers[5] = {1, 2, 3, 4, 5};
*        numbers[2] = 10;
*        //* numbers = {1, 2, 10, 4, 5};




//*  -------------------------      String       -------------------------
 
* Strings are used to store a sequence of characters.
* Strings are used to store text.
* Strings are used to store words, sentences, and paragraphs.

! Declaration:
*   A string declaration tells the compiler the type of the elements that the string will hold.
*   A string declaration consists of the string keyword and a name.

//*  Example:
*        string name;

! Initialization:
*   A string initialization assigns a value to the string.
*   A string initialization consists of the string name and a value enclosed in double quotes.

//*  Example:
*        string name = "John";

! Access:
*   String access is used to retrieve the value of a character in the string.
*   String access consists of the string name and the index of the character.

//*  Example:
*        string name = "John";
*        char c = name[1];
*        //* c = 'o'

! Manipulation:
*   String manipulation is used to change the value of a character in the string.
*   String manipulation consists of the string name, the index of the character, and the new character.

//*  Example:
*        string name = "John";
*        name[1] = 'i';
*        //* name = "Jihn"







*/
