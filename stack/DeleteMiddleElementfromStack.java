package DS.stack;
import java.util.*;
public class DeleteMiddleElementfromStack {
    public static void DeleteMid(Stack stack){
        int mid = (stack.size()/2);
        int i=0;
        stack.remove(mid);
    }

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        Stack<Integer> stack = new Stack<>();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        stack.push(6);

        DeleteMid(stack);

        int size = stack.size();

        for (int i = 0 ; i < size ; i++) {
            System.out.println(stack.pop());
        }
    }
}
