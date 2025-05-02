#include <stdio.h>
#include <math.h>

#define Pi 3.14159265358979323846

#define red "\033[1;31m"
#define magenta "\033[1;35m"
#define cyan "\033[1;36m"
#define gray "\033[38;5;245m"

#define reset "\033[0m"

int Prime_Factorisation(int Num)
{
    int i = 2;

    while (i <= Num)
    {
        if (Num % i == 0)
        {
            printf("%d ", i);
            Num /= i;
            if (Num > 1)
            {
                printf("x ");
            }
            else
            {
                printf("x 1");
            }
        }
        else
        {
            i++;
        }
    }

    printf("\n");
    return 0;
}
int HCF_(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int LCM_(int a, int b)
{
    return (a * b) / HCF_(a, b);
}
void HCF(int n)
{
    int Numbers[n], hcf;

    printf("\nEnter the Numbers: \n");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &Numbers[i]);
    }

    hcf = Numbers[0];

    for (int i = 1; i < n; i++)
    {
        hcf = HCF_(hcf, Numbers[i]);
    }

    printf("\nThe HCF of the Numbers is %d\n", hcf);
}
void LCM(int n)
{
    int Numbers_[n], lcm;

    printf("\nEnter the Numbers: \n");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &Numbers_[i]);
    }

    lcm = Numbers_[0];

    for (int i = 1; i < n; i++)
    {
        lcm = LCM_(lcm, Numbers_[i]);
    }

    printf("\nThe LCM of the Numbers is %d\n", lcm);
}
void HCF_and_LCM(int n)
{
    int _Numbers[n], hcf, lcm;

    printf("\nEnter the Numbers: \n");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &_Numbers[i]);
    }

    hcf = _Numbers[0];
    lcm = _Numbers[0];

    for (int i = 1; i < n; i++)
    {
        hcf = HCF_(hcf, _Numbers[i]);
    }

    printf("\nThe HCF of the Numbers is %d\n", hcf);

    for (int i = 1; i < n; i++)
    {
        lcm = LCM_(lcm, _Numbers[i]);
    }

    printf("The LCM of the Numbers is %d\n", lcm);
}
void HCF_and_LCM_Prime_Factorisation(int n)
{
    int _Numbers[n], hcf, lcm;

    printf("Enter the Numbers: \n");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &_Numbers[i]);
    }
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        printf("Prime factorisation of Number %d is: ", j + 1);
        Prime_Factorisation(_Numbers[j]);
    }

    hcf = _Numbers[0];
    lcm = _Numbers[0];

    for (int i = 1; i < n; i++)
    {
        hcf = HCF_(hcf, _Numbers[i]);
    }

    printf("\nThe HCF of the Numbers is %d: ", hcf);
    Prime_Factorisation(hcf);

    for (int i = 1; i < n; i++)
    {
        lcm = LCM_(lcm, _Numbers[i]);
    }

    printf("The LCM of the Numbers is %d: ", lcm);
    Prime_Factorisation(lcm);
}
void verification()
{
    int a, b, p, q;
    printf("\nEnter the Numbers: \n");
    printf("\nEnter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);

    printf("\nEnter HCF: ");
    scanf("%d", &p);
    printf("Enter LCM: ");
    scanf("%d", &q);

    if ((a * b) == (p * q))
    {
        printf("\nYes! LCM x HCF = A x B\n");
    }
    else
    {
        printf("\nNo! LCM x HCF is not Equal to A x B\n");
    }
}
void a_b_LCM_HCF(int a, int b, int c)
{
    int LCM_HCF = (a * b) / c;
    printf("The HCF/LCM is %d \n", LCM_HCF);
}
void a_LCM_HCF(int a, int b, int c)
{
    int LCM_HCF = (a * b) / c;
    printf("The Second Number is %d \n", LCM_HCF);
}

/*************************************Chapter 1 Functions End**************************************/
void Chapter_1()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 1--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice, Num, n, select, a, b, c;

    do
    {

        printf(gray "\n                                1. Prime Factorisation (Number as an product of prime factors)\n");
        printf("                                2. Find HCF\n");
        printf("                                3. Find LCM\n");
        printf("                                4. Find HCF and LCM\n");
        printf("                                5. Find LCM and HCF by Prime Factorisation\n");
        printf("                                6. Verification of LCM and HCF as Product of Two numbers\n");
        printf("                                7. LCM and HCF as Product of two Numbers\n");
        printf("                                8. What are Rational and Irrational NUmbers\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-8): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the Number: ");
            scanf("%d", &Num);
            printf("\nThe Number as Multiple of its Prime Factors is: \n");
            printf("\n");
            Prime_Factorisation(Num);
            break;

        case 2:
        Enter_Again:
            printf("\nEnter the Number of Numbers: ");
            scanf("%d", &n);
            if (n < 2)
            {
                printf(red "\nThere Must be at Least two Numbers to find HCF.\n" reset);
                goto Enter_Again;
            }
            HCF(n);
            break;

        case 3:
        Enter_Again_:
            printf("\nEnter the Number of Numbers: ");
            scanf("%d", &n);
            if (n < 2)
            {
                printf(red "\nThere Must be at Least two Numbers to find LCM.\n" reset);
                goto Enter_Again_;
            }
            LCM(n);
            break;

        case 4:
        _Enter_Again_:
            printf("\nEnter the Number of Numbers: ");
            scanf("%d", &n);
            if (n < 2)
            {
                printf(red "\nThere Must be at Least two Numbers to find LCM or HCF.\n" reset);
                goto _Enter_Again_;
            }
            HCF_and_LCM(n);
            break;

        case 5:
        _Enter_Again__:
            printf("\nEnter the Number of Numbers: ");
            scanf("%d", &n);
            printf("\n");

            if (n < 2)
            {
                printf(red "There Must be at Least two Numbers to find LCM or HCF.\n" reset);
                goto _Enter_Again__;
            }
            HCF_and_LCM_Prime_Factorisation(n);
            break;

        case 6:
            verification();
            break;

        case 7:
            do
            {
                printf(gray "\n                                1. To enter a, b and LCM/HCF\n");
                printf("                                2. To enter a, HCF and LCM\n");
                printf("                                0. Return to Back Menu\n");
                printf("                                Choose between (0-2): " reset);
                scanf("%d", &select);

                switch (select)
                {
                case 1:
                    printf("\nEnter Number 1: ");
                    scanf("%d", &a);

                    printf("Enter Number 2: ");
                    scanf("%d", &b);

                    printf("Enter HCF/LCM: ");
                    scanf("%d", &c);

                    a_b_LCM_HCF(a, b, c);
                    break;

                case 2:
                    printf("\nEnter the Number: ");
                    scanf("%d", &a);

                    printf("Enter LCM: ");
                    scanf("%d", &b);

                    printf("Enter HCF: ");
                    scanf("%d", &c);

                    a_LCM_HCF(b, c, a);
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
                    break;
                }
            } while (select != 0);
            break;

        case 8:
            printf(magenta "\n                                *********************************************************************\n");
            printf("\n                                               --------------Remember---------------                 \n");
            printf("\n                                *********************************************************************\n");
            printf("\nRational Numbers and Irrational Numbers are both types of real numbers, and they differ in how they can be expressed as fractions or decimals.\n\n");

            printf("Rational Numbers\n");
            printf("- Definition: A rational number is any number that can be written as a fraction, where the numerator and denominator are integers, and the denominator is not zero.\n");
            printf("  - Examples: 1/2, -3, 0.75 (which is 3/4), 5 (which is 5/1).\n");
            printf("- Decimal form: Rational numbers either terminate (e.g., 0.5) or repeat in a pattern (e.g., 0.333...).\n\n");

            printf("In summary, rational numbers = fractions or integers with terminating or repeating decimal forms.\n\n");

            printf("Irrational Numbers\n");
            printf("- Definition: An irrational number cannot be written as a simple fraction of two integers.\n");
            printf("  - Examples: pi (pi), root2, and e (Euler's number).\n");
            printf("- Decimal form: Irrational numbers have a decimal expansion that goes on forever without repeating any pattern.\n");
            printf("  - For example, pi = 3.141592653589... goes on infinitely without repeating.\n\n");

            printf("In summary, irrational numbers = non-repeating, non-terminating decimals that cannot be expressed as fractions.\n\n");

            printf("Key Differences\n");
            printf("- Rational: Can be written as fractions, has terminating or repeating decimals.\n");
            printf("- Irrational: Cannot be written as fractions, has non-terminating, non-repeating decimals.\n\n");

            printf("Both types of numbers together make up the real numbers, which include all numbers you can place on a number line.\n" reset);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-8)\n" reset);
            break;
        }
    } while (choice != 0);
}
/*************************************Chapter 1 Bind up********************************************/

