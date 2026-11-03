# Striver's A2Z DSA Solving

Solutions and practice implementations based on [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/). The repository is a hands-on workspace for learning, revising, and comparing common Data Structures and Algorithms techniques.

## Languages

- **C++** — primary language for algorithm implementations
- **Python** — selected problem and machine-learning practice

## Topics

The current collection includes practice programs covering:

- Arrays and strings
- Sorting and searching
- Hashing and maps
- Recursion and backtracking
- Basic linked-list operations
- Mathematical and array-manipulation problems

The repository will grow as more sections of the A2Z sheet are completed.

## Repository layout

Each source file is a standalone program focused on one problem or technique. File names describe the problem or algorithm, for example:

- `merge_sort.cpp` — merge sort
- `quick_sort.cpp` — quick sort
- `majority.cpp` — majority-element problem
- `backtrack1.cpp` — backtracking practice
- `naive_bayes.py` — Python practice implementation

## Running a solution

### C++

Compile with a C++17-compatible compiler:

```bash
g++ -std=c++17 -O2 merge_sort.cpp -o merge_sort
./merge_sort
```

Replace `merge_sort.cpp` with any C++ source file you want to run.

### Python

```bash
python3 naive_bayes.py
```

Some programs expect input from standard input; provide it according to the prompts or input handling in the selected source file.

## Notes

- These are learning and practice solutions, so implementations may favor clarity over production-level abstraction.
- Compiled executables are present for some C++ files; they can be regenerated locally using the commands above.
