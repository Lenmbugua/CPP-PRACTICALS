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
