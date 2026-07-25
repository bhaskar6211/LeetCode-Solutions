//Pow(X,n)
import java.util.*;

class Problem_50 {
    public double myPow(double x, int n) {
         long N = n; 
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }  
        double result = 1.0;
        double currentProduct = x;
        while (N > 0) {
            if ((N % 2) == 1) {
                result *= currentProduct;
            }
            currentProduct *= currentProduct; 
            N /= 2; 
        }   
        return result;
    }

    public static void main(String[] args) {
        Problem_50 sol = new Problem_50();

        System.out.println(sol.myPow(2.0, 10));
        System.out.println(sol.myPow(2.10000, 3));
        System.out.println(sol.myPow(2.0, -2));
    }
}
