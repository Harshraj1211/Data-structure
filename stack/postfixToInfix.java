package DS.stack;
import java.util.*;
public class postfixToInfix {
    public static boolean isOperand(char ch){
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '%'){
            return false;
        }
        return true;
    }

    public static String converse(String s){
        Stack<String> stack = new Stack<>();
        for(int i=0 ; i<s.length() ; i++) {
            char ch = s.charAt(i);
            if(isOperand(ch)){
                stack.push(String.valueOf(ch));
            }
            else{
                String op1 = stack.pop();
                String op2 = stack.pop();
                String temp = "(" + op2 + ch + op1 + ")";
                stack.push(temp);
            }
        }
        return stack.pop();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Postfix Expression : ");
        String s = sc.next();

        System.out.println(converse(s));
    }
}
