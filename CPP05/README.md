*This project has been created as part of the 42 curriculum by mhnatovs.*

# CPP Module 05 - Repetition and Exceptions

## Description
This project introduces exception handling and reinforces object-oriented programming concepts in C++. The goal is to understand how to use exceptions to handle errors safely and how access control can be implemented through class relationships.

The module revolves around a bureaucratic system composed of different classes, such as Bureaucrat and various types of Forms. A bureaucrat has a grade that determines which actions they are authorized to perform. Forms can require specific grades to be signed or executed, and exceptions are used whenever an operation violates these constraints.

Throughout the project, the following concepts are explored:

Exception handling with try, catch, and throw
Custom exception classes
Class relationships and composition
Inheritance and polymorphism
Abstract base classes and interfaces
Dynamic allocation and resource management
Encapsulation and access control
Orthodox Canonical Form (OCF)

The project demonstrates how exceptions can be used to create robust and maintainable code while continuing to develop a deeper understanding of object-oriented design in C++.

## Instructions
### Compilation

Compile the project using the provided Makefile in each exercise:

```bash
make
```

Available Makefile rules:

```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Rebuild the project
```

Running the Program

After compilation, run the executable:

```bash
./bureaucrat
```

## Resources
 - https://www.w3schools.com/cpp/cpp_exceptions.asp

 - https://www.geeksforgeeks.org/cpp/function-pointer-in-cpp/

## AI Usage

AI tools were used as a supplementary learning resource during the development of this project.

### AI was used for:

* Understanding C++ concepts and language features
* Clarifying project requirements and subject specifications
* Debugging assistance and error analysis
* Reviewing code structure and design decisions
* Explaining compiler errors and warning messages
* Suggesting improvements for code readability and naming conventions
* Discussing object-oriented programming concepts such as inheritance, polymorphism, and exceptions

### AI was not used for:

* Generating complete project solutions
* Writing substantial portions of the final code
* Copying and submitting code without understanding it
* Bypassing the learning or problem-solving process

All implementation decisions, coding, testing, and final solutions were completed independently. AI was used as an educational tool to support understanding and learning throughout the project.

