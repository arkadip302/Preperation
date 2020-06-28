import java.util.*;

class In_sort {
    void sort_array(int a[]) {
        for (int i = 1; i < a.length; ++i) {
            int k = a[i];
            int z = i - 1;
            while (z >= 0 && a[z] > k) {
                a[z + 1] = a[z];
                z = z - 1;
            }
            a[z + 1] = k;
        }
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        In_sort object=new In_sort();
        object.sort_array(arr);

        for (int i = 0; i < arr.length; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();


    }
}