
class Titik{
    private int x;
    private int y;

    Titik(){
        x = 0;
        y = 0;
    }

    Titik(int xp, int yp){
        x = xp;
        y = yp;
    }

    public void setx(int xp){
        x = xp;
    }

    public void sety(int yp){
        y = yp;
    }

    public int getx(){
        return x;
    }

    public int gety(){
        return y;
    }
}

class Main{
    public static void main(String[] args){
        Titik t1 = new Titik();
        Titik t2 = new Titik(11,9);

        t1.setx(18);
        t1.sety(28);

        System.out.println("t1 : nilai X : " + t1.getx());
        System.out.println("t1 : nilai Y : " + t1.gety());

        System.out.println("t2 : nilai X : " + t2.getx());
        System.out.println("t2 : nilai Y : " + t2.gety());
    }
}