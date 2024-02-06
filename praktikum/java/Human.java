public class Human{
    private String name;
    private char gender;

    public Human(){
        this.name ="";
        this.gender ='-';
    }

    public Human(String name ,char gender){
        this.name = name;
        this.gender = gender;
    }

    public String getname(){
        return this.name;
    }

    public void setname(String name){
        this.name = name;
    }

    public char getgender(){
        return this.gender;
    }

    public void setgender(char gender){
        this.gender = gender;
    }

    public void eat(){
        System.out.println(this.name + " is eating!");
    }

    public void sleep(){
        System.out.println(this.name + " is sleeping!");
    }
}