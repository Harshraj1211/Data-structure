package DS.stack;
import java.util.Scanner;
import java.util.Stack;
import java.util.*;
public class infixToPostfix {   

    public static int priority(char ch){
        if(ch == '^'){
            return 3;
        }
        else if(ch == '*' || ch == '/'){
            return 2;
        }
        else if(ch == '+' || ch == '-'){
            return 1;
        }
        return 0;
    }

    public static String conversion(String s){
        int i=0;
        int n = s.length();
        Stack<String> stack = new Stack<>();
        String ans = "";
        while (i<n){
            if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z' || s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                ans+=s.charAt(i);
            }
            else if(s.charAt(i) == '('){
                stack.push(String.valueOf(s.charAt(i)));
            }
            else if(s.charAt(i) == ')'){
                while (!stack.empty() && !stack.peek().equals("(")) {
                    ans += stack.peek();
                    stack.pop();
                }
                stack.pop();
            }
            else{
                while (!stack.empty() && priority(s.charAt(i)) <= priority(stack.peek().charAt(0))) {
                    ans += stack.pop();
                    // stack.pop();
                }
                stack.push(String.valueOf(s.charAt(i)));
            }
            i++;
        }
        while (!stack.empty()) {
            ans+=stack.peek();
            stack.pop();
        }

        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The Infix Exp : ");
        String s = sc.next();
        
        System.out.println("Infix : " + s + " to " +  "Postfix : " + conversion(s));
    }
}