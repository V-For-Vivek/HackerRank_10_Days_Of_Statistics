import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n;
        double xiwi=0,addwi=0,result=0;
        
        n = scan.nextInt();
        int xi[] = new int[n];
        int wi[] = new int[n];
        
        for(int i=0;i<n;i++)
        {xi[i] = scan.nextInt();}
        for(int i=0;i<n;i++)
        {wi[i] = scan.nextInt();}
        for(int i=0;i<n;i++)
        {
            xiwi += xi[i]*wi[i]; 
            addwi += wi[i];
        }

        result = xiwi/addwi;
        System.out.printf("%.1f",result);
    }
}
