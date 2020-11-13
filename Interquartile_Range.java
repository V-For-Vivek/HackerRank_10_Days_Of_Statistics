import java.util.Scanner;
import java.util.Arrays;

public class InterquartileRange 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int element[] = new int[size];
        int frequency[] = new int[size];
        for(int i = 0;i<size;i++)
        {element[i] = sc.nextInt();}
        
        int setSize = 0;
        for(int i = 0;i<size;i++)
        {
            frequency[i] = sc.nextInt();
            setSize += frequency[i];
        }
        
        int dataSet[] = new int[setSize];
        int index = 0;
        for(int i = 0;i < size ;i++)
        {
            for(int j = 0;j < frequency[i];j++)
            {
                dataSet[index] = element[i];
                index++;
            }
        }
        
        Arrays.sort(dataSet);
        double q1 = findMedian(dataSet , 0 , dataSet.length / 2 - 1);
        double q3 = findMedian(dataSet ,(dataSet.length+1)/2,dataSet.length-1);
        
        System.out.println(q3 - q1);
    }
    
    private static double findMedian(int array[],int start,int end)
    {
        if((end-start) % 2 == 0)
            return (array[(end+start)/2]);
        else
        {
            int value1 = array[(end+start)/2];
            int value2 = array[(end+start)/2+1];
            return (value1+value2)/2.0;
        }
    }
}
