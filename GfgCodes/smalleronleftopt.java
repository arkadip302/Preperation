import java.util.*;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            TreeSet<Integer> ts = new TreeSet<Integer>();
            int re = -1;
            for (int i = 0; i < n; i++) {
                re = -1;
                if (i == 0) {
                    re = -1;
                } else {
                    ts.add(a[i - 1]);
                    if (ts.lower(a[i]) == null) {
                        re = -1;
                    } else {
                        re = ts.lower(a[i]);
                    }
                }
                System.out.print(re + " ");
            }
            System.out.println();
            t--;
        }
    }
}