class A{
    int x;
    public A(){
        x = 0;
    }
    public A(int x){
        this.x = x;
    }
    public int getX(){
        return (x + 10);
    }
}

class B extends A{
    int x = 20;

    public B(){
        super(); 
    }
    public B(int x){
        super(x);
    }
    public int getX(){
        return (x + 10);
    }
    public void displayXofA(){
        System.out.println("x of class A: " + super.x);
    }
    public int getXofA(){
        return super.getX();
    }
}

public class code4 {
    public static void main(String[] args){
        B b1 = new B();      
        b1.displayXofA();  
        System.out.println(b1.getXofA());

        B b2 = new B(5);         
        b2.displayXofA();      
        System.out.println(b2.getXofA());  
        System.out.println(b2.getX());           
    }
}



