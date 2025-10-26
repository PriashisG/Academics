interface FI{
    void dsiplayFI();
}

interface SI{
    void displaySI();
}

class Demo implements FI, SI{
    public void displayFI(){
        System.out.println("From FI");
    }
    public void displaySI(){
        System.out.println("From SI");
    }
}

public class code{
    public static void main(String[] args){
        Demo d = new Demo();
        d.displayFI();
        d.displaySI();
    }
}