import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Login extends JFrame implements ActionListener {
    Container c;
    JButton loginBtn, resetBtn;
    JLabel user, pass, msg;
    JTextField userText;
    JPasswordField passText;

    String[] usernames = {"PG", "cg", "abcd"};
    String[] passwords = {"123", "456", "101010"};

    public Login() {
        setTitle("Login Panel System");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        c = getContentPane();
        c.setLayout(null);


        user = new JLabel("Username:");
        user.setBounds(50, 30, 100, 30);
        c.add(user);

        userText = new JTextField();
        userText.setBounds(150, 30, 150, 30);
        c.add(userText);

        pass = new JLabel("Password:");
        pass.setBounds(50, 80, 100, 30);
        c.add(pass);

        passText = new JPasswordField();
        passText.setBounds(150, 80, 150, 30);
        c.add(passText);

        loginBtn = new JButton("Login");
        loginBtn.setBounds(80, 140, 100, 30);
        loginBtn.addActionListener(this);
        c.add(loginBtn);

        resetBtn = new JButton("Reset");
        resetBtn.setBounds(200, 140, 100, 30);
        resetBtn.addActionListener(this);
        c.add(resetBtn);

        msg = new JLabel("");
        msg.setBounds(50, 180, 300, 30);
        c.add(msg);

        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == loginBtn) {
            String user = userText.getText();
            String pass = new String(passText.getPassword());

            boolean success = false;
            for (int i = 0; i < usernames.length; i++) {
                if (user.equals(usernames[i]) && pass.equals(passwords[i])) {
                    success = true;
                    break;
                }
            }

            if (success) msg.setText("Login successful! Welcome " + user);
            else msg.setText("Invalid username or password!");
        }

        if (e.getSource() == resetBtn) {
            userText.setText("");
            passText.setText("");
            msg.setText("");
        }
    }
}

public class code_01 {
    public static void main(String[] args) {
        new Login();
    }
}
