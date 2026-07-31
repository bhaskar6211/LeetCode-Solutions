//Rotate list

class problem_61 {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null || k == 0) return head;

        int length = 1;
        ListNode tail = head;
        while (tail.next != null) {
            tail = tail.next;
            length++;
        }

        tail.next = head;
        k %= length;
        int steps = length - k;
        while (steps-- > 0) tail = tail.next;

        ListNode newHead = tail.next;
        tail.next = null;
        return newHead;
    }

    public static void main(String[] args) {
        ListNode head = new ListNode(1,
                          new ListNode(2,
                          new ListNode(3,
                          new ListNode(4,
                          new ListNode(5)))));

        problem_61 sol = new problem_61();
        ListNode rotated = sol.rotateRight(head, 2);

        while (rotated != null) {
            System.out.print(rotated.val + " ");
            rotated = rotated.next;
        }
    }
}
