Trabb Pardo–Knuth Algorithm


This article is not about learning some new complex algorithm, its more about the history of programming. TPK was introduced to illustrate the evolution of computer programming languages. By the time you are finished with this article you will have learnt something about the history of programming rather than a new concept.

In their 1977 work “The Early Development of Programming Languages”, Trabb Pardo and Knuth introduced a small program that involved arrays, indexing, mathematical functions, subroutines, I/O, conditionals and iteration. This program was written in several early programming language to show the evolution of programming languages.

Just like the “Hello World!” program has the purpose of introducing beginners to programming the TPK has the same purpose and has no practical applications.

Algorithm:
input 11 numbers into a sequence A
reverse sequence A
for each item in sequence A
    call a function to do an operation
    if result overflows
        alert user
    else
        print result

// C program to implement TPK algorithm
#include <stdio.h>
#include <math.h>
  
// f(x) = sqrt(|x|) + 5*x**3 
double f (double x)
{
    return (sqrt(fabs(x)) + 5.0 * pow(x, 3.0));
}
  
int main (int argc, char* argv[])
{
    double y;
    int i;
  
    // Read in the values of the array A 
    double A[11] = {7.9, 7.3, 20.9, 112.0, 5.0, 3.0, 2.9, 9.0, 21.7, 31.2, 4.1};
  
    // In reverse order, apply "f" 
    // to each element of A and print
    for (i=10; i>=0; i--)
    {
        y = f (A[i]);
        if (y > 400.0)
        {
            printf ("%d TOO LARGE\n", i);
        }
        else
        {
            printf ("%d %f\n", i, y);
        }
    }
    return (0);
}
Output:
10 346.629846
9 TOO LARGE
8 TOO LARGE
7 TOO LARGE
6 123.647939
5 136.732051
4 TOO LARGE
3 TOO LARGE
2 TOO LARGE
1 TOO LARGE
0 TOO LARGE