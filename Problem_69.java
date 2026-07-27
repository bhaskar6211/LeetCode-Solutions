//sqrt(x)

import java.util.*;
class problem_69 {
    public int mySqrt(int x) {
         if (x == 0) return 0;

        long r = x;  
        while (r * r > x) {
            r = (r + x / r) / 2;
        }
        return (int) r;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        problem_69 sol = new problem_69();

        System.out.print("Enter a number: ");
        int x = sc.nextInt();

        int result = sol.mySqrt(x);
        System.out.println("Square root (integer part): " + result);

        sc.close();
    }
}
