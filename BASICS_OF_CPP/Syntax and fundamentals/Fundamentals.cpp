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
    * Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, division, etc.
    * The arithmetic operators in C++ are as follows:
        * + (Addition)
        * - (Subtraction)
        * * (Multiplication)
        * / (Division)
        * % (Modulus)
        * ++ (Increment)
        * -- (Decrement)
        
     * NOTE : 
        * The modulus operator (%) returns the remainder of a division operation.
        * The increment operator (++) increases the value of a variable by 1.
        * The decrement operator (--) decreases the value of a variable by 1.
        * The increment and decrement operators can be used as prefix or postfix operators.
        * The prefix increment and decrement operators increase or decrease the value of a variable before using it.
        * The postfix increment and decrement operators increase or decrease the value of a variable after using it.
        * The increment and decrement operators can be used with variables and constants.
        * The increment and decrement operators can be used with integers and floating-point numbers.
        * The increment and decrement operators cannot be used with boolean values.




*/