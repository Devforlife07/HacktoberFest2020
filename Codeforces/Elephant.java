import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/**
 * Elephant
 */
public class Elephant {
  static class FastReader {
    private BufferedReader br;
    private StringTokenizer st;

    public FastReader() {
      br = new BufferedReader(new InputStreamReader(System.in));
      st = null;
    }

    String next() {
      while (st == null || !st.hasMoreElements()) {
        try {
          st = new StringTokenizer(br.readLine());

        } catch (Exception e) {
          // TODO: handle exception
          e.printStackTrace();
        }
      }
      return st.nextToken();

    }

    int nextInt() {
      return Integer.parseInt(next());
    }

    String nextLine() {
      String str = "";
      try {
        str = br.readLine();
      } catch (Exception e) {
        // TODO: handle exception
        e.printStackTrace();
      }
      return str;
    }
  }

  public static void main(String[] args) {
    FastReader fr = new FastReader();
    int n = fr.nextInt();
    int count = 0;
    count += n / 5;
    n = n % 5;
    count += n / 4;
    n = n % 4;
    count += n / 3;
    n = n % 3;
    count += n / 2;
    n = n % 2;
    count += n / 1;
    System.out.println(count);

  }
}