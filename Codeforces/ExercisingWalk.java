import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/**
 * ExercisingWalk
 */
public class ExercisingWalk {
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
    int t = fr.nextInt();
    while (t-- > 0) {
      int steps[] = new int[4];
      int stepCount = 0;
      for (int i = 0; i < 4; i++) {
        steps[i] = fr.nextInt();
        stepCount += steps[i];
      }
      int x = fr.nextInt();
      int y = fr.nextInt();
      int x1 = fr.nextInt();
      int y1 = fr.nextInt();
      int x2 = fr.nextInt();
      int y2 = fr.nextInt();
      System.out.println(check(-2, -2, 2, 2, 2, -2, -2, 2, 0, 0));
      // double distance1 = Math.sqrt(Math.pow((x1 - 0), 2) + Math.pow(y1 - 0, 2));
      // double distance2 = Math.sqrt(Math.pow((x2 - 0), 2) + Math.pow(y2 - 0, 2));
      // double initialDistance = Math.sqrt(Math.pow((x - 0), 2) + Math.pow(y - 0,
      // 2));
      boolean flag = true;
      while (check(x1, y1, x2, y2, x2, y1, x1, y2, x, y) && flag) {
        flag = false;
        if (x > x1 && steps[0] > 0) {
          x = x - 1;
          steps[0]--;
          stepCount--;
          flag = true;
        } else if (x < x2 && steps[1] > 0) {
          x = x + 1;
          steps[1]--;
          stepCount--;
          flag = true;
        } else if (y > y1 && steps[2] > 0) {
          y = y - 1;
          steps[2]--;
          stepCount--;
          flag = true;
        } else if (y < y2 && steps[3] > 0) {
          y = y + 1;
          steps[3]--;
          stepCount--;
          flag = true;
        }
      }
      if (stepCount == 0)
        System.out.println("Yes");
      else
        System.out.println("No");
    }
  }

  public static float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (float) Math.abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
  }

  public static boolean check(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x, int y) {

    float A = area(x1, y1, x2, y2, x3, y3) + area(x1, y1, x4, y4, x3, y3);
    float A1 = area(x, y, x1, y1, x2, y2);
    float A2 = area(x, y, x2, y2, x3, y3);
    float A3 = area(x, y, x3, y3, x4, y4);
    float A4 = area(x, y, x1, y1, x4, y4);
    return (A == A1 + A2 + A3 + A4);
  }

}