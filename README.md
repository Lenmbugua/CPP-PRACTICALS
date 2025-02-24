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

