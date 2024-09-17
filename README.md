
# TemplateSortingDemo

## Project Overview
This project, created by **Jerry Tan**, demonstrates the use of C++ templates for generic programming. The project features a sorting function capable of sorting arrays of various data types, such as integers and floats, using C++'s standard library algorithms. This approach showcases C++'s ability to create flexible, reusable, and efficient code using templates.

## Features
- **Generic Programming**: Uses templates to implement functions that operate on arrays of any data type.
- **Sorting Algorithm**: Utilizes the `std::sort` function from the C++ Standard Library.
- **Reusable Code**: The same sorting logic applies to different data types (int, float, etc.) without rewriting the function.

## Project Structure
```
TemplateSortingDemo/
├── src/
│   └── main.cpp       # C++ source code implementing the sorting demo
├── Makefile           # Makefile for compiling the project
├── .gitignore         # Git ignore file for C++/CLion
└── README.md          # Project documentation
```

## How to Build
You can build the project using either the provided **Makefile** or by manually compiling the code.

### Using Makefile:
1. Open a terminal and navigate to the project directory.
2. Run the following command to build the project:
   ```bash
   make
   ```
3. To clean up the compiled binary, run:
   ```bash
   make clean
   ```

### Manual Compilation:
If you don't want to use the Makefile, you can manually compile the project with the following command:
```bash
g++ src/main.cpp -o TemplateSortingDemo
```

## How to Run
Once compiled, you can run the executable:
```bash
./TemplateSortingDemo
```
This will demonstrate sorting arrays of integers and floating-point numbers, displaying the original and sorted arrays.

## Future Enhancements
While the project currently demonstrates basic template usage, here are a few potential improvements:
1. **Support for User-Defined Types**: Extend the template functions to sort arrays of user-defined classes or structs, allowing custom comparison logic.
2. **Command-Line Arguments**: Allow users to input array elements or array size via command-line arguments for more dynamic sorting.
3. **Error Handling**: Add error handling to ensure proper input validation and type safety.
4. **Unit Tests**: Implement unit tests using a testing framework like Google Test to validate the correctness of the sorting logic.
5. **Performance Optimization**: Compare the performance of different sorting algorithms and optimize for specific data types or sizes.
6. **Graphical Interface**: Add a basic UI to visualize the sorting process and its results.

## License
```
© 2024 Jerry Tan. All Rights Reserved.

This software is the confidential and proprietary information of Jerry Tan ("Confidential Information"). You shall not disclose such Confidential Information and shall use it only in accordance with the terms under which this software was distributed or otherwise published, and solely for the prior express purposes explicitly communicated and agreed upon, and only for those specific permissible purposes.

This software is provided "AS IS," without a warranty of any kind. All express or implied conditions, representations, and warranties, including any implied warranty of merchantability, fitness for a particular purpose, or non-infringement, are disclaimed, except to the extent that such disclaimers are held to be legally invalid.
```

## Author
**Jerry Tan**

A software developer passionate about building efficient and flexible solutions with modern C++ features like templates, polymorphism, and generic programming.

