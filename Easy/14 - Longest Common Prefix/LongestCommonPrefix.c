public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        string smallestPrefix = "";

        if (strs.Length > 0){
            smallestPrefix = strs[0];
        }

        for(int i = 1; i < strs.Length; i++) {
            char[] chars = strs[i].ToCharArray();

            for(int j = 0; j < smallestPrefix.Length; j++) {
                if (j < chars.Length && !chars[j].Equals(smallestPrefix[j])) {
                    smallestPrefix = smallestPrefix.Substring(0, j);
                } else if (j == chars.Length) {
                    smallestPrefix = smallestPrefix.Substring(0, j);
                }
            }
        }

        return smallestPrefix;
    }
}
