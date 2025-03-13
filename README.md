FUNCTIONS;
Every C++ Program contains one or more functions ,one of which must be named 'Main'.
The operating system runs the  C ++ program by calling the main.
Example of a main function;
                    Int main()
                    {
                        return 0;
                    }
    Elements of a function Definition:
    1.A return function.
    2.A function name.
    3.A (Possible empty) parameter list enclosed in parathenses.
    4.A function body.

cout stands for console output and its used for printing something on the screen in a cpp program.
Types -A type defines both the contents of a data element and the operations that are possible on those data.
Variables -Something that is used in storing values.
**Example;
when the type of a variable named V is T, we often say that "V has type T" or,interchangbly "V is a T"ie 
                int my_variable
                in this case we have the type integer declaring a variable called my_variable.that is my_variable is an integer.
**COMPLILING - Its the transformation from source code (Human Readable form) to machine code(computer executable).

            **INPUT AND OUTPUT IN C++**
The C++ language does not define any statements to do input output(io).
Instead,C++ includes an extensive standard library that provides io.ie IOSTREAM library.
**IOSTREAM;-Its made of two types of stream ;
            1.Input stream -Used for taking Inputs.
            2.Output stream-Used for giving outputs.
Stream-A stream is a sequence of characters read from or written to an IO device.
** STANDARD INPUT AND OUTPUT OBJECTS **
The IO library defines four io objects;
1.Cin (Console input)-Standard input.-Of type istream.
2.Cout (console output)-Standard output.-Of type ostream.
3.Cerr (Console Error) - standard error.-Of type ostream.
4.Clog (console log) -General information.-Of type ostream.


**Namespace**
A namespace is a declarative region that provides a scope to the identifiers inside it.
Identifiers are names of types,functions,variables,etc.-They are used to organize code into logical groups and to prevent name collisions
that can occur especially when the code base includes multiple libraries.

**Namespace using declarations**
A using declaration lets us use a name from a namespace without qualyfing the name with a namespace-name::prefix

**Comments**
Comments are program text that is ignored by the compiler.
Comments help the human readers of our programs.

