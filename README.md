# Comprehensive C++ Learning Project

A complete C++ project demonstrating concepts from beginner to advanced levels, organized by topic and difficulty.

## Project Structure

```
HelloWorld/
├── bin/                    # Compiled executables
│   └── helloworld.exe      # Main application
├── include/                # Header files (.h)
│   ├── greet.h            # Basic greeting functions
│   ├── basics.h           # Fundamental concepts
│   ├── systems.h          # Systems programming
│   ├── data_structures.h  # Arrays, pointers, memory
│   ├── oop.h              # Object-oriented programming
│   ├── stl.h              # Standard Template Library
│   ├── math.h             # Mathematical computations
│   ├── physics.h          # Physics simulations
│   └── advanced.h         # Advanced C++ features
├── src/                   # Source files (.cpp)
│   ├── core/              # Main application
│   │   └── hello.cpp      # Program entry point with menu system
│   ├── utils/             # Utility functions
│   │   └── greet.cpp      # Greeting implementation
│   ├── basics/            # Fundamental concepts
│   │   ├── variables.cpp  # Variables & data types
│   │   ├── functions.cpp  # Functions & parameters (planned)
│   │   └── control_flow.cpp # Control structures (planned)
│   ├── data_structures/   # Arrays, pointers, memory
│   │   ├── arrays.cpp     # Array operations
│   │   ├── pointers.cpp   # Pointers & memory
│   │   └── strings.cpp    # String manipulation
│   ├── systems/           # Systems programming
│   │   ├── file_operations.cpp    # File I/O
│   │   ├── memory_management.cpp  # Smart pointers
│   │   └── process_management.cpp # Processes
│   ├── oop/               # Object-oriented programming
│   │   ├── classes.cpp    # Classes & objects
│   │   ├── inheritance.cpp # Inheritance & polymorphism
│   │   └── templates.cpp  # Generic programming
│   ├── stl/               # Standard Template Library
│   │   ├── containers.cpp # Vectors, maps, sets
│   │   ├── algorithms.cpp # Sort, find, transform
│   │   └── iterators.cpp  # Iterator patterns
│   ├── math/              # Mathematical computations
│   │   ├── calculus1/     # Calculus 1 implementations
│   │   │   ├── derivatives.cpp      # Numerical differentiation
│   │   │   ├── integrals.cpp        # Numerical integration
│   │   │   └── applications.cpp     # Optimization problems
│   │   ├── calculus2/     # Calculus 2 implementations
│   │   │   ├── integration_techniques.cpp
│   │   │   ├── parametric_equations.cpp
│   │   │   ├── sequences_series.cpp
│   │   │   └── partial_derivatives.cpp
│   │   ├── calculus3/     # Calculus 3 implementations
│   │   │   ├── vector_functions.cpp
│   │   │   ├── multiple_integrals.cpp
│   │   │   ├── vector_calculus.cpp
│   │   │   └── vector_fields.cpp
│   │   ├── linear_algebra/ # Linear algebra
│   │   │   ├── matrices.cpp
│   │   │   └── vectors.cpp
│   │   └── diff_equations/ # Differential equations
│   │       ├── ode_solver.cpp
│   │       └── systems.cpp
│   ├── physics/           # Physics simulations
│   │   └── mechanics/     # Classical mechanics
│   │       ├── kinematics.cpp     # Motion
│   │       ├── dynamics.cpp       # Forces
│   │       └── rotation.cpp       # Rotational motion
│   └── advanced/          # Advanced topics
│       ├── exceptions.cpp # Error handling
│       ├── modern_cpp.cpp # C++11/14/17/20 features
│       └── performance.cpp # Optimization techniques
├── data/                  # Sample data files
│   ├── test_inputs.txt    # Test data
│   └── sample_outputs.txt # Expected results
├── docs/                  # Documentation
│   ├── api_reference.md   # Function documentation
│   └── tutorials/         # Implementation guides
└── .vscode/               # VSCode configuration
    └── tasks.json         # Build tasks and compilation
```

## Sequential Learning Path

### **Phase 1: Foundations + Calculus 1** 🟢 (Current: In Progress)
**Prerequisites:** None
**Academic Focus:** Calculus 1 (First College Math Class)

