# LeetCode Solutions in C++

Welcome to my repository containing clean, optimized, and well-structured C++ solutions for various LeetCode problems. The solutions are categorized by topic/data structure.

## 📂 Repository Structure

```text
Leetcode/
├── Array/                      # Solutions related to arrays and vectors
│   ├── Problem_16.cpp          # 3Sum Closest
│   ├── Problem_18.cpp          # 4Sum
│   └── Problem_26.cpp          # Remove Duplicates from Sorted Array
└── README.md                   # Repository documentation
```

## 🛠️ Solutions Overview

### Array

| Problem # | Title | Difficulty | Approach / Key Concept | Solution File |
| :--- | :--- | :--- | :--- | :--- |
| **16** | [3Sum Closest](https://leetcode.com/problems/3sum-closest/) | Medium | Sorting & Two-Pointer | [Problem_16.cpp](./Array/Problem_16.cpp) |
| **18** | [4Sum](https://leetcode.com/problems/4sum/) | Medium | Sorting, Nested Loops & Two-Pointer | [Problem_18.cpp](./Array/Problem_18.cpp) |
| **26** | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Easy | Two-Pointer (Slow & Fast Pointer) | [Problem_26.cpp](./Array/Problem_26.cpp) |

---

## 🚀 How to Run the Solutions Locally

To compile and run any C++ solution on your machine, you need a C++ compiler (like `g++` from GCC) installed.

### 1. Clone the repository
```bash
git clone <repository-url>
cd Leetcode
```

### 2. Compile a specific solution
Navigate to the directory of interest and compile the `.cpp` file. For example, for **Problem 16 (3Sum Closest)**:
```bash
g++ -O3 -std=c++17 Array/Problem_16.cpp -o Array/Problem_16
```

### 3. Run the compiled executable
- **Windows**:
  ```cmd
  .\Array\Problem_16.exe
  ```
- **Linux / macOS**:
  ```bash
  ./Array/Problem_16
  ```

## 📈 Goals & Progress
- Keep adding optimal solutions for new problems.
- Implement neat unit testing in the `main()` function of each solution to verify correctness.
- Organize solutions by categories like Dynamic Programming, Graphs, Trees, Strings, etc.
