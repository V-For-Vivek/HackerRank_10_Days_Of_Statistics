import java.util.Scanner;
import java.util.Arrays;

public class Mean_Madian_Mode
{
    static void mean(int[] arr)
    {
        double mean=0;

        for(int i:arr)
        {
            mean += i;
        }
        mean = mean/arr.length;

        System.out.println(mean);
    }

    static void median(int[] arr)
    {
        double median=0;
        int mid;

        Arrays.sort(arr);
        mid = (0+(arr.length-1))/2;
        median = arr[mid]+arr[mid+1];
        median = median/2;

        System.out.println(median);

    }

    static void mode(int[] arr)
    {
        double mode=0;
        int count = 0, max = 0;
        int current = arr[0];
        for(int i = 0;i <arr.length;i++) {
            if (arr[i] == current) {
                count++;
            } else {
                count = 1;
                current = arr[i];
            }
            if (count > max) {
                max = count;
                mode = arr[i];
            }
        }
        System.out.println(mode);
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        int n;
        n = sc.nextInt();

        int arr[] = new int[n];
        for(int i=0;i<n;i++)
        {arr[i] = sc.nextInt();}

        mean(arr);
        median(arr);
        mode(arr);
        sc.close();
    }
}
