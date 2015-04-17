import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class ololo {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String temp[] = br.readLine().split(" ");
        int u = Integer.parseInt(temp[0]);
        List<Integer> l = new ArrayList<Integer>();
        for (int i=0;i<u;++i){
            String t[] = br.readLine().split(" ");
            int x = Integer.parseInt(t[0]);
            if (l.contains(x)){
                l.remove(new Integer(x));
            }
            else{
                l.add(x);
            }
        }
        //ISNT FAST ENOUGH FOR JAVA!! BACK TO HITTING MY HEAD IN C/C++
        System.out.println(l.get(0));
    }
}