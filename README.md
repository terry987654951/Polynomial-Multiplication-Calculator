# Polynomial-Multiplication-Calculator

Given two polynomials, one of degree m and one of degree n. This program computes the polynomial we obtain when we multiply them together.

For example, given you the degree-2 polynomial 5x2 + x1 - 3, and the degree-3 polynomial -x3 + x1 (note, any lower-order term that is omitted has an implicit coefficient of 0). The product of these polynomials is:

(5x2 + x1 - 3) * (-x3 + x1)

= -5x5 + 5x3 - x4 + x2 + 3x3 - 3x1

= -5x5 - x4 + 8x3 + x2 - 3x1 

We derive the first line by multiplying all pairs of terms together (recall that for any two terms axi, bxj, their product is abxi+j), and the second by summing together all equal-degree terms.

Input:
The first line will consist of two integers 0 ≤ m, n ≤ 1000. The next line will consist of m+1 space-separated integers, denoting the coefficients of the first polynomial: the first coefficient will be the coefficient for x0 = 1, the second for x1, and so on up to xm. All coefficients will have a value at least -1000 and at most 1000, and all coefficients will be specified (any "hidden" term will have a coefficient of 0). The final line will consist of n+1 space-separated integers, denoting the coefficients of the second polynomial, in a similar format to the first.

Output:
Thsi program outputs a single line consisting of m+n+1 space-separated integers, denoting the coefficients of the product polynomial, from lowest-degree (i.e. x0) to the highest (i.e. xm+n). It always outputs exactly this many integers, even if the highest-degree coefficients are 0.
