# ft_printf
A 42-school project to produce a reproduction of the printf function in C.

## Key Considerations at Project Start:

* The function is a variadic function, which means that it takes a variable number of arguments. Will need to use the appropriate variadic function macros and data types, such as "va_list" and "va_start", to correctly handle the variable number of arguments passed to this version of the "ft_printf" function.
* The "printf" function is used to format and print data to the standard output stream (usually the screen), so will need to implement the necessary logic and formatting rules to properly output the data. This will involve parsing the format string and handling the various format specifiers that can be used to control the output, such as " %d" for decimal integers and " %s" for strings.
* It is important to follow the same conventions and standards used by the existing implementation. This includes using the same function signature and return type, as well as adhering to the same formatting and behavior specified by the C standard.
* It is important to make sure that your implementation behaves identically to the standard version in all cases. This will involve thorough testing and debugging to ensure that the implementation is correct and reliable.

### Objective: 
The goal of this project is to implement a custom version of the "printf" function from the Standard C Library, with the same functionality and behavior as the standard version.

### Scope: 
The scope of this project includes the implementation of the "printf" function, as well as any necessary supporting functions or data types. The project will not include the implementation of any additional formatting specifiers beyond those already supported by the standard "printf" function.

### Requirements: 
In order to meet the objective of the project, the following requirements must be satisfied:

* Have the same function signature and return type as the standard version.
* Support all of the same formatting specifiers as the standard version (or at least as many designated in the brief).
* Output the same formatted data as the standard version, given the same input.
* Handle variable numbers of arguments using the appropriate variadic function macros and data types.

### Design: 
The design of the project will involve the following steps:

1. Familiarize with the existing implementation of the "printf" function, including its function signature, behavior, and supported formatting specifiers.
2. Write a skeleton implementation of the "printf" function that includes the necessary variadic function macros and data types to handle variable numbers of arguments.
3. Implement the logic for parsing the format string and handling the various format specifiers.
4. Test the implementation thoroughly to ensure that it behaves correctly and produces the same output as the standard "printf" function.
5. Refine and optimize the implementation as needed to improve performance and reliability.  