There are 2 types of comments in C++
1.Single-line comments-A single line comment starts with a double slash(//) and ends with a new line.
                        Everything to the right of the slashes on the current line is ignored by the compiler.Example:
                        #include <iostream>
                        using namespace std;
                        int main()
                        {
                           cout << "let's learn single-line comments.";
                           //This is a comment.its is ignored by the compiler.
                           return 0;
                        }
2.Multiple-line comments-This are comments that begins with /* and ends with the next */

What will be the output of the following statements?
1.std:: cout << " /* ";- The output will be  /*
2.std:: cout << " */ "; The output will be */
3.std:: cout << /*  "*/" */;-This one will throw an error because the first two delimetres acts as a comment and the last does not have a closing delimeter.
4.std:: cout << /*  "*/" /* "/*" */;-The output will be  /*  */  /*.

**FLOW OF CONTROL**
Statements normally execute sequentially
**The while statement**
A while statement repeatedly executes a section of code so long as the given condition is true.

**A for statement**
A for statement repeatedly executes a section of code so long as a given condition is true.
In c++ you can declare and initialize the variable inside the for loop itself.
The order of execution in a for loop is as follows;
                                                1.initilization
                                                2.Condition will be checked
                                                3.Statements are executed.
                                                4.Counter updated.    

**Using istream as a condition.**
When we use an istream(Input Stream) as a condition,the effect is to test the state of the stream.
If the stream is valid,that is,if the stream hasnt encountered an error then the test succeeds.
An istream becomes invalid when we hit end of file or encounter an invalid output such as reading a value which is not an integer.
An istream that is in an invalid state will cause the condition to yield false.

**In windows when you press ctrl+Z then press enter that is treated as end of file value in C++ ,and in linux you press ctrl+D then enter".**

**IF-ELSE STATEMEMT IN C++**
The if statement is used to execute a block of code only if a certain condition is met.
The order of execution in an if-else statement is as follows;
                                                            1.Test condition
                                                            2.If the test condition is true the code inside the if block is executed.
                                                            3.If the test condition is false the code inside the else block is executed.
The syntax of the if statement is as follows;
                                                if(condition)
                                                    {
                                                        block of code to be executed if the condition is true
                                                    }
The syntax of the if-else statement is as follows;
                                                     if(condition)
                                                            {
                                                                block of code to be executed if the condition is true
                                                            }
                                                    else
                                                            {
                                                                block of code to be executed if the condition is false
                                                            }
**ELSE-IF STATEMENT**
The else if statement is used to specfy a new condition if the first condition is false.
The order of execution of the else-if condition is as follows;
                                                                1.Sart with if condition check if the if condition is true.
                                                                2.if the if condition is false we come to the else if condition.
                                                                3.if its true the code inside the else if block will be executed if false the code in the else block will be executed.
The syntax of the else-if statement is as follows;
                                                     if(condition)
                                                            {
                                                                block of code to be executed if the condition1 is true
                                                            }
                                                    else if (Condition 2)
                                                            {
                                                                block of code to be executed if condition 1 is false and condition 2 is true.
                                                            }
                                                    else
                                                            {
                                                                block of code to be executed if the condition1 is false and condition 2 is false.
                                                            }

== this is an equality operator checking if the value is equal to the number that is entered.

**Indentation and formatting in C++**
C++ programs are largely free-format ie where we put curly braces,indentation,comments and newlines usually has no effect on what our programs mean.
Example;The curly brace {That denotes the beginning of the body of main could be on;
                        1.The same line as main
                        2.At the beginning of the next line.
                        3.Placed anywhere else we'd like.-The only requirement is that the open curly must be the first non-blank,non-comment character following mains parameter list.

        **TYPES**
Types are fundamental to any program.-They tell us what to do with our data mean and what operations we can perform on those data.
C++ has extensive support for types;
                                    1.Primitive types(characters,integers,floating point numbers, etc)-Defined by the language itself.
                                    2.User-defined types -Provides mechanisms that let us define our own data types.

**Primitive Built-in Types**
The primitives types are divided into two ie 1.Arithmetic type
                                            2.Void (Special type
                                            )

Under the arithmetic type we have two ie;Intergral points such as characters,integers,boolean values etc
We have floating point values ie float,double etc
      **SIGNED AND UNSIGNED TYPES**
Except for bool and the extended character types,the integral types may be;
                                                                            1.Signed -Represents negative or positive numbers including zero.
                                                                            2.UNSIGNED- Represents only values greater than or equal to zero.               
The types int,short,long and long long are all signed.
We obtain the correspomding unsigned type by adding unsigned to the types eg unsigned long.     

**BASIC CHARACTER TYPES**
Unlike the other integer types, there are three distinct character types;
                                                                        1.Char-Can either be signed or unsigned depends on the compiler one is using.
                                                                        2.Signed char
                                                                        3.unsigned char 
Although there are three character types, there are only two representations ie signed and unsigned.
The plain (char) type uses one of those representations ie either signed/unsigned.
Whenever a negative number is stored in an unsigned type its stored in its two's complement.

**Machine-Level Representation of built-in types**
Computers store data as a sequence of bits,each holding 0 or 1.
Eg 00011011011100010110010000111011...
Most computers deal with memory as chunks of bits of sizes that are powers of 2.eg;
                                                                                1.Byte-The smallest chunk of addressable memory usually 8 bits.
                                                                                2.Word-The basic unit of storage usually a small number of bytes usually 32 or 64 bits ie 4 or 8 bytes.

An address can be used to refer to any of several variously sized collections of bits starting at that address.eg we can speak of the word at address 736424 or the byte at address 736427.
To give meaning to the memory at a given address,we must know the type of value stored there.       
The type determined how many bits are used and how to interpret those bits.                                   
        **Type conversions**
        Type of an object:
Defines the data that an object might contain and what operations that object can perform.
One of the many operations supported by many types is the ability to convert objects of the given type to other related types.
Type conversions happen automatically when we use an object of one type where an object of another type is expected. ie for example when we declare a variable of integer type but we assign to it
a decimal which is of a floating type.When we assign on of the non-bool arithmetic types to a bool object,the result is false if the value is 0 and true otherwise eg:
                                                                bool b = 35;
                                                                b is true 
                                                                Here b will be true because the variable b is not assigned to 0.
When we assign a bool to one of the other arithmetic types the resulting value is 1 if the bool is true and 0 if the bool is false eg;
                                                                                                                            int i = b;
                                                                                                                            i has the value 1 
                                                                                                                            Here the variable b was true so the value of i will be 1.
 When we assign a floating poi  nt value to an object of an integral type, the value is truncated ie its ignored eg;
                                                                                                                    i = 3.14
                                                                                                                    i has value 3
                                                                                                                    the floating point which is .14 has been ignored.
                                                                                                                    The value that is stored is the part before the decimal point.
When we assign an integral value to an object of floating point type, the fractional part is always zero.eg;
                                                                                                            double pi = i
                                                                                                            pi has value 3.0
                                                                                                            the pi has got a value of floating point since the double should be a floating point.

                **LITERALS**
Values such as numbers,characters or string of characters whose values are self evident are known as literals.
                **INTEGER LITERALS**
We can write integer literal using decimal,octal or hexadecimal notation ie:
                                                            Decimal-Normal representation.
                                                            Octal-Integer literals that begin with 0(zero) are interprated as octal.
                                                            Hexadecimal-Integer literals that begin with either 0x or  0X are interprated as hexadecimal.
QUESTION;
        Let us write the value 35 using the 3 interprations discussed above;
        Decimal - 25
        in octal-We first change 25 into its binary equivalent which will be 11011 then to change it to octal we divide it in three sections for 11011 we will have to add
        a zero on the left side so that we can change it to octal which will be 011001 then divide it in threes such that;
                                                                                011=3
                                                                                001=1
                                                                                so the octal representation of 25 will be 031.
        In hexadecimal  we will have to divide it into four sections so we will add three zeros to 11001 which will be 0001101 and then subdivide it into; 0001=1
        then 1101=9  and to represent a number in hexadecimal we start with 0x so the answer will be 0x19.                                                                     
 
            **FLOATING POINT LITERALS**
Floating point literals include either a decimal point or an exponent specified using scientific notation.(The exponent is indicated by either E or e)
        EXAMPLE;
        3.14159
        3.14159E2 - 3.14159 * TEN TO POWER TWO - 314.159
        3.14159e3 - 3.14159 * TEN TO POWER THREEE - 3141.59
        3.14159E-1 - 3.14159 * TEN TO POWER NEGATIVE ONE - 0.314159.

        **CHARACTER AND CHARACTER STRING LITERALS**
A character enclosed within single quotes is a literal of type char.
Zero or more characters enclosed in double quotation marks is a string literal 
Example; character literal: 'a', string literal: "Fruit Salad"
The type of a string literal is array of constant chars.
The compiler appends a null character ('\0') to every string literal
Thus,the actual size of a string literal is more than its apparent size.
Example;
        'A' - A(single character)
        "A " - A\0 (array of 2 characters -A and the null character)
   **ESCAPE SEQUENCES**
Characters,such as backspace or control characters,have no visible image and they are non printable.
Other characters (like single and double quotation marks,question mark and backslash) have special meaning in the language.
our programs cannot use any of these characters directly
instead,we use escape sequence(begins with a backslash \) to represent such characters.
**C++ DEFINES SEVERAL LANGUAGE SEQUENCES** Examples:
\n -New line
\t -Horizontal tab
\b -backspace
\"- Double quote
\'-single quote
\\ -Backslash
\? -used for printing question mark
\r - carriage return
\a -Alert(bell)

                **VARIABLES**
A variable provides us with named storage that our programs can manipulate.
Each variable in C++ has a type.
Type determines;
                1.The size and layout of the variables memory
                2.The range of values that can be stored within the memory.
                3.The set of operations that can be applied to the variable.
A simple variable definition consists of:
                                        1.A type specifier,followed by
                                        2.A list of one or more variable names separated by commas, and ends with
                                        3.A semicolon
                                Examples
                                1. int num1;
                                2. float num2,num3;
                                3. int num4 = 1;
                                4.int num5,num6 = 2;
For number 3 and 4 we are initiliazing the values at the time of defining the values itself.

                        **IDENTIFIERS**
Identifiers in C++ can be composed of letters,digits and the underscore character
Identifiers are a sequence of characters that make up a name.
                    **RULES FOR IDENTIFIERS**
1.Identifiers must begin with either a letter or an underscore.
2.Identifiers are case sensitive;upper and lowercase letters are distinct.
3.The language imposes no limit on name length.
4.The language reserves a set of names,for its own use.These names may not be used as identifiers ie keywords and operator names.
                    **CONVENTIONS FOR VARIABLE NAMES**
An identifier should give some indication of its meaning.
Variable names normally are lowercase ie sum,not Sum or SUM.
Classes we define usually begin with an uppercase letter Eg; Sales_item
Identifiers with multiple words should visually distinguish each word.Eg;student_score or studentScore not studentscore.                  


                    **SCOPE OF A NAME**
At any particular point in a program,each name that is in use refers to a specific entity - a variable,function,type and so on.
A given name can be reused to refer to different entities at different point in the program.
                        **SCOPE**
A scope is a part of the program in which a name has a particular meaning.
                {
                    most scopes in C++ are delimited in curly braces
                }
The same name can refer to different entities in different scopes.
Names are visible from the point where they are declared until the end of the scope in which the declaration appears.
Example;
            #include <iostream>
            using namespace std;
            int main()
            {
                int sum = 0;
                for (int val = 1; val <= 10; ++val)
                {
                    sum = sum + val;
                }
                cout << "Sum of 1 to 10 inclusive is " << sum << endl;
                return 0;
            }
The program defines three names ie main,sum and val.
main-defined outside any curly braces.it has a global scope ie its accesible throughout the program.
Sum-defined within the scope of the block that is the body of the main function.It has a block scope.
val-defined in the scope of the for statement.

                **NESTED SCOPES**
Scopes can contain other scopes.
We have the contained(or nested)(inner scope) scope and the conataining scope(outer scope).
Once a name has been declared in a scope,that name can be used by scopes nested inside that scope.
Names declared in the outer scope can also be redefined in an inner scope.
::-This is a scope operator.

                        **COMPOUND TYPES**
A compound  type is a type that is defined in terms of another type.Example;References,pointers
Simple declarations we have base types which is example int and we have declarators which are variables declared example num1,num2.
Declarators names a variable and gives the variable a type that is related to the base type.
                            **REFERENCES**
A reference defines an alternative name for an object.
A reference type "refers to" another type.
Defining a reference type:   &d where d is the name being declared.
Examples:
        int ival = 1024;
        int &refval = ival;   //refval refers to (is another name for) ival.
        int &refval2;    //error: a reference must  be initialized.
When we define a reference,instead of copying the initiliazer's value,we bind the reference to its initiliazer.
Once initialized,a reference remains bound to its initial object.
There is no way to rebind a reference to refer to a different object.
Because there is no way to rebind a reference, references must be initialized.
A reference is not an object.Instead, a reference is just another name for an already existing object.
After a reference has been defines,all operations on that reference are actually operations on the object to which the reference is bound.

                **REFERENCE DEFINITIONS**
Multiple references can be defined in a single definition.
Each identifier that is a reference must be preceded by the & symbol.
Examples:
int i = 1024;, i2 = 2048;  //i and i2 are both ints
int &r = i, r2 = i2;  // r is a reference bound to i; r2 is an int
int i3 = 1024, &ri = i3; //i3 is an int;ri is a reference bound to i3
int &r3 = i3, &r4 = i2; //both r3 and r4 are references
int &refval4 = 10;  //error:initializer must be an object
double dval = 3.14;
int &refvall5 = dval; //error:initiliazer must be an object.

    **POINTERS**
 A pointer is a compound type that "points to" another type.
 They are used for indirect access to other objects.
        **Differences from references**
A pointer is an object in its own right.
Pointers can be assigned and copied -A single pointer can point to several different objects over its lifetime.
A pointer need not to be iniliazed at the time it is defined.
Pointer definition *d,where d is the name being defined.
Examples;
int *ip1, *ip2;   //both ip1 and ip2 are pointers to int.
double dp, *dp2   //dp2 is a pointer to double;dp is a double

**WHAT DO POINTERS HOLD**
A pointer holds the address of another object.
We get the adress of an object by using the address of operator(the & operator)
Examples:
int ival = 50;
int *p = &ival;    //holds the address of ival; p is a pointer to ival

cout << p //gives the adress held in pointer p.
cout << *p //gives the value that is stored in the adress pointed by p.

**EXAMPLES OF POINTER DEFINITIONS**
Examples:
double dval;
double *pd = &dval;    //ok: initializer is the address of a double
double *pd2 = pd;     //ok: initializer is the pointer to double
int *pi = pd;    //error:types of pi and pd differ
pi = &dval;  //error:assigning the address of a double to a pointer int.

**NULL POINTERS**
A null pointer does not point to any object.
INT *p1 = nullptr;
int *p2 = null;
int *p3 = 0;

            **const Qualifier**
At times, we may need to define a variable whose value we know cannot be changed.
Example: A variable to refer to the size of a buffer size.
If we use a normal variable its easy to change the size if needed.
But if we want to prevent the code from inadvertently giving a new value to the variable its better to use something that is constant ie cannot be changed.
We can make a variable unchangeable by defining the variables type as const:
                                        EXAMPLE: const int buffsize = 256;     //input buffer size
                                             here buffsize is defined as constant
                                             Any attempt to assign to buffsize will bring an error.
            buffsize = 512;    //error: attempt to write to const object.

**INITILIAZATION AND CONST**
Because we cant change the value of a const object after we create ir,it must be initialized.
EXAMPLES:
Const int i = get_size();                       //ok: initialized at run time.
const int j = 23;                               //ok:initiliazed at compile time
const int k;                                    //error:k is unitinitialized const
int a = 21;
const int ci = a;                               //ok: the value of a is copied into ci
int b = ci;                                     //ok: the value in ci is copied into b
By default, const objects are local to a file.
Sometimes we have a const variable that we want to share across multiple files but those whose initializer is not a constant expression.
To share a const object among multiple files,we must define the variable as extern.
                                                    Example;
    //file_1.cc defines and initializes a const that is accesible to other files.
    extern const int buffsize = fcn();
    //file_1.h
    extern const int buffsize;     //same buffsize as defined in file_1.cc
**REFERENCES TO CONST**
As with any other object, we can bind a reference to an object of a const type.
To do so we use a reference to const-Reference that refers to a const type.
Unlike an ordinary reference,a reference to const cannot be used to change the object to which the reference is bound.
                Examples:
                const int ci = 1024;
                const int &r1 = c1;   //ok: both reference and underlying object are const
                r1 = 42;              // error:r1 is a reference to const
                int &r2 = ci;        //error: non const reference to a const object
        **INITIALIZATION AND REFERENCES TO CONST**
We can bind a reference to const to a nonconst object, a literal or a more general expression.
Examples;
int i = 42;
const int &r1 = 1;          //we can bind a const int& to a plain int object
const int &r2 = 42;         //ok:r2 is a reference to const
const int &r3 = r1 * 2;     //ok:r3 is a reference to const
int &r4 = r1 * 2;           //error:r4 is a plain,non const 
The same initializations are not legal for nonconst references.
They result in compile time errors.
But why do they work for const references?
Lets try to understand this behavious by taking a look at what happens when we bind a reference to an object of a different type.
if we write:
            double dval = 3.14;
            const int &ri = dval
The compiler translates the code to;
                                  int temp = dval;                  //creates a temporary int from the double
                                  const int &ri = temp;             //bind ri to that temporary.
                        **POINTERS AND CONST**
Like references, we can also define pointers that point to either const or nonconst types.
Like a reference to const,a pointer to const may not be used to change the object to which the pointer points.
We may store the address of a const object only in a pointer to const.
EXAMPLES;
            const double pi = 3.14;      //pi is const; its value may not be changed
            double *ptr = &pi;           //error: ptr is a plain pointer
            const double *cptr = &pu;    //ok: cptr may point to a double that is const
            *cptr = 42;                  //error: cannot assign to *cptr
            double dval = 3.14;          //dval is a double;its value can be changed
            cptr = &dval;                //ok: but canr change dval through cptr
     **CONST POINTER**
Unlike references,pointers are objects.
Hence,as with any other object type, we can have a pointer that is itself const. 
Like any other const object,a const pointer must be initialized, and once initialized,its value(ie the address that it holds) may not be changed.
                                                                indication that the pointer is const is when const happens after the *.-
                                                                this placement indicates that its the pointer not the pointed to type that is const.
    EXAMPLES;
    int *const curErr = &errNumb;             //curErr will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi;            //pip is a const pointer to a const object 
Read the declarations from right to left for easy understanding ie;
1.int *const currErr = &errNumb;
The symbol closest to curErr is const,which means that curErr itself will be a const object.
*,means that curErr is a const pointer
int base type of the declration -curErr is a const pointer to an object of type int.
2. const double *const pip = &pi;
Symbol closes to pip is const,which means that pip itself will be a const object
*,means that pip is a const pointer.
const double - base type of the declaration-pip is a const pointer to an object of type const double.

                **TOP LEVEL AND LOW LEVEL CONST**
A pointer is an object that can point to a difeferent object.
So, we can talk indipendently about whether a pointer is const and whether the objects to which it can point are const.
Top-level const: indicates thet the pointer itself is a const.
Low-level const: When a pointer can point to a const object,we refer to that const as a low-level const.
                Can appear in any object type,ie one of the built-in arithmetic types,a class type,or a pointer type.
Low level const apperas in the base type of compound types such as pointers or references.
Note that the pointer types,unlike most of other types,can have both top-level and low-level const indipendently.
        **EXAMPLES**:
 int i = 0; 
 int *const p1 = &i;          //we cant change the value of p1;const is top-level
 const int ci = 42;           //we cannot change ci; const is top-level
 const int *p2 = &ci;         //we cannot change p2;const is low-level
 const int *const p3 = p2;    //right most const is top-level,left most is not
 const int &r = ci;           //const in reference type is always low-level
The distinction between top-level and low-level matters when we copy an object.
When we copy an object,top-level consts are ignored.
on the other hand,low-level const is never ignored.
When we copy an object,both objects must have the same low-level const qualification or there must be a conversion between the types of the two objects.
In general we can convert a nonconst to const and not viceversa.
EXAMPLES:
        INT I = 0;
        CONST INT *P2 = &CI;
        INT *CONST P1 = &I;
        CONST INT *CONST P3 = P2;
        CONST INT C1 = 42;
        CONST INT &R = CI;
I = CI;       //ok: copying the value of ci; top-level const in ci is ignored
P2 = P3    //OK: pointed to type matches; top-level const in P3 is ignored
INT *P = P3;  //ERROR:P3 has a low level const but P doesnt
P2 = &I;      //OK:we can convert int* to const int*
int &R = CI;   //ERROR:cant bind an ordinary int& to a const int object
const INT &R2 = I;    //OK: can bind const int& to plain int.

                **CONSTANT EXPRESSIONS**
A constant expression is an expression whose value cannot change and that can be evaluated at compile time.
A literal is a constant expression.
A const object that is initialized from a constant expression is also a constant expression
whether a given object(or expression) is a constant expression depends on the types and the initializers.
                   EXAMPLES;
const int max_files = 20;       //max_files is a constant expression
const int limit = max_files + 1;   //limit is a constant expression
int staff_size = 27;          //staff_size is not a constant expression
const int sz = get_size();    //sz is not a constant expression

                **constexpression variables(constexpr)**
In a large system, it can be difficult to determine (for certain) that an initializer is a constant expression.
Under the new standard, we can ask the compiler to verify that a variable is a constant expression by declaring the variable in a constexpr declaration.
Variables declared in a constexpr are implicitly const and must be initialized by constant expressions.
                            **EXAMPLES**
constexpr int mf = 20;      //20 is a constant expression
constexpr int limit = mf + 1;     //mf + 1 is a constant expression
constexpr int sz = size();       //ok only if size is a constexpr function
NB\\
        Generally, it is a good idea to use constexpr for variables that you intend to use as constant expressions.

                                        **POINTERS AND CONSTEXPR**
When we define a pointer in a constexpr declaration,the constexpr specifier applies to the pointer and not the type to which the pointer points.
EXAMPLES;
            const int *P = nullptr;      // p is a pointer to a const int
            constexpr int *q = nullptr;  //q is a const pointer to Int
            p is a pointer to const,whereas q is a constant pointer.
            The difference is a consiquence of the fact that constexpr imposes top-level const on the objects it defines.
    **Examples**
    constexpr int *np = nullptr;    // np is a constant pointer to int that is null
    int j = 0;
    constexpr int i = 42;       //type of i is const int
                                //i and j must be defined outside any function
    constexpr const int *p = &i;    //p is a constant pointer to the const int i
    constexpr int *p1 = &j;   //p1 is a constant pointer to the int j
                        **TYPES ALIASES**
A type alias is a name that is a synonym for another type.
We use them so that we can simplify complicated type definitions and to make them easier to use.
We use them because it let us emphasizes the purpose for which a type is used.
Method 1:
        typedef
        typedef double wages;         //wages is a synonym for double
        typedef float percent;        //percent is a synonym for float.
method 2:
        using
        using char = letter;          //letter is a synonym for char
        using int = num;              //num is a synonym for int

Pointers,const and Type aliases
Declarations that use type aliases that represent compund types and const can yield surprising results Eg;
typedef char *pstring;           //pstring is an alias for the type char
const pstring cstr = 0;          //cstr is a constant pointer to char
const pstring *ps;          //ps is a pointer to a constant pointer to char
const char *cstr = 0;      //a pointer to const char

                        **CLASSES AND OBJECTS IN C++**
C++ is an object-oriented programming language.

Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

When you define a class, you define a blueprint for a data type. This doesn't actually define any data, but it does define what the class name means, that is, what an object of the class will consist of and what operations can be performed on such an object.

A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces. A class definition must be followed either by a semicolon or a list of declarations.
                        Example;- we defined the Box data type using the keyword class as follows −
                        class Box {
                                    public:
                                        double length;   // Length of a box
                                        double breadth;  // Breadth of a box
                                        double height;   // Height of a box
                                    };
The keyword public determines the access attributes of the members of the class that follows it. 
A public member can be accessed from outside the class anywhere within the scope of the class object.

**TO CREATE A CLASS**
To create a class, use the class keyword:

Example
Create a class called "MyClass":

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
Example explained
The class keyword is used to create a class called MyClass.
The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. You will learn more about access specifiers later.
Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
At last, end the class definition with a semicolon ;.
                                **Create an Object**
In C++, an object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.

To create an object of MyClass, specify the class name, followed by the object name.

To access the class attributes (myNum and myString), use the dot syntax (.) on the object:
Example
Create an object called "myObj" and access the attributes:

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
NOTE:It is important to note that private and protected members can not be accessed directly using direct member access operator (.).
                **Class Methods**
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

                    **Inside class definition**
In the following example, we define a function inside the class, and we name it "myMethod".

Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):
                    **Outside class definition**
To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

                        **CLASSES AND OBJECTS IN DETAILS**
So far, you have got very basic idea about C++ Classes and Objects. There are further interesting concepts related to C++ Classes and Objects which we will discuss in various sub-sections listed below −

Sr.No	Concept & Description
1	Class Member Functions
A member function of a class is a function that has its definition or its prototype within the class definition like any other variable.

2	Class Access Modifiers
A class member can be defined as public, private or protected. By default members would be assumed as private.

3	Constructor & Destructor
A class constructor is a special function in a class that is called when a new object of the class is created. A destructor is also a special function which is called when created object is deleted.

4	Copy Constructor
The copy constructor is a constructor which creates an object by initializing it with an object of the same class, which has been created previously.

5	Friend Functions
A friend function is permitted full access to private and protected members of a class.

6	Inline Functions
With an inline function, the compiler tries to expand the code in the body of the function in place of a call to the function.

7	this Pointer
Every object has a special pointer this which points to the object itself.

8	Pointer to C++ Classes
A pointer to a class is done exactly the same way a pointer to a structure is. In fact a class is really just a structure with functions in it.

9	Static Members of a Class
Both data members and function members of a class can be declared as static.

                                                    **C++ CLASS MEMBER FUNCTIONS**
A member function of a class is a function that has its definition or its prototype within the class definition like any other variable. It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.
Let us take previously defined class to access the members of the class using a member function instead of directly accessing them −
class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box
      double getVolume(void);// Returns box volume
};

                            **Defining Class Member Functions**
Member functions can be defined within the class definition or separately using scope resolution operator, : −. Defining a member function within the class definition declares the function inline, even if you do not use the inline specifier. So either you can define Volume() function as below −
                                                    **Defining Member Function inside the Class**
                                                    class Box {
                                                                public:
                                                                    double length;      // Length of a box
                                                                    double breadth;     // Breadth of a box
                                                                    double height;      // Height of a box
                                                                
                                                                    double getVolume(void) {
                                                                        return length * breadth * height;
                                                                    }
                                                                };
                                                                **Defining Member Function outside of the Class**
If you like, you can define the same function outside the class using the scope resolution operator (::) as follows −         
                                                             double Box::getVolume(void) {
                                                                            return length * breadth * height;
                                                                            }      
NOTE:Here, only important point is that you would have to use class name just before :: operator.    
                                                **Calling (Accessing) Member Functions**
A member function will be called using a dot operator (.) on a object where it will manipulate data related to that object only as follows −
                                                                                            Box myBox;          // Create an object

                                                                                            myBox.getVolume();  // Call member function for the object

                                        **C++ ACCESS MODIFIERS**
C++ access modifiers are used for data hiding implementation. Data hiding is one of the important features of object-oriented programming, which allows the functions of a program to access directly the internal representation of a class type. The access restriction to the class members is specified by the labeled public, private, and protected sections within the class body. The keywords public, private, and protected are called access specifiers.

A class can have multiple public, protected, or private labeled sections. Each section remains in effect until either another section label or the closing right brace of the class body is seen. The default access for members and classes is private.Example:
                                                                class Base { 
                                                                            public:
                                                                                // public members go here
                                                                                protected:
                                                                            
                                                                            // protected members go here
                                                                            private:
                                                                            // private members go here
                                                                            
                                                                            };
                                                       **Public Access Modifier**
The public access modifier defines public data members and member functions that are accessible from anywhere outside the class but within a program. You can set and get the value of public variables without any member function.
                                                            **Private Access Modifier**
The private access modifier defines private data members and member functions that cannot be accessed, or even viewed from outside the class. Only the class and friend functions can access private members.

By default all the members of a class would be private, for example in the following class width is a private member, which means until you label a member, it will be assumed a private member.

Example
The following example demonstrates the use of private access modifier −
                                                                class Box {
                                                                            double width;
                                                                            
                                                                            public:
                                                                                double length;
                                                                                void setWidth( double wid );
                                                                                double getWidth( void );
                                                                            };
                                                                **Protected Access Modifier**
The protected access modifier defines protected data members and member functions that are very similar to a private member, but it provides one additional benefit that they can be accessed in child classes, which are called derived classes.

You will learn derived classes and inheritance in next chapter. For now you can check following example where I have derived one child class SmallBox from a parent class Box.

                                                                **Static Members of a Class**
We can define class members static using static keyword. When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.

A static member is shared by all objects of the class. 
All static data is initialized to zero when the first object is created, if no other initialization is present.
 We can't put it in the class definition but it can be initialized outside the class as done in the following example by redeclaring the static variable, using the scope resolution operator :: to identify which class it belongs to.`

                                                                    **Static function members**
By declaring a function member as static, you make it independent of any particular object of the class. 
A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::.
Static member functions have a class scope and they do not have access to the this pointer of the class. 
You could use a static member function to determine whether some objects of the class have been created or not.

                                                                **Static Data members**
In C++, a static data member is a class member or class-level variable, which is shared by all instances(objects) of that class. This is not like regular data members, which have separate copies for each object of the class, a static data member has only one copy for the entire class, which can be shared across all instances, which means that all objects of the class can access and modify the same value.

                                                            **Static Data Member Declaration**
This is the following syntax for declaring a static data member inside the class using a static keyword.
                                                                                                        class ClassName {
                                                                                                                            public:
                                                                                                                                static dataType staticMemberName; 
                                                                                                                            };

                                                            **Static Data Member Initialization**
This is the following syntax for defining and initializing a static data member outside the class, which is done using ClassName:: scope resolution operator.
                                                                                            Example;
                                                                                           dataType ClassName::staticMemberName = initialValue; 

                                                            **Accessing Static Data Members**
Static data members can be accessed in two ways, that is −
                            Using the Class Name (Recommended)
                            Using an Object (Not Recommended)
                                           **Accessing Static Data Members Using the Class Name**
This is the very common and preferred way of accessing a static data member, which is done by using the scope resolution operator ::

Syntax
Here is the following syntax for it.; 
                                    ClassName::staticDataMember;

                                    **Accessing Static Data Members Using an Object**
You can also access a static data member using an object, but it's generally not recommended because static members are independent of any specific object, and using an object can mislead it.

Syntax
Here is the following syntax for it;
                                        objectName.staticDataMember;

                            **Use Case of Static Data Members**
Static data members in C++ are the names given to those variables that can be accessed by all instances of a class. That is, they are not tied to any object. Let's see some common use cases for it.

1. Tracking object creation
A very common usage of static data members is to track the number of instances or objects for a class.

2. Maintaining global configurations or settings
These are used to create global settings or configuration components that need to be accessed by all instances of a class in any context.

3. Cache or Shared Resource Management
Static data members are also useful for managing shared resources or caching in a system, where it's possible for multiple objects to access the same resource.

4. Implementing design patterns like Singleton
The implementation of design patterns, such as Singleton, is also advantageous, as this particular pattern often uses static data members to ensure that there exists only one instance of a class throughout the entire program. The static member holds the exclusive instance of the class.

5. Tracking global counters or actions across objects
It also helps in tracking a global count of a particular object or action, like counting the number of logins, transactions, or events.

                                            **Static Member Function**
Static Member Function in C++ is a special kind of function that belongs to the class itself rather than any specific object. A static keyword is used to define those functions. They can be directly called by using just the class name, without creating an instance of the class, which is an object.

These are only accessible within the body of the class they are defined in, thus, implementing class-wide operations and certain security measures.
Syntax
Here is the given syntax for static member functions in C++:
                                                    class ClassName {
                                                    public:
                                                        static returnType functionName(parameters) {
                                                            // Function body
                                                        }
                                                    };
                                                    
**What is an Inline Function in C++**
C++ inline function is powerful concept that is commonly used with classes. If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time.

Any change to an inline function could require all clients of the function to be recompiled because compiler would need to replace all the code once again otherwise it will continue with old functionality.

**Defining an Inline Function**
To define an inline function, place the keyword inline before the function name and define the function before any calls are made to the function. The compiler can ignore the inline qualifier in case defined function is more than a line.

A function definition in a class definition is an inline function definition, even without the use of the inline specifier.

**Inline Function with Classes**
By default, all the functions that are defined inside a class are implicitly inline. If you want to explicitly define a function as inline, then you have to declare a function inside the class and write its definition outside the class. The inline keyword is used with the function definition that is outside of the class declaration.

**Advantages of Inline Function**
The following are the advantages of using inline function −

In the case of an inline function, the function call overhead does not occur.
The inline function saves the overhead of the push and pop variables on the stack, when the function is called.
An inline function saves the overhead of a return call from a function.
When an inline function is created, the compiler may perform context specific optimization on the body of the function. This kind of optimization is not performed for normal functions.
Using small inline functions may be useful for embedded systems, because inline can yield less code than the function call preamble and return.
Disadvantages of Inline Function
**Some of the disadvantages of inline functions are as follows** 

When we use an inline function, the size of the code is increased because the compiler replaces each function call with the inline function code.
Large sized code takes more memory and time to compiler the code.
The compilation process slows down because the compiler evaluates and replaces the function code at the place function calls.
In some of the cases, the program's performance may slow down.
Based on the function code complexity, the compiler may ignore the inline keyword. Thus, the application of the inline function is limited.

**this Pointer**
Every object in C++ has access to its own address through an important pointer called this pointer. The this pointer is an implicit parameter for all member functions. Therefore, inside a member function, this may be used to refer to the invoking object.

Friend functions do not have a this pointer because friends are not members of a class. Only member functions have this pointer.

**Return Calling Object's Reference Using this Pointer**
To implement chain function calls, you need the reference of a calling object. You can use the "this" pointer to return the reference of the calling object.

Syntax
Here is the syntax:

Test& Test::func ()
{
   return *this;
}
**Characteristics of the "this" Pointer**
-The "this" pointer refers to the current instance of the object, where it allows the member function to access the object's attributes and methods.
-The "this" pointer is implicitly passed to all non-static member functions, where you don't need to explicitly write this in code.
this points to the memory location of the current object.
-If there is a name conflict between a parameter and a member variable, this can be used to differentiate the member variable from the local parameter.
the "this" pointer is constant (const), meaning it cannot be modified.
-Since this is a pointer, it can be dereferenced to access the current object.
this Pointer in Const Member Functions Vs Static Member Functions
-In const member functions, this pointer is a pointer to a constant object (const MyClass*), where the object’s members cannot be modified within the function, resulting in an object remaining unchanged when calling const functions.

-Whereas static member functions don't have this pointer because they are not associated with any specific instance of the class, they belong to the class itself and can only access static members or methods, as they do not operate on object-specific data.

**Common Use Cases of this Pointer**
In C++, this pointer is a special pointer, which refers to the current instances of a class in non-static member functions.

Here we will see its common use cases in the following.

this pointer helps in preventing self-assignment in assignment operators making sure that an object doesn’t assign itself to itself.
this pointer makes method chaining possible by returning the current object (usually through *this), allowing you to call several methods on the same object in a single line of code.
It allows for direct access to the object’s members within member functions.
It is important in copy constructors and assignment operators, as it helps return the current object during assignments.
it is also useful in Polymorphism, Inherited Classes, and Implement Fluent Interfaces, allowing smooth method chaining.
**Limitations of this Pointer** 
The "this" pointer is a powerful feature in C++, but it has certain limitations and potential pitfalls that developers should keep in mind to prevent errors or unexpected behavior.

this pointer isn’t available in static member functions because static functions are tied to the class itself, not to any specific object.
It can help differentiate between member variables and local variables when their names overlap. However, if a local variable shadows a member variable, it can still lead to confusion or ambiguity.
this pointer always refers to the current object, but using it after the object is destroyed or while it’s being destroyed can cause undefined behavior.
When dealing with multiple inheritance, conflicts can occur if different base classes share members with identical names. This can make it unclear which member the this pointer is pointing to, leading to ambiguity.
Returning *this from a temporary object can be risky since it might leave behind a dangling reference, which could cause unexpected or undefined behavior.


**C++ Friend Functions**
A Friend function of a class is defined outside that class scope but it has the right to access all private and protected members of that class.
Even though the prototypes for friend functions appear in the class definition, friends are not member functions.
A friend can be a function, function template, member function, or a class or class template, in which case the entire class and all of its members are friends.
**Declaring Friend Function**
To declare a function as a friend of a class, precede the function prototype in the class definition with the keyword friend as follows −

Syntax:
                                        class Box {
                                        double width;
                                        
                                        public:
                                            double length;
                                            friend void printWidth( Box box );
                                            void setWidth( double wid );
                                        };
To declare all member functions of class ClassTwo as friends of class ClassOne, place a following declaration in the definition of class ClassOne −

                                                                                                                               friend class ClassTwo;
                                                                                                                               
**Accessing Private and Protected Members**
The private and protected members of a class are not accessible outside of the class. Still, if you want to access them, you can use the friend function. The friend function provides the ability to directly access the class's private and protected members.
**Friend Function vs Member Function**
In C++, both friend functions and member functions are used to access and manipulate the data of a class, but still, they have significant differences in their scope and usage.

**Friend Function**
A friend Function is a non-member function that is declared inside a class using the "friend" keyword, it has special access to the class's private and protected members. Since it's not a member it is not bound to a specific object, can't overloaded based on objects, not use this pointer, and cannot be inherited by derived classes. They are defined outside the class but declared inside it.

**Member function**
Whereas the member function is defined within the class and operates using this pointer. It can access all members of the class (private, protected, and public), and as it is tied to class objects, it can be overloaded and inherited by derived classes.

**Pointer to Classes**
A pointer to a C++ class is done exactly the same way as a pointer to a structure and to access members of a pointer to a class you use the member access operator -> operator, just as you do with pointers to structures. Also as with all pointers, you must initialize the pointer before using it.     
**The Class Constructor**
A class constructor is a special member function of a class that is executed whenever we create new objects of that class.

A constructor will have exact same name as the class and it does not have any return type at all, not even void. Constructors can be very useful for setting initial values for certain member variables.

**Parametirized Constructor**
A default constructor does not have any parameter, but if you need, a constructor can have parameters.
This helps you to assign initial value to an object at the time of its creation.

**Using Initialization Lists to Initialize Fields**
In case of parameterized constructor, you can use following syntax to initialize the fields −

Line::Line( double len): length(len) {
   cout << "Object is being created, length = " << len << endl;
}
Above syntax is equal to the following syntax −

Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
If for a class C, you have multiple fields X, Y, Z, etc., to be initialized, then use can use same syntax and separate the fields by comma as follows −
C::C( double a, double b, double c): X(a), Y(b), Z(c) {
   ....
}
**The Class Destructor**
A destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.

A destructor will have exact same name as the class prefixed with a tilde (~) and it can neither return a value nor can it take any parameters. Destructor can be very useful for releasing resources before coming out of the program like closing files, releasing memories etc.

Constructors are functions of a class that are executed when new objects of the class are created. The constructors have the same name as the class and no return type, not even void. They are primarily useful for providing initial values for variables of the class. The two main types of constructors are default constructors and parameterized constructors.

**Default Constructors**
C++ default constructors do not take any parameters. If a default constructor is not provided by the programmer explicitly, then the compiler provides a implicit default constructor. In that case, the default values of the variables are 0.
Syntax
Here is the following syntax for a default constructor:
                                                        class MyClass {
                                                        public:
                                                            MyClass() {
                                                                // Default constructor body
                                                            }
                                                        };
**Implicit vs Explicit Default Constructors**
In object-oriented programming (OOP), depending on how a default constructor is declared, it can be divided into two categories, implicit and explicit.

1. Implicit Default Constructor
An implicit default constructor is a constructor that is automatically called by the complier when an object is created, it may also be invoked if the user passes arguments that would be convertible into the constructor's parameters.
Syntax;
            class MyClass {
            int x;
            double y;
            };

            int main() {
            MyClass obj;  // Implicit default constructor is called
            }
 2. Explicit Default Constructor
An explicit default constructor is the one where the constructor is not allowed to be called implicitly by the compiler when performing automatic type conversions or copy-initialization. In other words, the user can only call directly when providing a matching argument.           
Syntax;
            class ClassName {
            public:
                explicit ClassName(int x = 10);  // Explicit constructor
            };
**Default Constructor vs Parameterized Constructor**
A default constructor is a constructor, which takes no parameter or has all its parameters set to default values.

Whereas a parameterized constructor is a constructor, which takes one or more arguments. It allows users to pass values during the creation of an object, which is further used for the initialization of an object.

In this tutorial, we will basically learn about the default constructor.

Syntax
Here is the following Syntax for the Default constructor.

**Overloading the Default Constructor**
In C++, overloading the default constructor is said to create multiple constructors within a class, where each constructor has a different parameter list, allowing for different ways of initializing objects

**Copy constructors**
The copy constructor is a constructor that creates an object by initializing it with an object of the same class which has been created previously. The copy constructor is used to −

Initialize one object from another of the same type.
Copy an object to pass it as an argument to a function.
Copy an object to return it from a function.
If a copy constructor is not defined in a class, the compiler itself defines one.If the class has pointer variables and has some dynamic memory allocations, then it is a must to have a copy constructor.
Syntax
The most common form of copy constructor is shown here −
                                                classname (const classname &obj) {
                                                // body of constructor
                                                }
Implicit vs. Explicit Copy Constructors
In C++, there are two types of Copy Constructors that's Implicit and Explicit. Here we will discuss the difference between these two.

Implicit Copy Constructor
If the user doesn't define their own copy constructor, then the compiler automatically provides an implicit copy constructor. It performs a shallow copy of the object, which means that it copies the values of each member of the object to the new object.

When is the Implicit Copy Constructor called?
When a user passes an object by value to a function.
When the user returns an object by value from a function.
When the user initializes an object with another object of the same type (copy initialization).
Explicit (User-Defined) Copy Constructor
It is the user-defined constructor. This gives you access to customize the copy behavior like creating a deep copy instead of the default shallow copy.

**Rule of Three/Five**
The Rule of Three and Rule of Five suggest while defining a copy constructor (ClassName(const ClassName& other)) you should also define:

The Rule of Three and Rule of Five suggest while defining a copy constructor (ClassName(const ClassName& other)) you should also define:

Rule of Three:
destructor (~ClassName()).
And copy assignment operator (ClassName& operator=(const ClassName& other)), to ensure that memory is correctly managed.
Rule of Five:
move constructor (ClassName(ClassName&& other)).
move assignment operator (ClassName& operator=(ClassName&& other))". 
These special member functions are necessary for the proper management of dynamic memory and other and other resources like file handling or network connections in a class.
**Deep Copy vs. Shallow Copy**
In C++, deep copy and shallow copy are different ways of copying objects and they are important when a class involves dynamic memory management.

1. Shallow Copy
It occurs when an object is copied in such a way that both original and copied objects share the same resources. This means that the copy constructor or copy assignment operator simply copies the values of data members (like pointers), without allocating new memory or making independent copies of the resources.
