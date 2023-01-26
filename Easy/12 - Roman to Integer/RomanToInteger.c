public class Solution {

    public int RomanToInt(string s) {
        int sum = 0;
        char[] chars = s.ToCharArray();
        int strLen = chars.Length;

        for(int i = 0; i < strLen; i++) {
            // Convert Roman Numerals to Integers
            int tempInt = RomanCharToInt(chars[i]);
            int nextInt = 0;
            if (i+1 < strLen) {
                nextInt = RomanCharToInt(chars[i+1]);
            }

            if (tempInt < nextInt && nextInt != 0) {
                // SUBTRACT CASE
                nextInt = nextInt - tempInt;
                sum += nextInt;
                i++;
            } else {
                // ADD CASE
                sum += tempInt;
            }
        }

        return sum;
    }

    public int RomanCharToInt(char romanNumeral) {
        switch (romanNumeral) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
}
