//Move Zeroes
import java.util.*;

class problem_283 {
    public void moveZeroes(int[] nums) {
        int index = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }
        while (index < nums.length) {
            nums[index++] = 0;
        }
    }
    public static void main(String[] args) {
        problem_283 sol = new problem_283();
        int[] input1 = {0,1,0,3,12};
        int[] input2 = {0};
        int[] input3 = {1,0,2,3,4,5};
        sol.moveZeroes(input1);
        System.out.println(Arrays.toString(input1));

        sol.moveZeroes(input2);
        System.out.println(Arrays.toString(input2));

        sol.moveZeroes(input3);
        System.out.println(Arrays.toString(input3));
    }
}