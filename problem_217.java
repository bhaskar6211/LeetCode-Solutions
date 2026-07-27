//217. Contains Duplicate
import java.util.HashSet;

public class problem_217 {
    public static boolean containsDuplicate(int[] nums) {
        HashSet<Integer> seen = new HashSet<>();
        for (int num : nums) {
            if (!seen.add(num)) {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 9};
        System.out.println(containsDuplicate(nums));
    }
}
