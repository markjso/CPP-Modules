<h3>ex00</h3>
<h3>Exception classes</h3>

In C++, exception classes are used to represent errors that may occur during the execution of a program. An exception is thrown when an error occurs, and it can be caught and handled by a try-catch block.
To throw an exception of this class in general, you can use the throw keyword, like this:
throw myException("An error occurred")

<h3>what() function</h3>

const char* what() const noexcept { return message_.c_str(); }

The what() function is a member function of the std::exception class, which is the base class for all exception classes in C++, it returns a C-style string that describes the execption that occured.

The const keyword after the function declaration indicates that the function does not modify the object on which it is called. The char * return type means that the function returns a pointer to a null-terminated character array.

In the example code we provided, the what() function is overriden in the MyException class to return a string that describes the error that occured. The const char* return type is used because it is required by the base class, and the noexcept specifier is included to indicate that the function does not throw any exceptions.

<h3>ex01</h3>
<h3>Try block</h3>

A try block is used to enclose a sectio of code that may throw an exception. if an exception is thrown within the try block, the program will immediately jump to the corresponding catch block that can handle that type of exception.

<h3>Catch block</h3>

A catch block is used to handle exception that was thrown within a try block. It takes an argument, which is the type of exception that it can handle, and it is executed when the exception is thrown.

<h3>Throw block</h3>
The Throw statement is used to throw an exception. It is typically used within a fucntion to indicate that an error can occur. When a throw statement is executed, the program will jump immediately out of the current function and look for a catch block that can handle the exception.

When an exception is thrown the program immediately exits the current function and unwinds the call stack until it finds a catch block that can handle the exception. If the program does not find any catch block that can handle the exception, it will call the std::terminate() function which will immediately terminate the program and will lead to an abnormal program termination.

The main advantage of using try-catch is that it allows the program to handle exceptions in a structured and predictable way, rather than having to rely on undefined behavior or return error codes.

<h3>ex02</h3>
<h3>Abstract class</h3>
To make a class abstract it must have a function that equals 0 and is declared as virtual eg
virtual void beExecuted(void) const = 0;
It must also have virtual destructor eg virtual ~AForm( void );

<h3>ex03</h3>
The makeForm() function takes two strings. The first one is the name of a form and the second one is the target of the form. It returns a pointer to a Form object (whose name is the one passed as parameter) whose target will be initialized to the second parameter. eg AForm	*makeForm(const std::string &name, const std::string &target);