1. **Variables & Data Types** - `src/basics/variables.cpp`
   - int, float, char, bool, string
   - Memory usage (sizeof)
   - Type conversion

2. **Functions & Parameters** - `src/basics/functions.cpp`
   - Function declarations
   - Parameters and return values
   - Function overloading

3. **Control Flow** - `src/basics/control_flow.cpp` (planned)
   - if/else statements
   - Loops (for, while, do-while)
   - Switch statements

4. **Calculus 1: Derivatives** - `src/math/calculus1/derivatives.cpp`
   - Numerical differentiation
   - Rate of change calculations
   - Applications: optimization, physics

5. **Calculus 1: Integration** - `src/math/calculus1/integration.cpp`
   - Numerical integration methods
   - Area calculations
   - Applications: physics, engineering

### **Phase 2: Data Structures + Linear Algebra** 🟡 (Next: Planned)
**Prerequisites:** Phase 1 complete
**Academic Focus:** Linear Algebra (Often concurrent with Calculus)

6. **Arrays & Memory** - `src/data_structures/arrays.cpp`
   - Static and dynamic arrays
   - Memory allocation (new/delete)
   - Array operations

7. **Pointers & References** - `src/data_structures/pointers.cpp`
   - Pointer declaration and usage
   - Memory addresses
   - Dynamic memory management

8. **Strings & Text Processing** - `src/data_structures/strings.cpp`
   - C++ string class
   - String operations
   - Text manipulation

9. **Linear Algebra: Matrices** - `src/math/linear_algebra/matrices.cpp`
   - Matrix operations (addition, multiplication)
   - Matrix transformations
   - Applications: computer graphics, data processing

10. **Linear Algebra: Vectors** - `src/math/linear_algebra/vectors.cpp`
    - Vector operations and calculations
    - Dot product, cross product
    - Applications: physics, 3D graphics

### **Phase 3: Systems Programming + Differential Equations** 🟠 (After Phase 2)
**Prerequisites:** Pointers and memory management
**Academic Focus:** Differential Equations

11. **File Operations** - `src/systems/file_operations.cpp`
    - Reading/writing files
    - Directory operations
    - File permissions

12. **Memory Management** - `src/systems/memory_management.cpp`
    - Smart pointers
    - Custom allocators
    - Memory pools

13. **Process Management** - `src/systems/process_management.cpp`
    - Creating processes
    - Inter-process communication
    - System calls

14. **Differential Equations: ODE Solvers** - `src/math/diff_equations/ode_solver.cpp`
    - Euler's method, Runge-Kutta methods
    - Applications: physics simulations, control systems

15. **Differential Equations: Systems** - `src/math/diff_equations/systems.cpp`
    - Coupled differential equations
    - Applications: circuit analysis, mechanical systems

### **Phase 4: Object-Oriented Programming + Calculus 2 + Mechanics** 🔵
**Prerequisites:** Functions and data structures
**Academic Focus:** Calculus 2 (Multivariable) + Physics 1 (Mechanics)
**Physics Prerequisites:** Calculus 2 (for kinematics, dynamics)

16. **Classes & Objects** - `src/oop/classes.cpp`
    - Class definition
    - Member variables and functions
    - Constructors and destructors

17. **Inheritance & Polymorphism** - `src/oop/inheritance.cpp`
    - Base and derived classes
    - Virtual functions
    - Runtime polymorphism

18. **Calculus 2: Integration Techniques (Chapter 7)** - `src/math/calculus2/integration_techniques.cpp`
    - Advanced numerical integration methods
    - Adaptive quadrature algorithms
    - Error estimation and convergence testing

19. **Calculus 2: Parametric Equations (Chapter 10)** - `src/math/calculus2/parametric_equations.cpp`
    - Parametric curve generation and analysis
    - Arc length calculations
    - Polar coordinate conversions

20. **Calculus 2: Sequences & Series (Chapter 11)** - `src/math/calculus2/sequences_series.cpp`
    - Numerical series convergence testing
    - Taylor and Maclaurin series computation
    - Power series evaluation and approximation

21. **Calculus 2: Partial Derivatives (Chapter 13)** - `src/math/calculus2/partial_derivatives.cpp`
    - Numerical partial differentiation
    - Gradient vector computation
    - Multi-variable function optimization

