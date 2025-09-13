# Experiment 13 : Constructor and Function Overloading in C++

## Aim
To study and implement constructor overloading, function overloading, and operator overloading in C++ through the following programs:
- **13A** : Constructor Overloading  
- **13B** : Constructor Overloading with Calculator Example  
- **13C** : Function Overloading with Data Types and Functions such as Square, Cube, etc.  
- **13D** : Constructor Addition Operator with Complex Numbers  
- **13E** : Constructor Multiplication Operator using Items and Unit Price  

## Tools Used
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Constructor Overloading
- Constructor overloading occurs when a class has more than one constructor with different parameter lists.  
- It allows objects to be initialized in multiple ways.  

### Function Overloading
- Function overloading allows multiple functions with the same name but different parameter lists.  
- The compiler decides which function to call based on the arguments passed.  

### Operator Overloading
- Operator overloading allows operators like `+`, `*`, etc., to be redefined for user-defined data types (e.g., complex numbers, items).  
- It improves readability and simplifies operations on objects.  

---

## Algorithm

### 13A: Constructor Overloading
1. Start  
2. Define a class with multiple constructors (default, parameterized).  
3. Initialize objects using different constructors.  
4. Display results.  
5. End  

### 13B: Constructor Overloading with Calculator Example
1. Start  
2. Define a Calculator class with constructors for addition, subtraction, multiplication, etc.  
3. Create objects by passing different arguments.  
4. Perform and display calculations.  
5. End  

### 13C: Function Overloading with Data Types and Functions (Square, Cube, etc.)
1. Start  
2. Define multiple functions with the same name but different parameter lists (e.g., `square(int)`, `square(float)`).  
3. Call overloaded functions with different argument types.  
4. Display the square and cube of numbers.  
5. End  

### 13D: Constructor Addition Operator with Complex Numbers
1. Start  
2. Define a `Complex` class with real and imaginary parts.  
3. Overload the `+` operator using constructors.  
4. Create two complex number objects.  
5. Add them using the overloaded operator and display result.  
6. End  

### 13E: Constructor Multiplication Operator using Items and Unit Price
1. Start  
2. Define an `Item` class with data members for name, unit, and price.  
3. Overload the `*` operator to multiply item quantity with unit price.  
4. Create objects and perform multiplication.  
5. Display total cost.  
6. End  

---

## Functions
- **Constructor Overloading** (`ClassName()`, `ClassName(int)`, `ClassName(float, int)`)  
- **Function Overloading** (same function name, different parameter lists)  
- **Operator Overloading** (`operator+`, `operator*`)  
- Understanding of compile-time polymorphism in C++.  

---

## Conclusion
Through this experiment, I learned how constructor overloading, function overloading, and operator overloading work in C++.  
I implemented programs using constructors with different arguments, overloaded functions with varying data types, and redefined operators for user-defined classes.  
This improved my understanding of compile-time polymorphism and enhanced my problem-solving skills using object-oriented programming in C++.
