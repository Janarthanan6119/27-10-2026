import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String parent = sc.nextLine();
        // sc.nextLine();
        char opt = sc.next().charAt(0);
        if(opt=='N'){
            System.out.println("TOTAL MEMBERS:1");
            System.out.println("COMISSION DETAILS:");
            System.out.println(parent+": 250 INR");
            return;
        }
        sc.nextLine();
        String child = sc.nextLine();
        String[] childs = child.split(",");
        int child_count = childs.length;
        int parent_cm = (5000*child_count*10)/100;
        int child_cm = (5000*5)/100;
        System.out.println("TOTAL MEMBERS:"+(child_count+1));
        System.out.println("Comission Details");
        System.out.println(parent+": "+parent_cm);
        for(String i:childs){
            System.out.println(i.trim()+": "+child_cm);
        }
    }
}