package DS.stack;
import java.util.*;
public class ReversePrefixofWord {
    public static String ReversePrefixWord(String str,String ch){
        String ans = "";
        Stack<Character> stack = new Stack<>();
        int i=0;
        int index=0;
        for(i=0 ; i<str.length() ; i++){
            if(str.charAt(i) == ch.charAt(0)){
                index = i;
                break;
            }
        }   

        for(i=0 ; i<=index ; i++){
            stack.push(str.charAt(i));
        }
        while (!stack.isEmpty()) {
            ans += stack.pop();
        }

        ans += str.substring(index+1);

        return ans;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sc.next();
        String result = ReversePrefixWord(str,"b");
        System.out.println("Answer : " + result);
    }
}
