public class bigO {
  public static long calculatrTime(int n) {

    long start = System.currentTimeMillis();
    int k = 0;
    for (int i = 0; i < n; i++) {
      k++;
    }
    long end = System.currentTimeMillis();
    return (end - start);

  }

  public static void main(String[] args) {
    long time1 = calculatrTime(5000000);
    System.out.println("time1: " + time1);
  }
}