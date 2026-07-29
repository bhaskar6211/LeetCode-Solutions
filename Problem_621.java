//Task Scheduler

import java.util.*;

class problem_621 {
    public int leastInterval(char[] tasks, int n) {
        int[] freq = new int[26];
        for (char c : tasks) {
            freq[c - 'A']++;
        }
        Arrays.sort(freq);
        int maxFreq = freq[25];
        int idleSlots = (maxFreq - 1) * n;

        for (int i = 24; i >= 0 && idleSlots > 0; i--) {
            idleSlots -= Math.min(maxFreq - 1, freq[i]);
        }

        idleSlots = Math.max(0, idleSlots);
        return tasks.length + idleSlots;
    }
    public static void main(String[] args) {
        char[] tasks = {'A','A','A','B','B','B'};
        int n = 2;
        problem_621 sol = new problem_621();
        System.out.println(sol.leastInterval(tasks, n));
    }
}
