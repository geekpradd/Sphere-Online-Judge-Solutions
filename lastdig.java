import java.util.*;
public class lastdig{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        for (int i=0;i<a;++i){
            double[] integers = new double[2];
            for(int b = 0; b < 2;b++)
            {
                integers[b] = s.nextDouble();
            }
            double result =  Math.pow(integers[0],integers[1]);
            System.out.println(result);
            String re = String.valueOf(result);
            System.out.println(re.charAt(re.length()-1));
        }
    }
}