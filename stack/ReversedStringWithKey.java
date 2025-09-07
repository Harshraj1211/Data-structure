// Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.
// If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.
// Example 1:
// Input: s = "abcdefg", k = 2
// Output: "bacdfeg"
// Example 2:
// Input: s = "abcd", k = 2
// Output: "bacd"
package DS.stack;
import java.util.*;
public class ReversedStringWithKey {
    public static String rev(String s,int key){
        String ans="";
        Stack<Character> stack = new Stack<>();
        for(int i=0 ; i<key ; i++){
            stack.push(s.charAt(i));
        }
        while (!stack.isEmpty()) {
            ans+=stack.pop();
        }
        ans+=s.substring(key);
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string : ");
        String s=sc.next();
        System.out.println(rev(s,2));
    }
}
