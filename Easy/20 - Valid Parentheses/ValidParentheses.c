public class Solution {
    public bool IsValid(string s) {
        // Evaluate String and build an array

        // When there is a valid open and close you can remove them from the array

        // If s is empty and array is empty, return true

        Stack<char> input = new Stack<char>();

        for(int i = 0; i < s.Length; i++) {
            if (input.Count != 0) {
                if (s[i].Equals(')') && input.Peek().Equals('(')) {
                    input.Pop();
                } else if (s[i].Equals(']') && input.Peek().Equals('[')) {
                    input.Pop();
                } else if (s[i].Equals('}') && input.Peek().Equals('{')) {
                    input.Pop();                
                } else {
                    input.Push(s[i]);
                }
            } else {
                input.Push(s[i]);
            }
        }

        if (input.Count == 0) {
            return true;
        }
        return false;
    }
}
