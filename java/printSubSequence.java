import java.io.*;
import java.util.*;

public class printSubSequence{
    public static void main(String[] args) throws Exception{
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        printSubSequence(str, "");
    }

    public static void printSubSequence(String ques, String ans){
        if(ques.length() == 0){
            System.out.println(ans);
            return;
        }
        char ch = ques.charAt(0);
        String roq = ques.substring(1);
        printSubSequence(roq, ans+ "");
        printSubSequence(roq, ans+ ch);
    }
}