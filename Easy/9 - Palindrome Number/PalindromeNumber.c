public class Solution {
    public bool IsPalindrome(int x) {
        string tmpStr = x.ToString();
        int strHalfLen = tmpStr.Length / 2;

        for (int i = 0; i < strHalfLen; i++)
        {
            if (tmpStr[i] != tmpStr[tmpStr.Length - i - 1])
            {
                return false;
            }
        }

        return true;
    }
}
