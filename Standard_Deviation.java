import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int lst[] = new int[n];

        for(int i=0;i<n;i++)
        {lst[i] = scan.nextInt();}

        System.out.printf("%.1f",getStandardDeviation(lst));
    }

    private static double getStandardDeviation(int[] list)
    {
        int size = list.length;
        int x[] = list.clone();
        
        // Mean
        double mean = 0;
        
        for(int i=0;i<size;i++)
        {
            mean = mean + x[i];
        }
        
        mean = mean/size;
        
        // Distance from Mean
        double xi = 0;
        
        for(int i=0;i<size;i++)
        {
            xi = (xi+(Math.pow((x[i]-mean),2)));
        }
        
        // Standard Deviation Result
        double result = 0;
        result = Math.sqrt((xi/size));
        
        return result;
    }
}