void printroot()
{
    printf(magenta "\nNOTE:- Please enter the decimal value for the square root.\n");

    printf("\nsqrt(2) = %f\n", sqrt(2));
    printf("sqrt(3) = %f\n", sqrt(3));
    printf("sqrt(5) = %f\n", sqrt(5));
    printf("sqrt(6) = %f\n", sqrt(6));
    printf("sqrt(7) = %f\n", sqrt(7));
    printf("sqrt(8) = %f\n", sqrt(8));
    printf("sqrt(10) = %f\n", sqrt(10));
    printf("sqrt(11) = %f\n", sqrt(11));
    printf("sqrt(12) = %f\n", sqrt(12));
    printf("sqrt(13) = %f\n", sqrt(13));
    printf("sqrt(14) = %f\n", sqrt(14));
    printf("sqrt(15) = %f\n" reset, sqrt(15));
}
float Nature_of_roots(float a, float b, float c)
{
    float d = sqrt((b * b) - (4 * a * c));
    return d;
}
void find_zeroes(float a, float b, float c)
{
    float d = Nature_of_roots(a, b, c);

    float D1 = (-b + d) / (2 * a);
    float D2 = (-b - d) / (2 * a);

    if (d > 0 || d == 0)
    {
        printf("\nThe roots of this equation are %.2f and %.2f.\n", D1, D2);
    }
    else
    {
        printf("\nEquation has no real roots\n");
    }
}
void sum_or_product_of_roots(float a, float b, float c)
{
    float d = Nature_of_roots(a, b, c);

    float D1 = (-b + d) / (2 * a);
    float D2 = (-b - d) / (2 * a);

    if (d >= 0)
    {
        printf("\nThe sum of roots of this equation is %.2f.\n", D1 + D2);
        printf("\nThe product of roots of this equation is %.2f.\n", D1 * D2);
    }
    else
    {
        printf("\nEquation has no real roots\n");
    }
}

