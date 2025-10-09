public class code3 {
    static int value1 = 100;
    int value2 = 200;

    static void DisplayStaticmsg(){
        System.out.println("It's a static function.");
    }
    void DisplayNonStaticmsg(){
        System.out.println("It's a non-static function.");
    }
    static void test(){
        System.out.println("Static value = " + value1); // Shows output ✅
        DisplayStaticmsg();                             // Shows output ✅

        // error: DisplayNonStaticmsg() has private access in class code2 ❌
        // System.out.println("Non-static value = " + value2);  
        // DisplayNonStaticmsg();   // error: value2 has private access in class code2 ❌
    }
    public static void main(String[] args) {
        test();
    }
}