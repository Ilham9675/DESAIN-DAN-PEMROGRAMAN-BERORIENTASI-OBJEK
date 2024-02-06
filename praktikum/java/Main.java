import java.util.Scanner;
import java.util.ArrayList;

public class Main{
    public static void main(String[] args){
        Human rain = new Human();
        rain.setname("kain");
        rain.setgender('L');

        Human techi = new Human("techi",'P');

        int i,n = 0;
        String name;
        char gender;

        ArrayList<Human> list = new ArrayList<>();

        Scanner sc = new Scanner(System.in);

        try{
            n = sc.nextInt();
        }
        catch(Exception e){
            System.out.println("The input is not an integer!");
        }

        for(i = 0;i < n;i++){
            name = sc.next();
            gender = sc.next().charAt(0);

            Human temp = new Human();
            temp.setname(name); temp.setgender(gender);
            list.add(temp);
        }
        System.out.println("\nAoutomatic output :");
        System.out.println("the first human's name is " + rain.getname());
        System.out.println(rain.getname() + "'s gende is " + rain.getgender());
        System.out.println("the second human's name is " + techi.getname());
        System.out.println(techi.getname() + "'s gende is " + techi.getgender());
        System.out.println();

        System.out.println("Iteration output : ");
        for(i = 0;i < list.size();i++){
            System.out.println(Integer.toString(i+1) + ". "
             + list.get(i).getname() + " | " + list.get(i).getgender());
        }

        sc.close();
    }
}