20. **Physics 1: Mechanics - Kinematics** - `src/physics/mechanics/kinematics.cpp`
    - Position, velocity, acceleration
    - Projectile motion, orbital mechanics
    - Applications: game physics, robotics

21. **Physics 1: Mechanics - Dynamics** - `src/physics/mechanics/dynamics.cpp`
    - Newton's laws, force analysis
    - Energy and momentum conservation
    - Applications: collision detection, rigid body simulation

22. **Physics 1: Mechanics - Rotational Motion** - `src/physics/mechanics/rotation.cpp`
    - Angular velocity, torque, moment of inertia
    - Rotational kinematics and dynamics
    - Applications: vehicle physics, mechanical systems

### **Phase 5: Algorithms + Advanced C++ + Calculus 3 + Advanced Physics** 🔴
**Prerequisites:** OOP, Calculus 3, Mechanics
**Academic Focus:** Algorithms (CS Theory) + Calculus 3 (Vector Calculus) + Physics 2 & 3
**Physics Prerequisites:** Calculus 3 + Mechanics (for both Waves and E&M)

23. **Algorithm Fundamentals** - `src/algorithms/`
    - **Sorting Algorithms** - QuickSort, MergeSort, BubbleSort (Pseudocode Focus)
    - **Search Algorithms** - Binary Search, Linear Search
    - **Dynamic Programming** - Fibonacci, Knapsack problems
    - **Graph Algorithms** - BFS, DFS, Shortest Paths

24. **STL Containers** - `src/stl/containers.cpp`
    - vector, map, set, queue
    - Container operations
    - Performance characteristics

25. **STL Algorithms** - `src/stl/algorithms.cpp`
    - sort, find, transform
    - Lambda functions
    - Custom comparators

26. **Advanced C++** - `src/advanced/`
    - Templates and metaprogramming
    - Exception handling
    - Modern C++ features (C++11/14/17/20)

26. **Calculus 3: Vector Functions (Chapter 13)** - `src/math/calculus3/vector_functions.cpp`
    - Vector-valued functions
    - Space curves and motion
    - Arc length and curvature calculations

27. **Calculus 3: Partial Derivatives (Chapter 14)** - `src/math/calculus3/partial_derivatives.cpp`
    - Multi-variable function analysis
    - Directional derivatives
    - Lagrange multipliers for optimization

28. **Calculus 3: Multiple Integrals (Chapter 15)** - `src/math/calculus3/multiple_integrals.cpp`
    - Double and triple integral computation
    - Coordinate system transformations
    - Volume and mass calculations

29. **Calculus 3: Vector Calculus (Chapter 16)** - `src/math/calculus3/vector_calculus.cpp`
    - Line integrals and work calculations
    - Surface integrals and flux
    - Green's, Stokes', and Divergence theorems

30. **Calculus 3: Vector Fields (Chapter 17)** - `src/math/calculus3/vector_fields.cpp`
    - Gradient, divergence, and curl operations
    - Conservative vector fields
    - Potential functions

28. **Physics 2: Waves, Sound & Thermodynamics** - `src/physics/waves_sound/`
    - Wave equations and interference
    - Sound propagation and acoustics
    - Heat transfer and thermodynamic cycles
    - Applications: audio processing, climate modeling

29. **Physics 3: Electricity & Magnetism** - `src/physics/electromagnetism/`
    - Electric and magnetic fields
    - Maxwell's equations
    - Electromagnetic waves
    - Applications: antenna design, motor control, wireless communication

## Build Instructions

### Using VSCode
1. Open the project in VSCode
2. Press `Ctrl+Shift+B` to build
3. Run the executable from `bin/helloworld.exe`

### Using Command Line
```bash
# Compile the project
g++ src/hello.cpp src/greet.cpp -I include -o bin/helloworld.exe

# Run the program
./bin/helloworld.exe
```

## Features

- Modular design with separate header and source files
- Clean separation of concerns
- Cross-platform compilation (works on Windows, Linux, macOS)
- VSCode integration for easy development

## Requirements

- C++ compiler (g++, clang++, or MSVC)
- Basic understanding of C++ programming
