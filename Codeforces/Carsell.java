/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Carsell {

  public static void main(String[] args) throws java.lang.Exception {
    // your code goes here
    int M = 1000000007;
    Scanner sn = new Scanner(System.in);
    try {
      int t = sn.nextInt();
      while (t-- > 0) {
        int n = sn.nextInt();
        int a[] = new int[n];
        for (int i = 0; i < n; i++)
          a[i] = sn.nextInt();
        Arrays.sort(a);
        int profit = 0;
        int car = n - 1;
        int deprec = 0;
        for (int i = car; i >= 0; i--) {
          a[i] = a[i] - deprec++;
          if (a[i] > 0) {
            profit = (profit + a[i]) % M;
          }
          System.out.println(profit + " " + a[i]);
        }
        System.out.println(profit);
      }
    } catch (Exception e) {
      return;
    }

  }
}
