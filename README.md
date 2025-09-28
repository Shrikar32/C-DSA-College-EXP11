# C-DSA-College-EXP11
Classes and Objects
# OOPS-in-Cpp
**Aim:** To study and implement Object-Oriented Programming (OOP) concepts in C++.  
**Tools:** GNU g++ compiler (for local execution) / Any code editor or an Online C++ Compiler.

## Theory
The **“++” in C++ stands for Object-Oriented Programming (OOPs)**, which is an enhancement over the C language. While C is a procedural programming language, C++ introduced the concept of classes and objects, making it possible to model real-world entities more effectively.  
OOP organizes programs around objects and their interactions rather than just functions and logic, which improves modularity, reusability, and maintainability. It allows programmers to structure code in a way that is closer to how we think about real-world problems. This shift from procedure-driven design to object-driven design is what makes C++ more powerful  than C.

## Programs
## 1. Class – Student Information
**Logic:**  
This program defines a `Student` class with attributes like name, branch, subject, year, and result. Objects are created to store and display details of different students, demonstrating how classes model real-life entities. The attributes of each student are accessed and displayed using the dot (`.`) operator, which is used to refer to members of a class through its objects.

## 2. Class – Car Details
**Logic:**  
This program uses a `Car` class to store attributes like brand, model, color, price, mileage, and year. Objects are created for multiple cars, and user input is taken to fill their details. It shows how classes can be used to group related information together and create different objects with their own set of values.


## 3. Class – Rectangle Area
**Logic:**  
This program defines a `Rectangle` class with attributes length and width, and a method `area()` to calculate area. It checks whether a rectangle is also a square and compares areas of two rectangles, demonstrating decision-making with class methods.

**Algorithm:**
1. Start.  
2. Define Rectangle class with attributes and area() method.  
3. Take input for two rectangles.  
4. Validate if inputs are positive.  
5. Check if rectangles are squares.  
6. Compute and print areas of both rectangles.  
7. Compare areas and display the result.  
8. Stop.  

## 4. Class – Calculator
**Logic:**  
This program creates a `Calc` class with methods to perform addition, subtraction, multiplication, and division. The user chooses an operation through a menu-driven approach with Default Condition. It also handles division by zero using a condition.

**Algorithm:**
1. Start.  
2. Define Calc class with variables and methods (add, subtract, multiply, divide).  
3. Create object c1.  
4. Take input for two numbers.  
5. Use a loop with a menu for operations.  
6. Call corresponding methods based on choice.  
7. Handle division by zero.  
8. Exit on user choice.  
9. Stop.  


## 5. Class – Types of Methods
**Logic:**  
This program demonstrates two types of method definitions: inside the class and outside the class. The `Cube` clas calculates the volume of cubes using both styles, showing flexibility in defining member functions.

Method outside synatx:
```
datatype ClassName::methodName(){
    statements;
}
```

**Algorithm:**
1. Start.  
2. Define Cube class with attribute side.  
3. Define volume() method inside the class.  
4. Define vol() method outside the class.  
5. Create two cube objects.  
6. Input side lengths.  
7. Calculate and print volumes using both methods.  
8. Stop.  


## 6. Class – Access Specifier 
**Logic:**  
This program shows the use of access specifiers. The attribute `side` is private, so it cannot be accessed directly from outside the class. Instead, a public method `volume()` is used to calculate and return the cube’s volume. If we try to access `side` separately in `main`, it will give an error because private data can only be used inside the class methods.

**Algorithm:**
1. Start.  
2. Define Cube class with private attribute side and public method volume().  
3. Create an object of Cube.  
4. Call volume() method to calculate cube volume.  
5. Print result.  
6. Stop.  

## Conclusion
We learned how C++ programs can be structured using classes and objects.  
- **Student & Car classes** showed how to store and display related information.  
- **Rectangle & Calculator classes** used member functions to perform calculations and comparisons.  
- **Types of Methods** explained how functions can be written inside and outside a class.  
- **Access Specifiers** showed how some data can be kept private and accessed only through functions.  

Together, these programs give a basic understanding of how classes and objects work in C++.
