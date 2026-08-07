//Reverse Words in a String
class problem_151 {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        
        StringBuilder sb = new StringBuilder();
        for (int i = words.length - 1; i >= 0; i--) {
            sb.append(words[i]);
            if (i > 0) sb.append(" ");
        }
        return sb.toString();
    }
    public static void main(String[] args) {
        problem_151 sol = new problem_151();
        
        String input1 = "  hello   world  ";
        String input2 = "a good   example";
        String input3 = "  Bob    Loves  Alice   ";
        
        System.out.println("Input: \"" + input1 + "\"");
        System.out.println("Output: \"" + sol.reverseWords(input1) + "\"");
        
        System.out.println("Input: \"" + input2 + "\"");
        System.out.println("Output: \"" + sol.reverseWords(input2) + "\"");
        
        System.out.println("Input: \"" + input3 + "\"");
        System.out.println("Output: \"" + sol.reverseWords(input3) + "\"");
    }
}
