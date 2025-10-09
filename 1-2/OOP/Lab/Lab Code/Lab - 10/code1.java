import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Font;

public class code1 {
    public static void main(String[] args) {
        JFrame fream = new JFrame();
        fream.setSize(1000, 700);

        JLabel label = new JLabel();
        label.setBounds(50, 50, 100, 30);
        label.setFont(new Font("Arial", Font.BOLD, 14));
    }
}