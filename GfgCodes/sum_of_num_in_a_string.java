import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
    sc.nextLine();
    int sum=0;
		while(t>0){
		    String s=sc.nextLine();
      //System.out.println(1);
        int i=0;
		    while(i<s.length()){
          //System.out.println(2);
          //System.out.println((int)s.charAt(i));
          if((int)s.charAt(i)>=49 &&(int) s.charAt(i)<=57){
            sum=sum+Character.getNumericValue(s.charAt(i));
            //System.out.println(3);
          }
          i++;
        }
        t--;
        System.out.println(sum);
		}
	}
}
