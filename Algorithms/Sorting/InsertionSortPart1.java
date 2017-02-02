import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class InsertionSortPart1 
{
    public static void insertIntoSorted(int[] ar)
    {
        // Fill up this function
        int size = ar.length;
        int value = ar[size-1];
        boolean sorted = false;

        for(int i=size-2; i>=0 ; i--)
        {
            if(ar[i]>value)
            {
                ar[i+1] = ar[i];
            }
            else
            {
                ar[i+1] = value;
                sorted = true;
                printArray(ar);
                break;
            }
            printArray(ar);
        }

        if(!sorted)
        {
            ar[0] = value;
            printArray(ar);
        }
    }


/* Tail starts here */
     public static void main(String[] args)
     {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] ar = new int[s];
         for(int i=0;i<s;i++)
         {
            ar[i]=in.nextInt();
         }
         insertIntoSorted(ar);
    }


    private static void printArray(int[] ar)
    {
      for(int n: ar)
      {
         System.out.print(n+" ");
      }
      System.out.println("");
   }
}
