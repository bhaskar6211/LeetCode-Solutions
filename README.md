# LeetCode Solutions in C++ & Java

Welcome to my repository containing clean, optimized, and well-structured C++ and Java solutions for various LeetCode problems. The solutions are categorized by topic and data structure.

## 📂 Repository Structure

```text
Leetcode/
├── Array/                      # Array and matrix manipulation problems
│   ├── Problem_16.cpp          # 3Sum Closest (C++)
│   ├── Problem_18.cpp          # 4Sum (C++)
│   ├── Problem_26.cpp          # Remove Duplicates from Sorted Array (C++)
│   ├── Problem_31.cpp          # Next Permutation (C++)
│   ├── Problem_88.java         # Merge Sorted Array (Java)
│   ├── Problem_605.cpp         # Can Place Flowers (C++)
│   └── Problem_1431.cpp        # Kids With the Greatest Number of Candies (C++)
├── String/                     # String manipulation & arithmetic problems
│   ├── Problem_43.cpp          # Multiply Strings (C++)
│   └── Problem_1768.cpp        # Merge Strings Alternately (C++)
├── Problem_50.java             # Pow(x, n) (Java - Math)
├── Problem_54.java             # Spiral Matrix (Java - Array/Matrix)
├── Problem_69.java             # Sqrt(x) (Java - Math/Binary Search)
├── Problem_148.java            # Sort List (Java - Linked List)
├── problem_217.java            # Contains Duplicate (Java - Array/Hash Set)
├── Problem_233.java            # Number of Digit One (Java - Math/Digit DP)
└── README.md                   # Repository documentation
```

## 🛠️ Solutions Overview

### Array & Matrix

| Problem # | Title | Difficulty | Language | Approach / Key Concept | Solution File |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **16** | [3Sum Closest](https://leetcode.com/problems/3sum-closest/) | Medium | C++ | Sorting & Two-Pointer | [Problem_16.cpp](./Array/Problem_16.cpp) |
| **18** | [4Sum](https://leetcode.com/problems/4sum/) | Medium | C++ | Sorting, Nested Loops & Two-Pointer | [Problem_18.cpp](./Array/Problem_18.cpp) |
| **26** | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Easy | C++ | Two-Pointer (Slow & Fast Pointer) | [Problem_26.cpp](./Array/Problem_26.cpp) |
| **31** | [Next Permutation](https://leetcode.com/problems/next-permutation/) | Medium | C++ | Two-Pointer & Lexicographical Swap | [Problem_31.cpp](./Array/Problem_31.cpp) |
| **54** | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | Medium | Java | Layer-by-Layer Boundary Traversal | [Problem_54.java](./Problem_54.java) |
| **88** | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | Easy | Java | Three-Pointer (Reverse Merge) | [Problem_88.java](./Array/Problem_88.java) |
| **217** | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Easy | Java | Hash Set | [problem_217.java](./problem_217.java) |
| **605** | [Can Place Flowers](https://leetcode.com/problems/can-place-flowers/) | Easy | C++ | Single Pass Greedy | [Problem_605.cpp](./Array/Problem_605.cpp) |
| **1431** | [Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/) | Easy | C++ | Maximum Element Comparison | [Problem_1431.cpp](./Array/Problem_1431.cpp) |

### String

| Problem # | Title | Difficulty | Language | Approach / Key Concept | Solution File |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **43** | [Multiply Strings](https://leetcode.com/problems/multiply-strings/) | Medium | C++ | Positional Array Multiplication | [Problem_43.cpp](./String/Problem_43.cpp) |
| **1768** | [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/) | Easy | C++ | Two-Pointer Interleaving | [Problem_1768.cpp](./String/Problem_1768.cpp) |

### Math & Binary Search

| Problem # | Title | Difficulty | Language | Approach / Key Concept | Solution File |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **50** | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | Medium | Java | Fast Exponentiation (Binary Exponentiation) | [Problem_50.java](./Problem_50.java) |
| **69** | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | Easy | Java | Newton's Method / Binary Search | [Problem_69.java](./Problem_69.java) |
| **233** | [Number of Digit One](https://leetcode.com/problems/number-of-digit-one/) | Hard | Java | Digit-by-Digit Counting | [Problem_233.java](./Problem_233.java) |

### Linked List

| Problem # | Title | Difficulty | Language | Approach / Key Concept | Solution File |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **148** | [Sort List](https://leetcode.com/problems/sort-list/) | Medium | Java | Merge Sort (Fast & Slow Pointers) | [Problem_148.java](./Problem_148.java) |

---

## 🚀 How to Run the Solutions Locally

### 1. C++ Solutions
To compile and run C++ solutions, ensure a C++ compiler (`g++` or `clang++`) is installed.

#### Compile
```bash
g++ -O3 -std=c++17 Array/Problem_16.cpp -o Array/Problem_16
```

#### Run Executable
- **Windows**:
  ```cmd
  .\Array\Problem_16.exe
  ```
- **Linux / macOS**:
  ```bash
  ./Array/Problem_16
  ```

### 2. Java Solutions
To compile and run Java solutions, ensure JDK is installed.

#### Compile & Run
```bash
javac Problem_50.java
java Problem_50
```

---

## 📈 Goals & Progress
- Keep adding optimal solutions for new LeetCode problems.
- Implement driver code/unit testing in `main()` for easy local verification.
- Continue categorizing solutions across Dynamic Programming, Graphs, Trees, Strings, and Advanced Data Structures.
