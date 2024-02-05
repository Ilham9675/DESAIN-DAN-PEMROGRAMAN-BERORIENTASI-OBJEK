
class buku {
    private String judul;
    private String pengarang;

    buku(){

    }

    buku(String j,String p){
        this.judul = j;
        this.pengarang = p;
    }

    void setjudul(String j){
        this.judul = j;
    }

    void setpengarang(String p){
        this.pengarang = p;
    }

    String getjudul(){
        return this.judul;
    }
    
    String getpengarang(){
        return this.pengarang;
    }
}


class Main{
    public static void main(String[] args){
        buku b1;
        buku b2;

        b1 = new buku();
        b1.setjudul("J1ME");
        b1.setpengarang("orang_1");
        
        System.out.println(b1.getjudul());
        System.out.println(b1.getpengarang());

        b2 = new buku("J2ME","orang_2");

        System.out.println(b2.getjudul());
        System.out.println(b2.getpengarang());
    }
}
