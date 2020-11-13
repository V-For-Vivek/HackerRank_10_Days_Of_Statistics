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
        int tmp,Q1,Q2,Q3;
        int lst[] = new int[n];
        
        for(int i=0;i<n;i++)
        {lst[i] = scan.nextInt();}

        Arrays.sort(lst);
        
        if(lst.length%2!= 0)
        {
            Q2 = lst.length/2;
            tmp = (0+(Q2-1))/2;
            Q1 = (lst[tmp]+lst[tmp+1])/2; 
    
            System.out.println(Q1);
            System.out.println(lst[Q2]);
    
            tmp = ((Q2+1)+lst.length-1)/2;
            Q3 = (lst[tmp]+lst[tmp+1])/2;
            
            System.out.println(Q3);
        }
        else
        {
            Q2 = lst.length/2;
            Q2 = (lst[Q2]+lst[(Q2-1)])/2;
            
            tmp = (0+((lst.length-1)/2))/2;
            
            if(tmp%2 != 0)
            {
                Q1 = lst[tmp];
                System.out.println(Q1);
            }
            else
            {
                Q1 = (lst[tmp+1]+lst[tmp])/2;
                System.out.println(Q1);
                
            }
            
            System.out.println(Q2);
            tmp = (((lst.length)/2)+(lst.length-1))/2;
            
            if(tmp%2 != 0)
            {
                Q3 = lst[tmp];
                System.out.println(Q3);
            }
            else
            {
                Q3 = (lst[tmp]+lst[tmp+1])/2;
                System.out.println(Q3);    
            }
            
        }  
    }
}
