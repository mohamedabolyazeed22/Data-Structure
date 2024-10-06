import java.util.LinkedList;
import java.util.Queue;

public class QueueExam {

  public static void main(String[] args) {

    Queue<String> queue = new LinkedList<String>();

    queue.offer("Mohamed");
    queue.offer("ZOZ");
    queue.offer("Mohsen");
    queue.offer("Ali");
    System.out.println(queue.size());
    System.out.println(queue.isEmpty());
    System.out.println(queue);
    System.out.println(queue.contains("Mohamed"));
    queue.poll();
    System.out.println(queue.peek());

  }
}