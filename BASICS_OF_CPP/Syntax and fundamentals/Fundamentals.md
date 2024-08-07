

# Learn the Basics of C++

## Syntax and Fundamentals

### Keywords, Identifiers, and Data Types

#### Keywords
* Keywords are reserved words in C++ with predefined meanings used by the compiler.
* They cannot be used as identifiers (names for variables, functions, etc.).
* C++ keywords are case-sensitive.
* Examples: `int`, `float`, `if`, `else`, `while`, `for`, `switch`, `break`, `continue`, `return`, etc.

#### Identifiers
* An identifier is a name given to variables, functions, classes, etc.
* They start with a letter (A-Z, a-z) or an underscore (_), followed by letters, digits (0-9), or underscores.
* Identifiers are case-sensitive.
* Examples of acceptable identifiers: `zara`, `abc`, `move_name`, `a_123`, `myname50`, `_temp`.
* Examples of unacceptable identifiers: `2myname`, `my-name`, `temp?`, `a+b`.

#### Data Types
* Data types specify the kind of data a variable can hold.
* C++ supports various data types, including:
  * **Basic Data Types**: `int`, `float`, `double`, `char`, `bool`
  * **Derived Data Types**: Array, Pointer, Reference
  * **Enumeration Data Type**: `enum`
  * **User-defined Data Types**: `struct`, `class`, `union`, `enum`
  * **Void Data Type**: `void`
  * **Null Pointer**: `nullptr`

##### Basic Data Types
* **int**: Stores integer values.
* **float**: Stores floating-point numbers with single precision.
* **double**: Stores floating-point numbers with double precision.
* **char**: Stores a single character.
* **bool**: Stores `true` or `false`.

##### Derived Data Types 
### *[For more indepth Cheakout [Arr_point.md](Arr_point.md)]*
* **Array**: A collection of elements of the same type.
* **Pointer**: Stores the memory address of a variable.
* **Reference**: Provides an alternative name for an existing variable.

##### Enumeration Data Type
* **Enum**: Defines a set of named integral constants.
* Example:
  ```cpp
  enum Color { Red, Green, Blue };
  Color c = Green;
  ```

##### User-defined Data Types
* **struct**: A collection of variables under a single name.
* **class**: A blueprint for creating objects (encapsulates data and methods).
* **union**: Allows storing different data types in the same memory location.
* **enum**: Also used for creating custom enumerations.

##### Void Data Type
* **void**: Indicates that a function does not return a value or a pointer does not point to any data type.

##### Null Pointer
* **nullptr**: Represents a null pointer, used to initialize or compare pointers.
* Example:
  ```cpp
  int* ptr = nullptr;
  ```

### Operators

#### Arithmetic Operators
* Used for mathematical operations.
* Operators: `+`, `-`, `*`, `/`, `%`, `++`, `--`
* **Example**:
  ```cpp
  int a = 5;
  int b = 10;
  int c = a + b;  // c = 15
  int d = a - b;  // d = -5
  int e = a * b;  // e = 50
  int f = b / a;  // f = 2
  int g = b % a;  // g = 0
  a++;            // a = 6
  --b;            // b = 9
  ```

#### Relational Operators
* Used to compare values.
* Operators: `==`, `!=`, `>`, `<`, `>=`, `<=`
* **Example**:
  ```cpp
  int a = 5;
  int b = 10;
  bool result = (a < b);  // true
  ```

#### Logical Operators
* Used to combine multiple conditions.
* Operators: `&&` (AND), `||` (OR), `!` (NOT)
* **Example**:
  ```cpp
  int a = 5;
  int b = 10;
  bool result1 = (a > 0 && b > 0); // true
  bool result2 = (a > 0 || b < 0); // true
  bool result3 = !(a > 0);         // false
  ```

#### Bitwise Operators
* Used for bit manipulation.
* Operators: `&`, `|`, `^`, `~`, `<<`, `>>`
* **Example**:
  ```cpp
  int a = 5;  // 0101 in binary
  int b = 10; // 1010 in binary
  int c = a & b;  // 0000 (0 in decimal)
  int d = a | b;  // 1111 (15 in decimal)
  int e = a << 1; // 1010 (10 in decimal)
  ```

### Input/Output Operations

#### Input Operations
* **cin**: Reads data from standard input (keyboard).
* **Example**:
  ```cpp
  int a;
  cin >> a;
  ```

#### Output Operations
* **cout**: Writes data to standard output (screen).
* **Example**:
  ```cpp
  int a = 5;
  cout << a;  // outputs: 5
  ```

#### File I/O Operations
* **ifstream**: Used to read data from files.
* **ofstream**: Used to write data to files.
* **Example**:
  ```cpp
  ifstream infile("input.txt");
  ofstream outfile("output.txt");
  infile.close();
  outfile.close();
  ```

## Control Flow

### Conditional Statements

#### If-else Statement
* Executes code based on a condition.
* **Example**:
  ```cpp
  int a = 5;
  if (a > 0) {
      cout << "Positive";
  } else {
      cout << "Negative";
  }
  ```

#### Switch Statement
* Selects one of many code blocks to execute.
* **Example**:
  ```cpp
  int a = 5;
  switch (a) {
      case 1:
          cout << "One";
          break;
      case 2:
          cout << "Two";
          break;
      default:
          cout << "Other";
  }
  ```

### Loops

#### For Loop
* Executes a block of code a specific number of times.
* **Example**:
  ```cpp
  for (int i = 0; i < 5; i++) {
      cout << i;  // outputs: 01234
  }
  ```

#### While Loop
* Executes code as long as a condition is true.
* **Example**:
  ```cpp
  int i = 0;
  while (i < 5) {
      cout << i;
      i++;
  }
  ```

#### Do-While Loop
* Executes code at least once, then repeats as long as a condition is true.
* **Example**:
  ```cpp
  int i = 0;
  do {
      cout << i;
      i++;
  } while (i < 5);
  ```

## Functions

### Function Declaration
* Tells the compiler about a function's name, return type, and parameters.
* **Example**:
  ```cpp
  int add(int a, int b);
  ```

### Function Definition
* Provides the actual code for the function.
* **Example**:
  ```cpp
  int add(int a, int b) {
      return a + b;
  }
  ```

### Function Calling
* Invokes a function.
* **Example**:
  ```cpp
  int sum = add(5, 10);  // sum = 15
  ```

### Parameters and Return Types

#### Parameters
* Values passed to functions.
* **Example**:
  ```cpp
  int add(int a, int b) {
      return a + b;
  }
  ```

#### Return Types
* Specifies what type of value a function returns.
* **Example**:
  ```cpp
  int add(int a, int b) {
      return a + b;
  }
  ```

### Recursion
* A function that calls itself to solve smaller instances of the same problem.
* **Example**:
  ```cpp
  int factorial(int n) {
      if (n == 0) {
          return 1;
      } else {
          return n * factorial(n - 1);
      }
  }
  ```

---

## *For more detailed information on these topics, please refer to the [Arr_point.md](../Basic_concept/Arr_point.md) file.*