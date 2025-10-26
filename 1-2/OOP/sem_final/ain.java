public class Ain {  // class name should start with uppercase by convention
    class Demo {
        int x, y;

        // Constructor
        Demo(int x, int y) {
            this.x = x;
            this.y = y;
        }

        // Method returning a Demo object
        public Demo get_dig() {
            return new Demo(1, 2);
        }

        public void print() {
            System.out.println("x = " + x + ", y = " + y);
        }
    }

    public static void main(String[] args) {
        Ain outer = new Ain();           // create outer class object
        Demo obj = outer.new Demo(5, 10);  // create inner class object
        Demo newObj = obj.get_dig();    // call get_dig()
        newObj.print();
    }
}