/*************************************Chapter 2 Functions End**************************************/
void Chapter_2()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 2--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;
    float a, b, c, d, sum, product;

    do
    {

        printf(gray "\n                                1. Number of Zeroes (Graphs)\n");
        printf("                                2. Find the zeroes\n");
        printf("                                3. Find Nature of roots\n");
        printf("                                4. Relation between coefficient and roots\n");
        printf("                                5. Find sum and product of roots\n");
        printf("                                6. Find Quadratic equation by entering sum and product of roots\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-6): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf(magenta "The zeroes of a polynomial are the values of x where the polynomial becomes zero,\n");
            printf("meaning where its graph touches or crosses the x-axis.\n\n");

            printf("Here's how you can find the number of zeroes by looking at the graph:\n\n");

            printf("1. Check the x-axis crossings:\n");
            printf("   Look at where the graph intersects (crosses or touches) the x-axis.\n");
            printf("   Each point where the graph meets the x-axis represents a zero of the polynomial.\n\n");

            printf("2. Count these points:\n");
            printf("   The number of times the graph crosses or touches the x-axis gives the total number\n");
            printf("   of zeroes of the polynomial. If the graph touches the x-axis and turns around\n");
            printf("   without crossing it, that point still counts as a zero.\n\n");

            printf("3. Degree of the polynomial:\n");
            printf("   The highest possible number of zeroes is equal to the degree of the polynomial.\n\n");

            printf("   For example, a polynomial of degree 2 (like a quadratic) can have at most 2 zeroes.\n");
            printf("   A polynomial of degree 3 can have up to 3 zeroes, and so on.\n\n");

            printf("Example:\n");
            printf("If you see a graph of a polynomial that touches the x-axis in two places, then it has 2 zeroes.\n" reset);
            break;

        case 2:
            printroot();

            printf(magenta "\nCompare your equation with aX^2 + bX + c = 0 and then\n" reset);

            printf("\nEnter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);
            printf("Enter c: ");
            scanf("%f", &c);

            find_zeroes(a, b, c);
            break;

        case 3:
            printroot();

            printf(magenta "\nCompare your equation with aX^2 + bX + c = 0 and then\n" reset);

            printf("\nEnter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);
            printf("Enter c: ");
            scanf("%f", &c);

            d = Nature_of_roots(a, b, c);

            if (d > 0)
            {
                printf("\nEquation has two real and Distict roots\n");
            }
            else if (d == 0)
            {
                printf("\nEquation has two real and Equal roots\n");
            }
            else
            {
                printf("\nEquation has no real roots\n");
            }

            break;

        case 4:
            printf(magenta "\nThe relationship between the coefficients of a quadratic equation and its roots is governed by Vieta's Formulas.\n");
            printf("For a general quadratic equation: ax^2 + bx + c = 0\n");
            printf("Where a, b, and c are the coefficients, and p and q are the roots of the equation, the relationships are as follows:\n");

            printf("\n1. Sum of the roots:\n");
            printf("The sum of the roots p and q is equal to the negative of the coefficient of x divided by the leading coefficient a:\n");
            printf("p + q = -b/a\n");

            printf("\n2. Product of the roots:\n");
            printf("The product of the roots p and q is equal to the constant term c divided by the leading coefficient a:\n");
            printf("p * q = c/a\n");

            printf("\nExample:\n");
            printf("Consider the quadratic equation: 2x^2 - 6x + 4 = 0\n");
            printf("For this equation:\n");
            printf("a = 2, b = -6, c = 4\n");

            printf("The sum of the roots is:\n");
            printf("p + q = -b/a = -(-6)/2 = 3\n");

            printf("The product of the roots is:\n");
            printf("p * q = c/a = 4/2 = 2\n" reset);
            break;

        case 5:
            printroot();

            printf(magenta "\nCompare your equation with aX^2 + bX + c = 0 and then\n" reset);

            printf("\nEnter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);
            printf("Enter c: ");
            scanf("%f", &c);

            sum_or_product_of_roots(a, b, c);
            break;

        case 6:
            printf("\nEnter sum of roots: ");
            scanf("%f", &sum);
            printf("Enter product of roots: ");
            scanf("%f", &product);

            printf("\nThe Quadratic Equation is X^2 - %.0fX + %.0f\n", sum, product);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-6)\n" reset);
            break;
        }
    } while (choice != 0);
}
/*************************************Chapter 2 Bind up********************************************/

void inter_parl_coin()
{
    float a1, a2, b1, b2, c1, c2;

    printf("\nEnter a1: ");
    scanf("%f", &a1);
    printf("Enter a2: ");
    scanf("%f", &a2);

    printf("\nEnter b1: ");
    scanf("%f", &b1);
    printf("Enter b2: ");
    scanf("%f", &b2);

    printf("\nEnter c1: ");
    scanf("%f", &c1);
    printf("Enter c2: ");
    scanf("%f", &c2);

    if (a1 / a2 != b1 / b2)
    {
        printf("\nIntersecting Lines, Therefore this pair will have exactly one and unique solution.\n");
    }
    else if (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2)
    {
        printf("\nCoincident Lines, Therefore this pair will have infinitely many solutions.\n");
    }
    else
    {
        printf("\nParallel lines,Therefore this pair will have no solution.\n");
    }
}
void consi_inconsi()
{
    float a1, a2, b1, b2, c1, c2;

    printf("\nEnter a1: ");
    scanf("%f", &a1);
    printf("Enter a2: ");
    scanf("%f", &a2);

    printf("\nEnter b1: ");
    scanf("%f", &b1);
    printf("Enter b2: ");
    scanf("%f", &b2);

    printf("\nEnter c1: ");
    scanf("%f", &c1);
    printf("Enter c2: ");
    scanf("%f", &c2);

    if (a1 / a2 != b1 / b2 || (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2))
    {
        printf("\nPair of equation are CONSISTENT\n");
    }
    else
    {
        printf("\nPair of equation are INCONSISTENT\n");
    }
}
void solve()
{
    float a, b, c, p, q, r, determinant, y, x;
    printf("\nCompare your equation 1 with\n");
    printf("aX + bY = c\n");
    printf("\nEnter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    printf("\nCompare your equation 2 with\n");
    printf("pX + qY = r\n");
    printf("\nEnter p: ");
    scanf("%f", &p);
    printf("Enter q: ");
    scanf("%f", &q);
    printf("Enter r: ");
    scanf("%f", &r);

    determinant = a * q - b * p;

    if (determinant == 0)
    {
        printf("\nThe equations are either dependent or inconsistent.\n");
    }
    else
    {
        x = (c * q - b * r) / determinant;
        y = (a * r - c * p) / determinant;

        printf("\nThe value of X is %.2f\n", x);
        printf("The value of Y is %.2f\n", y);
    }
}

/*************************************Chapter 3 Functions End**************************************/
void Chapter_3()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 3--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;

    do
    {

        printf(gray "\n                                1. To find out wether the lines are Intersecting, Parallel or Coincident\n");
        printf("                                2. To find out equation are Consistent or Inconsistent\n");
        printf("                                3. How to plot a graph?\n");
        printf("                                4. Solve the linear equation\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inter_parl_coin();
            break;

        case 2:
            consi_inconsi();
            break;

        case 3:
            printf(magenta "\nSteps to plot the graph for a pair of linear equations:\n\n");

            printf("1. Identify the Equations:\n");
            printf("   Write down the pair of linear equations in the form:\n");
            printf("   ax + by = c\n");
            printf("   dx + ey = f\n\n");

            printf("2. Find Two Points for Each Line:\n");
            printf("   To plot a line, you need at least two points. For each equation:\n");
            printf("   - Set x = 0 to find the y-intercept (the point where the line crosses the y-axis).\n");
            printf("   - Set y = 0 to find the x-intercept (the point where the line crosses the x-axis).\n");
            printf("   These points will help you draw the line on the graph.\n\n");

            printf("3. Plot the Points:\n");
            printf("   Using graph paper or graphing software, plot the points for each line.\n");
            printf("   - Mark the intercept points or other calculated points on the graph.\n");
            printf("   - Label the points for clarity.\n\n");

            printf("4. Draw the Lines:\n");
            printf("   For each equation, use a ruler to connect the points with a straight line.\n");
            printf("   Extend the line across the graph, as linear equations form infinite straight lines.\n\n");

            printf("5. Find the Intersection Point (if any):\n");
            printf("   - If the lines intersect, mark the intersection point. This point represents the solution.\n");
            printf("   - If the lines do not intersect, there is no solution.\n\n");

            printf("6. Analyze the Graph:\n");
            printf("   - Intersecting Lines: The system has a unique solution (consistent and independent).\n");
            printf("   - Parallel Lines: No solution (inconsistent).\n");
            printf("   - Coincident Lines: Infinitely many solutions (consistent and dependent).\n" reset);
            break;

        case 4:
            solve();
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-4)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 3 Bind up********************************************/

/**********************************Chapter 4 Functions End in 2************************************/
void Chapter_4()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 4--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;
    float a, b, c, d;

    do
    {

        printf(gray "\n                                1. How to check equation is quadratic or not?\n");
        printf("                                2. Find roots of Quadratic Equation\n");
        printf("                                3. Find the Nature of the roots\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-3): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf(magenta "\nSteps to determine if an equation is quadratic:\n\n");

            printf("1. Identify the General Form of the Equation:\n");
            printf("   The equation should be in the form: ax^2 + bx + c = 0\n");
            printf("   - 'a', 'b', and 'c' are constants, and 'a' should not be zero.\n");

            printf("2. Check the Coefficient of x^2 (a):\n");
            printf("   - If 'a' is non-zero, the equation is quadratic. For example, ax^2 + bx + c = 0 where a != 0.\n");
            printf("   - If 'a' is zero (a = 0), the equation is not quadratic; it is linear (bx + c = 0).\n\n");

            printf("3. Conclusion:\n");
            printf("   - A quadratic equation must have a non-zero coefficient for x^2.\n");
            printf("   - If the coefficient of x^2 is zero, the equation is linear, not quadratic.\n" reset);
            break;

        case 2:
            printroot();

            printf(magenta "\nCompare your equation with aX^2 + bX + c = 0 and then\n" reset);

            printf("\nEnter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);
            printf("Enter c: ");
            scanf("%f", &c);

            find_zeroes(a, b, c);
            break;

        case 3:
            printroot();

            printf(magenta "\nCompare your equation with aX^2 + bX + c = 0 and then\n" reset);

            printf("\nEnter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);
            printf("Enter c: ");
            scanf("%f", &c);

            d = Nature_of_roots(a, b, c);

            if (d > 0)
            {
                printf("\nEquation has two real and Distict roots\n");
            }
            else if (d == 0)
            {
                printf("\nEquation has two real and Equal roots\n");
            }
            else
            {
                printf("\nEquation has no real roots\n");
            }
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 4 Bind up********************************************/

void print_n_terms()
{
    int n;
    float a, d;

again:
    printf("\nHow many terms you want: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf(red "\nPlease enter a positive number for terms\n" reset);
        goto again;
    }

    printf("\nEnter first term of series: ");
    scanf("%f", &a);
    printf("Enter Common difference of Series: ");
    scanf("%f", &d);
    float series = a;

    printf("\nThe series is : ");
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%.1f", series);
        }
        else
        {
            printf(", %.1f", series);
        }
        series += d;
    }
    printf("\n");
}
void find_a_d()
{
    int n, is_AP;
    float d;

again:
    printf("\nHow many terms you want to enter: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf(red "\nPlease enter atleast 2 positive numbers for first term and common difference\n" reset);
        goto again;
    }

    float series[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter term %d: ", i + 1);
        scanf("%f", &series[i]);
    }

    d = series[1] - series[0];

    for (int i = 0; i < n - 1; i++)
    {
        if (series[i + 1] - series[i] != d)
        {
            is_AP = 0;
            break;
        }
    }

    if (is_AP)
    {
        printf("\nThe first term is %.1f", series[0]);
        printf("\nThe Common difference is %.1f\n", series[1] - series[0]);
    }
    else
    {
        printf("\nEnterd Series is NOT an AP\n");
    }
}
void check_ap()
{
    int n, yes = 1;
    float d;

again:
    printf("\nHow many terms you want to enter: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf(red "\nPlease enter atleast 2 positive numbers for first term and common difference\n" reset);
        goto again;
    }

    float series[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter term %d: ", i + 1);
        scanf("%f", &series[i]);
    }

    d = series[1] - series[0];

    for (int i = 0; i < n - 1; i++)
    {
        if (series[i + 1] - series[i] != d)
        {
            yes = 0;
            break;
        }
    }

    if (yes)
    {
        printf("\nYes! The series is an AP\n");
        printf("\nThe first term is %.1f", series[0]);
        printf("\nThe Common difference is %.1f\n", series[1] - series[0]);
    }
    else
    {
        printf(red "\nNo! The series is not an AP\n" reset);
    }
}
void find_Nth_term()
{
    int n;
    float a, d, Tn;

    printf("\nEnter the first term of AP: ");
    scanf("%f", &a);
    printf("Enter the Common Difference: ");
    scanf("%f", &d);
    printf("Enter the Nth term you want: ");
    scanf("%d", &n);

    Tn = a + ((n - 1) * d);

    printf("\nThe %dth Term of this AP is %.2f\n", n, Tn);
}
void find_n()
{
    float a, d, Tn;
    int n;

    printf("\nEnter the first term of AP: ");
    scanf("%f", &a);
    printf("Enter the Common Difference: ");
    scanf("%f", &d);
    printf("Enter the Nth term: ");
    scanf("%f", &Tn);

    n = ((Tn - a) / d) + 1;

    printf("\nThe n is %d\n", n);
}
void sum_of_terms()
{
    float a, d, Sn;
    int n;

    printf("\nEnter the first term of AP: ");
    scanf("%f", &a);
    printf("Enter the Common Difference: ");
    scanf("%f", &d);
    printf("Enter the Nth term uptil you want the sum: ");
    scanf("%d", &n);

    Sn = ((n / 2) * (2 * a + ((n - 1) * d)));

    printf("\nThe sum of the AP is %.2f\n", Sn);
}

/*************************************Chapter 5 Functions End**************************************/
void Chapter_5()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 5--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;
    do
    {

        printf(gray "\n                                1. Print N terms of AP\n");
        printf("                                2. Find first term and Common difference\n");
        printf("                                3. Check series is AP or Not\n");
        printf("                                4. Find the Nth term of an AP\n");
        printf("                                5. Find the n\n");
        printf("                                6. Find sum of AP\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-6): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            print_n_terms();
            break;

        case 2:
            find_a_d();
            break;

        case 3:
            check_ap();
            break;

        case 4:
            find_Nth_term();
            break;

        case 5:
            find_n();
            break;

        case 6:
            sum_of_terms();
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-6)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 5 Bind up********************************************/

void similarity_triangle_angle()
{
    float A, B, C, P, Q, R;

    printf("\nYou must have two triangle mark them as ABC and PQR then enter\n");
    printf("\nFor Triangle ABC\n");
    printf("\nEnter angle A: ");
    scanf("%f", &A);
    printf("Enter angle B: ");
    scanf("%f", &B);
    printf("Enter angle C: ");
    scanf("%f", &C);

    printf("\nFor Triangle PQR\n");
    printf("\nEnter angle P: ");
    scanf("%f", &P);
    printf("Enter angle Q: ");
    scanf("%f", &Q);
    printf("Enter angle R: ");
    scanf("%f", &R);

    if (A / P == B / Q && B / Q == C / R)
    {
        printf("\nThe Triangles are simillar\n");
    }
    else
    {
        printf("\nThe Triangles are Not simillar\n");
    }
}
void similarity_triangle_side()
{
    float A, B, C, P, Q, R;
    printf("\nYou must have two triangle mark them as ABC and PQR\n");
    printf("\nFor Triangle ABC\n");
    printf("\nEnter AB: ");
    scanf("%f", &A);
    printf("Enter BC: ");
    scanf("%f", &B);
    printf("Enter AC: ");
    scanf("%f", &C);

    printf("\nFor Triangle PQR\n");
    printf("\nEnter PQ: ");
    scanf("%f", &P);
    printf("Enter QR: ");
    scanf("%f", &Q);
    printf("Enter PR: ");
    scanf("%f", &R);

    if (A / P == B / Q && B / Q == C / R)
    {
        printf("\nThe Triangles are simillar\n");
    }
    else
    {
        printf("\nThe Triangles are Not simillar\n");
    }
}
void similarity_triangle()
{
    int choice;
    do
    {

        printf("\n                                1. To Enter angles\n");
        printf("                                2. To Enter Sides\n");
        printf("                                Choose between (0-2): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            similarity_triangle_angle();
            break;

        case 2:
            similarity_triangle_side();
            break;

        case 0:
            break;

        default:
            printf("\n                                Invalid Option! Choose a valid option between (0-2)\n");
            break;
        }
    } while (choice != 0);
}
void similarity_quadrangle_angle()
{
    float A, B, C, D, P, Q, R, S;

    printf("\nYou must have two Quadrangle mark them as ABCD and PQRS then enter\n");
    printf("\nFor Quadangle ABCD\n");
    printf("\nEnter angle A: ");
    scanf("%f", &A);
    printf("Enter angle B: ");
    scanf("%f", &B);
    printf("Enter angle C: ");
    scanf("%f", &C);
    printf("Enter angle D: ");
    scanf("%f", &D);

    printf("\nFor Quadrangle PQRS\n");
    printf("\nEnter angle P: ");
    scanf("%f", &P);
    printf("Enter angle Q: ");
    scanf("%f", &Q);
    printf("Enter angle R: ");
    scanf("%f", &R);
    printf("Enter angle S: ");
    scanf("%f", &S);

    if (A / P == B / Q && B / Q == C / R && C / R == D / S)
    {
        printf("\nThe Quadrangles are simillar\n");
    }
    else
    {
        printf("\nThe Quadrangles are Not simillar\n");
    }
}
void similarity_quadrangle_side()
{
    float A, B, C, D, P, Q, R, S;

    printf("\nYou must have two Quadrangle mark them as ABCD and PQRS then enter\n");
    printf("\nFor Quadangle ABCD\n");
    printf("\nEnter AB: ");
    scanf("%f", &A);
    printf("Enter BC: ");
    scanf("%f", &B);
    printf("Enter CD: ");
    scanf("%f", &C);
    printf("Enter AD: ");
    scanf("%f", &D);

    printf("\nFor Quadrangle PQRS\n");
    printf("\nEnter PQ: ");
    scanf("%f", &P);
    printf("Enter QR: ");
    scanf("%f", &Q);
    printf("Enter RS: ");
    scanf("%f", &R);
    printf("Enter PS: ");
    scanf("%f", &S);

    if (A / P == B / Q && B / Q == C / R && C / R == D / S)
    {
        printf("\nThe Quadrangles are simillar\n");
    }
    else
    {
        printf("\nThe Quadrangles are Not simillar\n");
    }
}
void similarity_quadrangle()
{
    int choice;
    do
    {

        printf("\n                                1. To Enter angles\n");
        printf("                                2. To Enter Sides\n");
        printf("                                Choose between (0-2): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            similarity_quadrangle_angle();
            break;

        case 2:
            similarity_quadrangle_side();
            break;

        case 0:
            break;

        default:
            printf("\n                                Invalid Option! Choose a valid option between (0-2)\n");
            break;
        }
    } while (choice != 0);
}
void similarity()
{
    int choice;
    do
    {

        printf("\n                                1. To check similarity of Triangle\n");
        printf("                                2. To check similarity of Quadrangle\n");
        printf("                                Choose between (0-2): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            similarity_triangle();
            break;

        case 2:
            similarity_quadrangle();
            break;

        case 0:
            break;

        default:
            printf("\n                                Invalid Option! Choose a valid option between (0-2)\n");
            break;
        }
    } while (choice != 0);
}
void thales()
{
    float side1, side2, side3, side4, R;

    printf("\nEnter the Adjacent known Sides: \n");
    printf("\nSide 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);

    printf("\nEnter the side of unknown Sides: \n");
    printf("\nSide 3: ");
    scanf("%f", &side3);

    if (side1 > side2)
    {
        R = side1 / side2;
    }
    else
    {
        R = side2 / side1;
    }

    side4 = side3 / R;

    printf("\nThe unknownside is %.2f\n", side4);
}

/*************************************Chapter 6 Functions End**************************************/
void Chapter_6()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 6--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;
    do
    {

        printf(gray "\n                                1. To check similarity of figures\n");
        printf("                                2. Find the unknown side by Thales Theorem\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-2): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            similarity();
            break;

        case 2:
            thales();
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 6 Bind up********************************************/

float distance(float x1, float y1, float x2, float y2)
{
    float X, Y;

    X = x2 - x1;
    Y = y2 - y1;

    float dist = sqrt(((X * X) + (Y * Y)));
    return dist;
}
float x1_(float y1, float x2, float y2, float D)
{
    float x1, _x1;

    if ((D * D) < ((y2 - y1) * (y2 - y1)))
    {
        printf("\nError: The given inputs result in a negative value under the square root.\n");
        return -1;
    }

    x1 = x2 + sqrt((D * D) - ((y2 - y1) * (y2 - y1)));
    _x1 = x2 - sqrt((D * D) - ((y2 - y1) * (y2 - y1)));

    printf("\nThe x1 can either be %.2f or %.2f\n", x1, _x1);
    return 0;
}
float x2_(float x1, float y1, float y2, float D)
{
    float x2, _x2;

    if ((D * D) < ((y2 - y1) * (y2 - y1)))
    {
        printf("\nError: The given inputs result in a negative value under the square root.\n");
        return -1;
    }

    x2 = x1 + sqrt((D * D) - ((y2 - y1) * (y2 - y1)));
    _x2 = x1 - sqrt((D * D) - ((y2 - y1) * (y2 - y1)));

    printf("\nThe x2 can either be %.2f or %.2f\n", x2, _x2);
    return 0;
}
float y1_(float x1, float x2, float y2, float D)
{
    float y1, _y1;

    if ((D * D) < ((x2 - x1) * (x2 - x1)))
    {
        printf("\nError: The given inputs result in a negative value under the square root.\n");
        return -1;
    }

    y1 = y2 + sqrt((D * D) - ((x2 - x1) * (x2 - x1)));
    _y1 = y2 - sqrt((D * D) - ((x2 - x1) * (x2 - x1)));

    printf("\nThe y1 can either be %.2f or %.2f\n", y1, _y1);
    return 0;
}
float y2_(float x1, float y1, float x2, float D)
{
    float y2, _y2;

    if ((D * D) < ((x2 - x1) * (x2 - x1)))
    {
        printf("\nError: The given inputs result in a negative value under the square root.\n");
        return -1;
    }

    y2 = y1 + sqrt((D * D) - ((x2 - x1) * (x2 - x1)));
    _y2 = y1 - sqrt((D * D) - ((x2 - x1) * (x2 - x1)));

    printf("\nThe y2 can either be %.2f or %.2f\n", y2, _y2);
    return 0;
}
float coordinates(float x1, float x2, float y1, float y2, float m1, float m2)
{
    float x1_, y1_;

    x1_ = ((m1 * x2) + (m2 * x1)) / (m1 + m2);
    y1_ = ((m1 * y2) + (m2 * y1)) / (m1 + m2);

    printf("\nThe coordinate is (%.1f, %.1f)\n", x1_, y1_);
}
float ratio(float x1, float x2, float y1, float y2, float x3, float y3)
{
    float m1, m2;

    m1 = x3 - x1;
    m2 = x2 - x3;

    printf("The Ratio is %.1f : %.1f", m1, m2);
}

/*************************************Chapter 7 Functions End**************************************/
void Chapter_7()
{

    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 7--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice, opt;
    do
    {
        float x1, y1, x2, y2, x3, y3, D1, D2;

        printf(gray "\n                                1. To find distance between the pair of points\n");
        printf("                                2. To check three points are collinear or not\n");
        printf("                                3. To get the unknown point if the distance is given\n");
        printf("                                4. To find coordinates if line joining two points is divided into some ratio\n");
        printf("                                5. To find ratio\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-5): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printroot();

            printf("\nEnter X1: ");
            scanf("%f", &x1);
            printf("Enter Y1: ");
            scanf("%f", &y1);
            printf("\nEnter X2: ");
            scanf("%f", &x2);
            printf("Enter Y2: ");
            scanf("%f", &y2);

            printf("\nThe distance between these two points is %.2f\n", distance(x1, y1, x2, y2));
            break;

        case 2:
            printroot();

            printf("\nEnter X1: ");
            scanf("%f", &x1);
            printf("Enter Y1: ");
            scanf("%f", &y1);
            printf("\nEnter X2: ");
            scanf("%f", &x2);
            printf("Enter Y2: ");
            scanf("%f", &y2);
            printf("\nEnter X3: ");
            scanf("%f", &x3);
            printf("Enter Y3: ");
            scanf("%f", &y3);

            D1 = distance(x1, y1, x2, y2);
            D2 = distance(x2, y2, x3, y3);

            if (D1 == D2)
            {
                printf("\nThe points are Collinear\n");
            }
            else
            {
                printf("\nThe points are Not Collinear\n");
            }
            break;

        case 3:
            printroot();
            do
            {
                printf(gray "\n                                1. if x1 is missing\n");
                printf("                                2. if y1 is missing\n");
                printf("                                3. if x2 is missing\n");
                printf("                                4. if y2 is missing\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-4): ");

                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter y1: ");
                    scanf("%f", &y1);
                    printf("\nEnter x2: ");
                    scanf("%f", &x2);
                    printf("Enter y2: ");
                    scanf("%f", &y2);
                    printf("\nEnter Distance: ");
                    scanf("%f", &D1);

                    x1_(y1, x2, y2, D1);
                    break;

                case 2:
                    printf("\nEnter x1: ");
                    scanf("%f", &x1);
                    printf("\nEnter x2: ");
                    scanf("%f", &x2);
                    printf("Enter y2: ");
                    scanf("%f", &y2);
                    printf("\nEnter Distance: ");
                    scanf("%f", &D1);

                    y1_(x1, x2, y2, D1);
                    break;

                case 3:
                    printf("\nEnter x1: ");
                    scanf("%f", &x1);
                    printf("Enter y1: ");
                    scanf("%f", &y1);
                    printf("\nEnter y2: ");
                    scanf("%f", &y2);
                    printf("\nEnter Distance: ");
                    scanf("%f", &D1);

                    x2_(x1, y1, y2, D1);
                    break;

                case 4:
                    printf("\nEnter x1: ");
                    scanf("%f", &x1);
                    printf("Enter y1: ");
                    scanf("%f", &y1);
                    printf("\nEnter x2: ");
                    scanf("%f", &x2);
                    printf("\nEnter Distance: ");
                    scanf("%f", &D1);

                    y2_(x1, y1, x2, D1);
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-4)\n" reset);
                    break;
                }
            } while (opt != 0);
            break;

        case 4:
            printroot();

            printf("\nEnter X1: ");
            scanf("%f", &x1);
            printf("Enter Y1: ");
            scanf("%f", &y1);
            printf("\nEnter X2: ");
            scanf("%f", &x2);
            printf("Enter Y2: ");
            scanf("%f", &y2);
            printf("\nNow Enter the Ratio\n");
            printf("\nEnter m1: ");
            scanf("%f", &D1);
            printf("Enter m2: ");
            scanf("%f", &D2);

            coordinates(x1, x2, y1, y2, D1, D2);
            break;

        case 5:
            printroot();

            printf("\nEnter X1: ");
            scanf("%f", &x1);
            printf("Enter Y1: ");
            scanf("%f", &y1);
            printf("\nEnter X2: ");
            scanf("%f", &x2);
            printf("Enter Y2: ");
            scanf("%f", &y2);
            printf("\nNow enter coordinate of line which is dividing\n");
            printf("\nEnter X: ");
            scanf("%f", &x3);
            printf("Enter Y: ");
            scanf("%f", &y3);

            ratio(x1, x2, y1, y2, x3, y3);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-5)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 7 Bind up********************************************/

float find_hypo(float p, float b)
{
    float h;
    return h = sqrt((p * p) + (b * b));
}
float find_perp_base(float h, float s)
{
    float s_;
    return s_ = sqrt((h * h) - (s * s));
}
void print_T_ratios(float p, float b, float h)
{
    printf("\nsin()   =  %.1f / %.1f\n", p, h);
    printf("cos()   =  %.1f / %.1f\n", b, h);
    printf("tan()   =  %.1f / %.1f\n", p, b);
    printf("cosec() =  %.1f / %.1f\n", h, p);
    printf("sec()   =  %.1f / %.1f\n", h, b);
    printf("cot()   =  %.1f / %.1f\n", b, p);
}
void print_table()
{
    printf(magenta "                                            _______ ________ ________ ________ ________\n");
    printf("                                 (Angles)  |   0   |  30    |   45   |   60   |   90   |\n");
    printf("                                            _______ ________ ________ ________ ________\n");
    printf("\n                                   sin()   |   0   |   1/2  |  1/r2  |  r3/2  |    1   |\n");
    printf("\n                                   cos()   |   1   |  r3/2  |  1/r2  |   1/2  |    0   |\n");
    printf("\n                                   tan()   |   0   |  1/r3  |    1   |   r3   |  undef |\n");
    printf("\n                                   cot()   | undef |   r3   |    1   |  1/r3  |    0   |\n");
    printf("\n                                   sec()   |   1   |  2/r3  |   r2   |    2   |  undef |\n");
    printf("\n                                  cosec()  | undef |    2   |   r2   |  2/r3  |    1   |\n");
    printf("                                            _______ ________ ________ ________ ________\n");
    printf("\n                                NOTE:- Please Consider r as Root Under.\n" reset);
}
void identities()
{
    printf(magenta "\n                                Trigonometric Identities for Class 10:\n\n");

    printf("                                1. Reciprocal Identities:\n");
    printf("                                   - sin(theta) = 1 / csc(theta)\n");
    printf("                                   - cos(theta) = 1 / sec(theta)\n");
    printf("                                   - tan(theta) = 1 / cot(theta)\n");
    printf("                                   - csc(theta) = 1 / sin(theta)\n");
    printf("                                   - sec(theta) = 1 / cos(theta)\n");
    printf("                                   - cot(theta) = 1 / tan(theta)\n\n");

    printf("                                2. Pythagorean Identities:\n");
    printf("                                   - sin^2(theta) + cos^2(theta) = 1\n");
    printf("                                   - 1 + tan^2(theta) = sec^2(theta)\n");
    printf("                                   - 1 + cot^2(theta) = csc^2(theta)\n\n");

    printf("                                3. Angle Sum and Difference Identities:\n");
    printf("                                   - sin(A + B) = sin(A)cos(B) + cos(A)sin(B)\n");
    printf("                                   - cos(A + B) = cos(A)cos(B) - sin(A)sin(B)\n");
    printf("                                   - tan(A + B) = (tan(A) + tan(B)) / (1 - tan(A)tan(B))\n");
    printf("                                   - sin(A - B) = sin(A)cos(B) - cos(A)sin(B)\n");
    printf("                                   - cos(A - B) = cos(A)cos(B) + sin(A)sin(B)\n");
    printf("                                   - tan(A - B) = (tan(A) - tan(B)) / (1 + tan(A)tan(B))\n\n");

    printf("                                4. Double Angle Identities:\n");
    printf("                                   - sin(2A) = 2sin(A)cos(A)\n");
    printf("                                   - cos(2A) = cos^2(A) - sin^2(A)\n");
    printf("                                   - tan(2A) = (2tan(A)) / (1 - tan^2(A))\n\n");

    printf("                                5. Half Angle Identities:\n");
    printf("                                   - sin(A / 2) = (+ or -)sqrt((1 - cos(A)) / 2)\n");
    printf("                                   - cos(A / 2) = (+ or -)sqrt((1 + cos(A)) / 2)\n");
    printf("                                   - tan(A / 2) = (+ or -)sqrt((1 - cos(A)) / (1 + cos(A)))\n" reset);
}

/*************************************Chapter 8 Functions End**************************************/
void Chapter_8()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 8--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice, opt;
    double angle;

    do
    {
        float p, b, h;

        printf(gray "\n                                1. To find the unknown side\n");
        printf("                                2. To find all T-Ratios\n");
        printf("                                3. To Print Table of some standard value of T-ratios\n");
        printf("                                4. To get value of a specific T-Ratio at some Specific Angle\n");
        printf("                                5. To Print some Important Trigo Identities\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-5): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                printf(gray "\n                                1. To find Hypotaneous\n");
                printf("                                2. To find Perpendicular\n");
                printf("                                3. To find Base\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-3): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter Perpendicular: ");
                    scanf("%f", &p);
                    printf("Enter Base: ");
                    scanf("%f", &b);

                    printf("\nThe Hypotaneous is %.2f\n", find_hypo(p, b));
                    break;

                case 2:
                try_again:
                    printf("\nEnter Hypotaneous: ");
                    scanf("%f", &p);
                    printf("Enter Base: ");
                    scanf("%f", &b);

                    if (p > b)
                    {
                        printf("\nThe Perpendicular is %.2f\n", find_perp_base(p, b));
                    }
                    else
                    {
                        printf(red "\nHypotaneous cant be smaller then any of its Adjacent side, Try Again\n" reset);
                        goto try_again;
                    }
                    break;

                case 3:
                try_again_:
                    printf("\nEnter Hypotaneous: ");
                    scanf("%f", &p);
                    printf("Enter Perpendicular: ");
                    scanf("%f", &b);

                    if (p > b)
                    {
                        printf("\nThe Base is %.2f\n", find_perp_base(p, b));
                    }
                    else
                    {
                        printf(red "\nHypotaneous cant be smaller then any of its Adjacent side, Try Again\n" reset);
                        goto try_again_;
                    }
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 2:
            printf(magenta "\n                                                         --For Triangle ABC--\n");
            printf("                   Carefully determine the location of the right angle, then proceed based on the available sides.\n" reset);

            do
            {
                printf(gray "\n                                1. If you have Hypotaneous and Perpendicular\n");
                printf("                                2. If you have Hypotaneous and Base\n");
                printf("                                3. If you have Perpendicular and Base\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-3): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                try_:
                    printf("\nEnter Hypotaneous: ");
                    scanf("%f", &h);
                    printf("Enter Perpendicular: ");
                    scanf("%f", &p);

                    if (h > p)
                    {
                        b = find_perp_base(h, p);
                        print_T_ratios(p, b, h);
                    }
                    else
                    {
                        printf(red "\nHypotaneous cant be smaller then any of its Adjacent side, Try Again\n" reset);
                        goto try_;
                    }
                    break;

                case 2:
                _try:
                    printf("\nEnter Hypotaneous: ");
                    scanf("%f", &h);
                    printf("Enter Base: ");
                    scanf("%f", &b);

                    if (h > b)
                    {
                        p = find_perp_base(h, b);
                        print_T_ratios(p, b, h);
                    }
                    else
                    {
                        printf(red "\nHypotaneous cant be smaller then any of its Adjacent side, Try Again\n" reset);
                        goto _try;
                    }
                    break;

                case 3:
                    printf("\nEnter Perpendicular: ");
                    scanf("%f", &p);
                    printf("Enter Base: ");
                    scanf("%f", &b);

                    h = find_hypo(p, b);
                    print_T_ratios(p, b, h);

                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 3:
            print_table();
            break;

        case 4:
            do
            {
                printf(gray "\n                                1. For sin()\n");
                printf("                                2. For cos()\n");
                printf("                                3. For tan()\n");
                printf("                                4. For cosec()\n");
                printf("                                5. For sec()\n");
                printf("                                6. For cot()\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-6): ");
                scanf("%d", &opt);

                if (opt > 0 && opt < 7)
                {
                    printf("\nEnter the angle in degrees: ");
                    scanf("%lf", &angle);
                }
                double radian = angle * (Pi / 180.0);

                switch (opt)
                {
                case 1:
                    printf("\nsin(%.1lf): %.2f\n", angle, sin(radian));
                    break;

                case 2:
                    printf("\ncos(%.1lf): %.2f\n", angle, cos(radian));
                    break;

                case 3:
                    printf("\ntan(%.1lf): %.2f\n", angle, tan(radian));
                    break;

                case 4:
                    printf("\ncosec(%.1lf): %.2f\n", angle, 1.0 / sin(radian));
                    break;

                case 5:
                    printf("\nsec(%.1lf): %.2f\n", angle, 1.0 / cos(radian));
                    break;

                case 6:
                    printf("\ncot(%.1lf): %.2f\n", angle, 1.0 / tan(radian));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-6)\n" reset);
                    break;
                }
            } while (opt != 0);
            break;

        case 5:
            identities();
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-5)\n" reset);
            break;
        }
    } while (choice != 0);
}
/*************************************Chapter 8 Bind up********************************************/

float get_height_base(float b, double angle)
{
    double radian = angle * (Pi / 180.0);
    float p = b * (float)tan(radian);

    return p;
}
float get_height_hypo(float h, double angle)
{
    double radian = angle * (Pi / 180.0);
    float p = h * (float)sin(radian);

    return p;
}
float get_base_height(float p, double angle)
{
    double radian = angle * (Pi / 180.0);
    float b = p / (float)tan(radian);

    return b;
}
float get_base_hypo(float h, double angle)
{
    double radian = angle * (Pi / 180.0);
    float b = h * (float)cos(radian);

    return b;
}
float get_hypo_base(float b, double angle)
{
    double radian = angle * (Pi / 180.0);
    float h = b / (float)cos(radian);
    return h;
}
float get_hypo_height(float p, double angle)
{
    double radian = angle * (Pi / 180.0);
    float h = p / (float)sin(radian);
    return h;
}

/*************************************Chapter 9 Functions End**************************************/
void Chapter_9()
{

    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 9--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice, opt;

    do
    {
        float p, b, h;
        double angle;

        printf(gray "\n                                1. To get Height\n");
        printf("                                2. To get Base\n");
        printf("                                3. To get Hypotaneous\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-3): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                printf(gray "\n                                What you have to enter\n");
                printf("\n                                1. Base\n");
                printf("                                2. Hypotaneous\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-2): ");
                scanf("%d", &opt);
                switch (opt)
                {
                case 1:
                    printf("\nEnter Base: ");
                    scanf("%f", &b);
                    printf("Enter Angle: ");
                    scanf("%lf", &angle);

                    printf("\nThe Height is %.2f\n", get_height_base(b, angle));
                    break;

                case 2:
                    printf("\nEnter Hypotaneous: ");
                    scanf("%f", &h);
                    printf("Enter Angle: ");
                    scanf("%lf", &angle);

                    printf("\nThe Height is %.2f\n", get_height_hypo(h, angle));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
                    break;
                }
            } while (opt != 0);
            break;

        case 2:
            do
            {
                printf(gray "\n                                What you have to enter\n");
                printf("\n                                1. Height\n");
                printf("                                2. Hypotaneous\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-2): ");
                scanf("%d", &opt);
                switch (opt)
                {
                case 1:
                    printf("\nEnter Height: ");
                    scanf("%f", &p);
                    printf("Enter Angle: ");
                    scanf("%lf", &angle);

                    printf("\nThe Height is %.2f\n", get_base_height(p, angle));
                    break;

                case 2:
                    printf("\nEnter Hypotaneous: ");
                    scanf("%f", &h);
                    printf("Enter Angle: ");
                    scanf("%lf", &angle);

                    printf("\nThe Height is %.2f\n", get_base_hypo(h, angle));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 3:
            do
            {
                printf(gray "\n                                What you have to enter\n");
                printf("\n                                1. Height\n");
                printf("                                2. Base\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-2): ");
                scanf("%d", &opt);
                switch (opt)
                {
                case 1:
                    printf("\nEnter Height: ");
                    scanf("%f", &p);
                    printf("Enter Angle: ");
                    scanf("%lf", &angle);

                    printf("\nThe Height is %.2f\n", get_hypo_height(p, angle));
                    break;

                case 2:
                    printf("\nEnter Base: ");
                    scanf("%f", &b);
                    printf("Enter Angle: ");
                    scanf("%lf", &angle);

                    printf("\nThe Height is %.2f\n", get_hypo_base(b, angle));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
            break;
        }
    } while (choice != 0);
}
/*************************************Chapter 9 Bind up********************************************/

/**********************************Chapter 10 Functions End in 8***********************************/
void Chapter_10()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 10--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice, opt;
    float p, b;

    do
    {
        printf(gray "\n                                1. To get dimension by applying Pythagoras\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-1): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                printf(gray "\n                                1. To find Tangent\n");
                printf("                                2. To find Perpendicular\n");
                printf("                                3. To find Radius\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-3): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter Perpendicular: ");
                    scanf("%f", &p);
                    printf("Enter Radius: ");
                    scanf("%f", &b);

                    printf("\nThe Tangent is %.2f\n", find_hypo(p, b));
                    break;

                case 2:
                try_again:
                    printf("\nEnter Tangent: ");
                    scanf("%f", &p);
                    printf("Enter Radius: ");
                    scanf("%f", &b);

                    if (p > b)
                    {
                        printf("\nThe Perpendicular is %.2f\n", find_perp_base(p, b));
                    }
                    else
                    {
                        printf(red "\nTangent cant be smaller then any of its Adjacent side, Try Again\n" reset);
                        goto try_again;
                    }
                    break;

                case 3:
                try_again_:
                    printf("\nEnter Tangent: ");
                    scanf("%f", &p);
                    printf("Enter Perpendicular: ");
                    scanf("%f", &b);

                    if (p > b)
                    {
                        printf("\nThe Radius is %.2f\n", find_perp_base(p, b));
                    }
                    else
                    {
                        printf(red "\nHypotaneous cant be smaller then any of its Adjacent side, Try Again\n" reset);
                        goto try_again_;
                    }
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
                    break;
                }
            } while (opt != 0);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-1)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 10 Bind up*******************************************/

float area_sector(float r, float theta)
{
    float area = (theta / 360) * (Pi * r * r);

    return area;
}
float area_segment(float r, float theta)
{
    double radian = theta * (Pi / 180);
    float s = area_sector(r, theta);
    float t = (0.5) * (r * r) * (float)sin(radian);
    float area = s - t;

    return area;
}
float arc_length(float r, float theta)
{
    float length = (theta / 360) * (2 * Pi * r);

    return length;
}

/*************************************Chapter 11 Functions End**************************************/
void Chapter_11()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 11--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;

    do
    {
        float r, theta;

        printf(gray "\n                                1. To find Area of Sector\n");
        printf("                                2. To find Area of Quadrant\n");
        printf("                                3. To find Area of Segment\n");
        printf("                                4. To find Length of arc\n");
        printf("                                5. To find Minor and Major Sector\n");
        printf("                                6. To find Minor and Major Segment\n");
        printf("                                7. To find Major and Minor arc\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-1): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            printf("Enter Theta: ");
            scanf("%f", &theta);

            printf("\nThe Area of Sector is %.2f sq units\n", area_sector(r, theta));
            break;

        case 2:
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            theta = 90;

            printf("\nThe Area of Quadrant is %.2f sq units\n", area_sector(r, theta));
            break;

        case 3:
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            printf("Enter Theta: ");
            scanf("%f", &theta);

            printf("\nThe Area of Quadrant is %.2f sq units\n", area_segment(r, theta));
            break;

        case 4:
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            printf("Enter Theta: ");
            scanf("%f", &theta);

            printf("\nThe Length of arc is %.2f unit\n", arc_length(r, theta));
            break;

        case 5:
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            printf("Enter Theta: ");
            scanf("%f", &theta);

            printf("\nThe Area of Minor Sector is %.2f sq units\n", area_sector(r, theta));
            printf("The Area of Major Sector is %.2f sq units\n", (Pi * r * r) - area_sector(r, theta));
            break;

        case 6:
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            printf("Enter Theta: ");
            scanf("%f", &theta);

            printf("\nThe Area of Minor Quadrant is %.2f sq units\n", area_segment(r, theta));
            printf("\nThe Area of Minor Quadrant is %.2f sq units\n", (Pi * r * r) - area_segment(r, theta));
            break;

        case 7:
            printf("\nEnter the radius: ");
            scanf("%f", &r);
            printf("Enter Theta: ");
            scanf("%f", &theta);

            printf("\nThe Length of Minor arc is %.2f unit\n", arc_length(r, theta));
            printf("\nThe Length of Major arc is %.2f unit\n", (2 * Pi * r) - arc_length(r, theta));
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-7)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 11 Bind up********************************************/

void Chapter_12()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 12--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice, opt;

    do
    {
        float a, l, b, h;

        printf(gray "\n                                1. for Cube\n");
        printf("                                2. for Cuboid\n");
        printf("                                3. for Sphere\n");
        printf("                                4. for Hemisphere\n");
        printf("                                5. for Cylinder\n");
        printf("                                6. for Cone\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-1): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                printf(gray "\n                                1. To find Volume\n");
                printf("                                2. To find CSA\n");
                printf("                                3. To find TSA\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-3): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter side: ");
                    scanf("%f", &a);

                    printf("\nThe Volume of Cube is %.2f cubic units\n", (a * a * a));
                    break;

                case 2:
                    printf("\nEnter side: ");
                    scanf("%f", &a);

                    printf("\nThe CSA of Cube is %.2f sq units\n", (4 * (a * a)));
                    break;

                case 3:
                    printf("\nEnter side: ");
                    scanf("%f", &a);

                    printf("\nThe TSA of Cube is %.2f sq units\n", (6 * (a * a)));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 2:
            do
            {
                printf(gray "\n                                1. To find Volume\n");
                printf("                                2. To find CSA\n");
                printf("                                3. To find TSA\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-3): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter Length: ");
                    scanf("%f", &l);
                    printf("Enter Breadth: ");
                    scanf("%f", &b);
                    printf("Enter Height: ");
                    scanf("%f", &h);

                    printf("\nThe Volume of Cuboid is %.2f cubic units\n", (l * b * h));
                    break;

                case 2:
                    printf("\nEnter Length: ");
                    scanf("%f", &l);
                    printf("Enter Breadth: ");
                    scanf("%f", &b);
                    printf("Enter Height: ");
                    scanf("%f", &h);

                    printf("\nThe CSA of Cuboid is %.2f sq units\n", (2 * h) * (l + b));
                    break;

                case 3:
                    printf("\nEnter Length: ");
                    scanf("%f", &l);
                    printf("Enter Breadth: ");
                    scanf("%f", &b);
                    printf("Enter Height: ");
                    scanf("%f", &h);

                    printf("\nThe TSA of Cuboid is %.2f sq units\n", (2 * ((l * b) + (b * h) + (l * h))));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 3:
            do
            {
                printf("\n                                1. To find Volume\n");
                printf("                                2. To find CSA/TSA\n");
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-2): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);

                    printf("\nThe Volume of Sphere is %.2f cubic units\n", (4.0 / 3) * (Pi) * (a * a * a));
                    break;

                case 2:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);

                    printf("\nThe CSA/TSA of Sphere is %.2f sq units\n", (4) * (Pi) * (a * a));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 4:
            do
            {
                printf(gray "\n                                1. To find Volume\n");
                printf("                                2. To find CSA\n");
                printf("                                3. To find TSA\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-3): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);

                    printf("\nThe Volume of Hemisphere is %.2f cubic units\n", (2.0 / 3) * (Pi) * (a * a * a));
                    break;

                case 2:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);

                    printf("\nThe CSA of Hemisphere is %.2f sq units\n", (2) * (Pi) * (a * a));
                    break;

                case 3:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);

                    printf("\nThe TSA of Hemisphere is %.2f sq units\n", (3) * (Pi) * (a * a));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 5:
            do
            {
                printf(gray "\n                                1. To find Volume\n");
                printf("                                2. To find CSA\n");
                printf("                                3. To find TSA\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-3): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);
                    printf("Enter Height: ");
                    scanf("%f", &h);

                    printf("\nThe Volume of Cylinder is %.2f cubic units\n", ((Pi) * (a * a) * (h)));
                    break;

                case 2:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);
                    printf("Enter Height: ");
                    scanf("%f", &h);

                    printf("\nThe CSA of Cylinder is %.2f sq units\n", (2 * (Pi) * (a) * (h)));
                    break;

                case 3:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);
                    printf("Enter Height: ");
                    scanf("%f", &h);

                    printf("\nThe TSA of Cylinder is %.2f sq units\n", ((2 * (Pi) * (a)) * (h + a)));
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 6:
            do
            {
                printf(gray "\n                                1. To find Volume\n");
                printf("                                2. To find CSA\n");
                printf("                                3. To find TSA\n");
                printf("                                4. To find Unknown side\n" reset);
                printf(red "                                0. Return to Back Menu\n" reset);
                printf("                                Choose between (0-4): ");
                scanf("%d", &opt);

                switch (opt)
                {
                case 1:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);
                    printf("Enter Height: ");
                    scanf("%f", &h);

                    printf("\nThe Volume of Cone is %.2f cubic units\n", ((1.0 / 3) * (Pi) * (a * a) * (h)));
                    break;

                case 2:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);
                    printf("Enter Slant Height: ");
                    scanf("%f", &h);

                    printf("\nThe CSA of Cone is %.2f sq units\n", ((Pi) * (a) * (h)));
                    break;

                case 3:
                    printf("\nEnter Radius: ");
                    scanf("%f", &a);
                    printf("Enter Slant Height: ");
                    scanf("%f", &h);

                    printf("\nThe TSA of Cone is %.2f sq units\n", (((Pi) * (a)) * (h + a)));
                    break;

                case 4:
                    do
                    {
                        printf(gray "\n                                1. To find Slant Height\n");
                        printf("                                2. To find Height\n");
                        printf("                                3. To find Radius\n" reset);
                        printf(red "                                0. Return to Back Menu\n" reset);
                        printf("                                Choose between (0-3): ");
                        scanf("%d", &opt);

                        switch (opt)
                        {
                        case 1:
                            printf("\nEnter Height: ");
                            scanf("%f", &h);
                            printf("Enter Radius: ");
                            scanf("%f", &a);

                            printf("\nThe Slant Height is %.2f\n", find_hypo(h, a));
                            break;

                        case 2:
                        try_again:
                            printf("\nEnter Slant Height: ");
                            scanf("%f", &l);
                            printf("Enter Radius: ");
                            scanf("%f", &a);

                            if (l > a)
                            {
                                printf("\nThe Height is %.2f\n", find_perp_base(l, a));
                            }
                            else
                            {
                                printf(red "\nSlant Height cant be smaller then any of its Adjacent side, Try Again\n" reset);
                                goto try_again;
                            }
                            break;

                        case 3:
                        try_again_:
                            printf("\nEnter Slant Height: ");
                            scanf("%f", &l);
                            printf("Enter Height: ");
                            scanf("%f", &h);

                            if (l > h)
                            {
                                printf("\nThe Radius is %.2f\n", find_perp_base(l, h));
                            }
                            else
                            {
                                printf(red "\nSlant Height cant be smaller then any of its Adjacent side, Try Again\n" reset);
                                goto try_again_;
                            }
                            break;

                        case 0:
                            break;

                        default:
                            printf(red "\n                                Invalid Option! Choose a valid option between (0-3)\n" reset);
                            break;
                        }

                    } while (opt != 0);
                    break;

                case 0:
                    break;

                default:
                    printf(red "\n                                Invalid Option! Choose a valid option between (0-4)\n" reset);
                    break;
                }

            } while (opt != 0);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-6)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 12 Bind up********************************************/

void sum_of_n(int n)
{
    float Numbers[n], sum = 0;

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", &Numbers[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += Numbers[i];
    }

    printf("\nThe Sum is %.2f\n", sum);
}
void di(float a, int n)
{
    float Number[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter xi %d: ", i + 1);
        scanf("%f", &Number[i]);
    }

    printf("\nThe Values of all di's are: \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d. di = %.2f\n", i + 1, Number[i] - a);
    }
}
void ui(float a, int n)
{
    float Number[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter di %d: ", i + 1);
        scanf("%f", &Number[i]);
    }

    printf("\nThe Values of all ui's are: \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d. xi = %.2f\n", i + 1, Number[i] / a);
    }
}
void fidi(int n)
{
    float Number[n], Number_[n];

    printf("\nEnter all value of fi's:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter fi %d: ", i + 1);
        scanf("%f", &Number[i]);
    }

    printf("\nEnter all value of (di/ui)'s:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter di/ui %d: ", i + 1);
        scanf("%f", &Number_[i]);
    }

    printf("\nThe Values of all fi*(di/ui)'s are: \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d. fi*(di/ui) = %.2f \n", i + 1, Number[i] * Number_[i]);
    }
}

/*************************************Chapter 13 Functions End**************************************/
void Chapter_13()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 13--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;
    do
    {
        int n;
        float u, l, a, fixi, xi, n1, cf, f, h, median, f0, f1, f2, mode;

        printf(gray "\n                                1. To find Class Mark\n");
        printf("                                2. To find di (xi-a)\n");
        printf("                                3. To find ui (di/h)\n");
        printf("                                4. To find fi*ui or fi*di\n");
        printf("                                5. To get sum of n numbers\n");
        printf("                                6. To find Mean\n");
        printf("                                7. To find Median\n");
        printf("                                8. To find Mode\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-8): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the number of Class Mark you are going to find: ");
            scanf("%d", &n);

            if (n > 0)
            {
                for (int i = 0; i < n; i++)
                {
                    printf(magenta "\n------------%d------------" reset, i + 1);
                    printf("\nEnter Upper Class Limit: ");
                    scanf("%f", &u);
                    printf("Enter Lower Class Limit: ");
                    scanf("%f", &l);

                    printf("\nThe Class Mark is %.2f\n", (u + l) / 2.0);
                }
            }
            else
            {
                printf(red "\nInvalid Input! Enter a number greater than 0\n" reset);
            }
            break;

        case 2:
        again_:
            printf("\nEnter the Number of xi you are going to enter: ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf(red "\nInvalid Input! Enter a number greater than 0\n" reset);
                goto again_;
            }

            printf("\nEnter a: ");
            scanf("%f", &a);

            di(a, n);
            break;

        case 3:
        __again_:
            printf("\nEnter the Number of di you are going to enter: ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf(red "\nInvalid Input! Enter a number greater than 0\n" reset);
                goto __again_;
            }

            printf("\nEnter h: ");
            scanf("%f", &a);

            ui(a, n);
            break;

        case 4:
        _again_:
            printf("\nEnter the Number of fi and di/ui you are going to enter: ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf("\nInvalid Input! Enter a number greater than 0\n");
                goto _again_;
            }

            fidi(n);
            break;

        case 5:
        again:
            printf("\nEnter Number of Numbers you want to Enter: ");
            scanf("%d", &n);

            if (n > 1)
            {
                sum_of_n(n);
            }
            else
            {
                printf(red "\nYou must have at least two Numbers to find the sum\n" reset);
                goto again;
            }
            break;

        case 6:
            printf("\nEnter the Summation of fixi: ");
            scanf("%f", &fixi);
            printf("\nEnter the Summation of xi: ");
            scanf("%f", &xi);

            printf("The Mean is %.2f", fixi / xi);
            break;

        case 7:
            printf("\nEnter Lower Limit of median class (l): ");
            scanf("%f", &l);
            printf("Enter the Number of Observation (n): ");
            scanf("%f", &n1);
            printf("Enter Cumulative Frequency (cf): ");
            scanf("%f", &cf);
            printf("Enter Frequency (f): ");
            scanf("%f", &f);
            printf("Enter Class Size (h): ");
            scanf("%f", &h);

            median = (l + (((n1 / 2 - cf) / f) * h));

            printf("\nThe Median is %.2f\n", median);
            break;

        case 8:
            printf("\nEnter Lower Limit of median class (l): ");
            scanf("%f", &l);
            printf("Frequency of Modal Class (f1): ");
            scanf("%f", &f1);
            printf("Frequency before Modal Class (f0): ");
            scanf("%f", &f0);
            printf("Frequency after Modal Class (f2): ");
            scanf("%f", &f2);
            printf("Enter Class Size (h): ");
            scanf("%f", &h);

            mode = (l + ((f1 - f0) / ((2 * f1) - f0 - f2)) * h);

            printf("\nThe Mode is %.2f\n", mode);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-8)\n" reset);
            break;
        }

    } while (choice != 0);
}
/*************************************Chapter 13 Bind up********************************************/

