package DS.stack;
import java.util.*;
public class ReverseIndividualWords {
    public static void reversed(Stack<Character> stack, String s){
        s += " ";
        int i = 0;
        String temp = "";
        for (i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch != ' ') {
                stack.push(ch);
            }
            else{
                while (!stack.isEmpty()) {
                    temp+=stack.pop();
                }
                temp+=" ";           
            }
        }
        System.out.print("Ans : " + temp);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Stack<Character> stack = new Stack<>();
        System.out.println("Enter a string : ");
        String s = sc.nextLine();
        reversed(stack,s);
    }
}
