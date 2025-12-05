class Solution {
    public int countCollisions(String directions) {
        Stack<Character> st = new Stack<>();
        int c = 0;
        for (char cur : directions.toCharArray()) {
            if (st.isEmpty()) {
                st.push(cur);
                continue;
            }
            while (!st.isEmpty() && st.peek() == 'R' && cur == 'L') {
                c += 2;
                st.pop();
                cur = 'S';
            }
            while (!st.isEmpty() && st.peek() == 'R' && cur == 'S') {
                c += 1;
                st.pop();
                cur = 'S';
            }
            while (!st.isEmpty() && st.peek() == 'S' && cur == 'L') {
                c += 1;
                cur = 'S';
            }
            st.push(cur);
        }

        return c;
    }
}