void Chapter_14()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                               --------------Chapter 14--------------                 \n");
    printf("\n                                *********************************************************************\n" reset);

    int choice;
    do
    {
        float pfav, ptot;

        printf(gray "\n                                1. To Calculate Probability\n");
        printf("                                2. To calculate 'p()\n" reset);
        printf(red "                                0. Return to Back Menu\n" reset);
        printf("                                Choose between (0-2): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Number of favourable outcomes: ");
            scanf("%f", &pfav);
            printf("Enter Number of all Possible outcomes: ");
            scanf("%f", &ptot);

            printf("\nThe Probability of this Event is %.2f\n", pfav / ptot);
            break;

        case 2:
            printf("\nEnter the Probability of the Event: ");
            scanf("%f", &ptot);

            printf("\nThe Probability of Not this Event is %.2f\n", 1 - ptot);
            break;

        case 0:
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-2)\n" reset);
            break;
        }

    } while (choice != 0);
}
/**************************************************************************************************/

int main()
{
    printf(cyan "\n                                *********************************************************************\n");
    printf("\n                                          --------------Class 10th Calculator--------------          \n");
    printf("\n                                *********************************************************************\n" reset);
    printf(magenta "\n                                             ....Press enter to choose the chapter...." reset);
    getchar();

    int choice;

    do
    {
        printf(cyan "\n                                *********************************************************************\n");
        printf("\n                                           --------------Class 10th Chapters--------------             \n");
        printf("\n                                *********************************************************************\n" reset);

        printf(gray "\n                                1. Real Numbers\n");
        printf("                                2. Polynomials\n");
        printf("                                3. Pair of linear equations in two variables\n");
        printf("                                4. Quadratic Equations\n");
        printf("                                5. Arithmetic Progressions\n");
        printf("                                6. Triangles\n");
        printf("                                7. Coordinate Geometry\n");
        printf("                                8. Introduction to Trigonometry\n");
        printf("                                9. Some Applications of Trigonometry\n");
        printf("                                10. Circles\n");
        printf("                                11. Area Related to Circles\n");
        printf("                                12. Surface Areas and Volumes\n");
        printf("                                13. Statistics\n");
        printf("                                14. Probability\n" reset);
        printf(red "                                0. To Exit\n" reset);
        printf("                                Choose between (0-14): ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Chapter_1();
            break;

        case 2:
            Chapter_2();
            break;

        case 3:
            Chapter_3();
            break;

        case 4:
            Chapter_4();
            break;

        case 5:
            Chapter_5();
            break;

        case 6:
            Chapter_6();
            break;

        case 7:
            Chapter_7();
            break;

        case 8:
            Chapter_8();
            break;

        case 9:
            Chapter_9();
            break;

        case 10:
            Chapter_10();
            break;

        case 11:
            Chapter_11();
            break;

        case 12:
            Chapter_12();
            break;

        case 13:
            Chapter_13();
            break;

        case 14:
            Chapter_14();
            break;

        case 0:
            printf(magenta "\n                                Thank You!\n" reset);
            break;

        default:
            printf(red "\n                                Invalid Option! Choose a valid option between (0-14)\n" reset);
            break;
        }

    } while (choice != 0);

    return 0;
}