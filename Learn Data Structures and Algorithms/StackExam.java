import java.util.Stack;

public class StackExam {

    public static void main(String[] args) {

        Stack<String> stack = new Stack<>();
        stack.push("Mineraft");
        stack.push("Skyrim");
        stack.push("DOOM");
        stack.push("Borderlands");
        stack.push("FFVII");
        String MyFavGame = stack.pop();
        System.out.println(stack.peek());
        System.out.println(stack);
        System.out.println(stack.search("FFVII"));

        System.out.println(MyFavGame);

    }
}
