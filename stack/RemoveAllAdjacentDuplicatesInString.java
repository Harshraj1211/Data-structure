package DS.stack;
import java.util.*;
public class RemoveAllAdjacentDuplicatesInString {
    public static String remove(String str){
        Stack<Character> stack = new Stack<>();
        int i=0;
        for(i=0 ; i<str.length() ; i++){
            if(!stack.isEmpty() && stack.peek() == str.charAt(i)){
                stack.pop();
            }
            else{
                stack.push(str.charAt(i));
            }
        }
        String ans = "";
        for(i=0 ; i<stack.size() ; i++){
            ans += stack.get(i);
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sc.next();
        String result = remove(str);

        System.out.println("Answer : " + result);
    }
}
