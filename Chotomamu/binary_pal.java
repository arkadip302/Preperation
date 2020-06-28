import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            long n = sc.nextLong();
            String s = Long.toBinaryString(n);
            int i = 0, j = s.length() - 1, flag = 0;
            while (i < j) {
                if (s.charAt(i) != s.charAt(j)) {
                    System.out.println(0);
                    flag = 1;
                    break;
                }
                i++;
                j--;
            }
            if (flag == 0) {
                System.out.println(1);
            }
            t--;
        }
    }
}