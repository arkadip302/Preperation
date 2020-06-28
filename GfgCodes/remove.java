import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s = sc.nextLine();
        while (t > 0) {
            s = sc.nextLine();
            String s1 = s.replaceAll("ac", "");
            s1 = s1.replaceAll("b", "");
            System.out.println(s1);
            t--;
        }
    }
}