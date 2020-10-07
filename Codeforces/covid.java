import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class covid {
  public static void main(String[] args) throws java.lang.Exception {
    // your code goes here
    Scanner sn = new Scanner(System.in);
    try {
      int t = sn.nextInt();
      for (int k = 1; k <= t; k++) {
        int n = sn.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
          arr[i] = sn.nextInt();
        }
        ArrayList<Integer> places = new ArrayList<>(n);
        for (int i = 0; i < n; i++) {
          if (arr[i] == 1)
            places.add(i + 1);
        }
        boolean flag = true;
        for (int i = 0; i < places.size() - 1; i++) {
          if (places.get(i + 1) - places.get(i) <= 3) {
            flag = false;
          }
        }

        if (flag)
          System.out.println("YES");
        else
          System.out.println("NO");

      }
    } catch (Exception e) {

      return;
    }

  }
}
