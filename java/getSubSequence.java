import java.io.*;
import java.util.*;

public class getSubSequence{
    public static void main(String[] args) throws Exception{
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        ArrayList<String> result = getSubSequence(str);
        System.out.println(result);
    }

    public static ArrayList<String> getSubSequence(String str){
        if(str.length() == 0){
            ArrayList<String> bres = new ArrayList<>();
            bres.add("");
            return bres;
        }
        char start = str.charAt(0);
        String remaning = str.substring(1);
        ArrayList<String> recresult = getSubSequence(remaning);

        ArrayList<String> myresult = new ArrayList<>();
        for(String rstr : recresult){
            myresult.add(""+rstr);
        }
        for(String rstr : recresult){
            myresult.add(start+rstr);
        }

        return myresult;
    }
}