I'd be glad to create a comprehensive README for the provided OpenMP program:

**README**
**Created by devnolife**

**Program Title:** Parallel Sum with OpenMP (C++)

**Description:**

This C++ program demonstrates parallel summation using OpenMP directives. It calculates the sum of elements in an array by distributing the computation across multiple threads.

**OpenMP Directives:**

- `#pragma omp parallel for reduction(+:sum)`:
  - This directive creates a parallel region where the following loop will be executed concurrently by multiple threads.
  - The `for` clause indicates that the loop can be parallelized.
  - The `reduction(+:sum)` clause specifies that the variable `sum` should be reduced across all threads using the addition operator (`+`). OpenMP ensures thread-safe accumulation of partial sums into the final `sum` value.

**Running the Program:**

**Prerequisites:**

- **C++ Compiler:** Ensure you have a C++ compiler installed on your system. Common options include GCC (GNU Compiler Collection) or Clang.
- **OpenMP Support:** Most modern compilers come with OpenMP support enabled by default. However, you might need to add the `-fopenmp` flag during compilation if your compiler requires explicit enabling.

**Compilation Steps:**

1. **Create a C++ File:**
   - Use a text editor or IDE to create a new file with a `.cpp` extension (e.g., `parallel_sum.cpp`).
2. **Paste the Code:**
   - Copy and paste the provided OpenMP code into the newly created file.
3. **Save the File:**
   - Save the file with an appropriate filename (e.g., `parallel_sum.cpp`).
4. **Compile the Code:**
   - Open a terminal or command prompt and navigate to the directory where you saved the C++ file.
   - Use the following command to compile the code. Replace `your_compiler` with your actual compiler (e.g., `g++` for GCC):

     ```bash
     your_compiler -fopenmp parallel_sum.cpp -o parallel_sum
     ```

     - The `-fopenmp` flag enables OpenMP features during compilation.
     - The output will be an executable file named `parallel_sum`.

5. **Run the Program:**
   - Execute the program by typing the following command in the terminal:

     ```bash
     ./parallel_sum
     ```

   - The program will print the calculated sum on the console.

**Example Output:**

```
Penjumlahan: 4950
```
