public class Solution {
    public boolean isPalindrome(String s) {
        int length = s.length();
        if (length == 0 || length == 1) return true;
         
        int start  = 0;
        int end = length - 1;
         
        while (start < end) {
            // determine if the char is an alphanumeric
            while ((start < end) && (!isAlphaNum(s.charAt(start)))) start++;
            while ((start < end) && (!isAlphaNum(s.charAt(end)))) end--;
             
            // check if lower case
            Character lStart = s.charAt(start);
            Character lEnd = s.charAt(end);
            if (!Character.isLowerCase(lStart)) lStart = Character.toLowerCase(lStart);
            if (!Character.isLowerCase(lEnd)) lEnd = Character.toLowerCase(lEnd);
             
            if (lStart.equals(lEnd)) {
                start++;
                end--;
            } else {
                return false;
            }
        }
        return true;
    }
     
    private boolean isAlphaNum(char ch) {
        return (Character.isLetter(ch) || Character.isDigit(ch)) ? true : false;
    }
}