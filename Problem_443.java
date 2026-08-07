//string compression problem
import java.util.*;

class problem_443 {
    public int compress(char[] chars) {
        int index = 0;
        int i = 0;

        while (i < chars.length) {
            char currentChar = chars[i];
            int count = 0;
            while (i < chars.length && chars[i] == currentChar) {
                i++;
                count++;
            }
            chars[index++] = currentChar;
            if (count > 1) {
                for (char c : String.valueOf(count).toCharArray()) {
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
    public static void main(String[] args) {
        problem_443 sol = new problem_443();

        char[] input1 = {'a','a','b','b','c','c','c'};
        char[] input2 = {'a'};
        char[] input3 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};

        int len1 = sol.compress(input1);
        System.out.println(Arrays.toString(Arrays.copyOf(input1, len1)) + " Length: " + len1);

        int len2 = sol.compress(input2);
        System.out.println(Arrays.toString(Arrays.copyOf(input2, len2)) + " Length: " + len2);

        int len3 = sol.compress(input3);
        System.out.println(Arrays.toString(Arrays.copyOf(input3, len3)) + " Length: " + len3);
    }
}
