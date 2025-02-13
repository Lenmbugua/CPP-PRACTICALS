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
