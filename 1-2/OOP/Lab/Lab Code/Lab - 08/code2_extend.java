public class code2_extend {
    public static void main(String[] args) {
        code2 objCode2 = new code2();
 
        // objCode2.msg1();  // error: msg1() has private access in code2 ❌
        objCode2.msg2();     // Shows output ✅
    }
}


