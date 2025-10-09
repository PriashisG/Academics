import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import javax.swing.*;

class BusTicketSystem extends JFrame implements ActionListener {
    JButton[][] seats056 = new JButton[7][3]; 
    JButton confirm056 = new JButton("Confirm");
    JButton close056 = new JButton("Exit");
    JButton save056 = new JButton("Save");
    JButton clear056 = new JButton("Reset");

    final Color AVAILABLE_COLOR = Color.WHITE;
    final Color SELECTED_COLOR  = new Color(128, 239, 128); 
    final Color BOOKED_COLOR    = new Color(137, 137, 137); 

    void LoadFile056() {
        try {
            File file056 = new File("seatInfo.txt");
            Scanner reader056 = new Scanner(file056);
            while(reader056.hasNextLine()){
                String line056 = reader056.nextLine();
                String[] data056 = line056.split(" ");
                int i = Integer.parseInt(data056[0]);
                int j = Integer.parseInt(data056[1]);

                switch(data056[2]){
                    case "BOOKED":
                        seats056[i][j].setBackground(BOOKED_COLOR);
                        break;
                    case "SELECTED":
                        seats056[i][j].setBackground(SELECTED_COLOR);
                        break;
                    default:
                        seats056[i][j].setBackground(AVAILABLE_COLOR);
                        break;
                }
            }
            reader056.close();
        } catch(FileNotFoundException e) {
            try {
                FileWriter writer = new FileWriter("seatInfo.txt");
                for (int i = 0; i < 7; i++){
                    for(int j = 0; j < 3; j++){
                        writer.write(i + " " + j + " AVAILABLE\n");
                        seats056[i][j].setBackground(AVAILABLE_COLOR);
                    }
                }
                writer.close();
            } catch(IOException ex){
                JOptionPane.showMessageDialog(null, "Error creating default file!");
            }
        }
    }

    BusTicketSystem() {
        setBounds(300,50,500,600);
        setTitle("*** Online Bus Ticket System ***");
        setResizable(false);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        Container c056 = getContentPane();
        c056.setLayout(null);

        JLabel driver056 = new JLabel("Driver");
        driver056.setHorizontalAlignment(SwingConstants.CENTER);
        driver056.setBounds(350, 50, 100, 30);
        driver056.setBorder(BorderFactory.createLineBorder(Color.black));
        c056.add(driver056);

        String[] row056 = {"A", "B", "C", "D", "E", "F", "G"};

        for(int i = 0; i < 7; i++) {
            for (int j = 0; j < 3; j++){
                String label = row056[i] + (j + 1);
                seats056[i][j] = new JButton(label);
                seats056[i][j].setBackground(AVAILABLE_COLOR);
                seats056[i][j].addActionListener(this);
            }
        }

        for (int i = 0; i < 7; i++){
            seats056[i][0].setBounds(40, 130 + (i * 50), 100, 30);
        }
        for(int j = 1; j < 3; j++){
            for(int i = 0; i < 7; i++){
                seats056[i][j].setBounds(110 * (j + 1), 130 + (i * 50), 100, 30);
            }
        }

        for(int i = 0; i < 7; i++){
            for(int j = 0; j < 3; j++){
                c056.add(seats056[i][j]);
            }
        }

        LoadFile056();

        confirm056.setBounds(30, 500, 100, 30);
        confirm056.addActionListener(this);
        c056.add(confirm056);

        save056.setBounds(140, 500, 100, 30);
        save056.addActionListener(this);
        c056.add(save056);

        clear056.setBounds(250, 500, 100, 30);
        clear056.addActionListener(this);
        c056.add(clear056);

        close056.setBounds(360, 500, 100, 30);
        close056.addActionListener(this);
        c056.add(close056);

        JLabel legend056 = new JLabel("***  White -> Available, Green -> Selected, Gray -> Booked  ***");
        legend056.setBounds(50, 550, 400, 30);
        c056.add(legend056);

        setVisible(true);
    }

    void ClickBtn056(ActionEvent e) {
        for(int i = 0; i < 7; i++){
            for(int j = 0; j < 3; j++){
                if(e.getSource() == seats056[i][j]){
                    if(seats056[i][j].getBackground().equals(AVAILABLE_COLOR)){
                        seats056[i][j].setBackground(SELECTED_COLOR);
                    }
                    else if(seats056[i][j].getBackground().equals(SELECTED_COLOR)){
                        seats056[i][j].setBackground(AVAILABLE_COLOR);
                    }
                }
            }
        }
    }

    public void Save056() {
        try{
            FileWriter writer = new FileWriter("seatInfo.txt");
            for(int i = 0; i < 7; i++){
                for(int j = 0; j < 3; j++){
                    if(seats056[i][j].getBackground().equals(AVAILABLE_COLOR)){
                        writer.write(i+" "+j+" AVAILABLE\n");
                    }
                    else if(seats056[i][j].getBackground().equals(SELECTED_COLOR)){
                        writer.write(i+" "+j+" SELECTED\n");
                    }
                    else{
                        writer.write(i+" "+j+" BOOKED\n");
                    }
                }
            }
            writer.close();
        }
        catch(IOException e) {
            JOptionPane.showMessageDialog(null, "Error has Occurred");
            e.printStackTrace();
        }
    }

    void Clear056() {
        try{
            FileWriter writer = new FileWriter("seatInfo.txt");
            for (int i = 0; i < 7; i++){
                for (int j = 0; j < 3; j++){
                    writer.write(i+" "+j+" AVAILABLE\n");
                    seats056[i][j].setBackground(AVAILABLE_COLOR);
                }
            }
            writer.close();
        }
        catch(IOException e) {
            JOptionPane.showMessageDialog(null, "Error has Occurred");
            e.printStackTrace();
        }
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == confirm056){
            boolean selected = false;
            for (int i = 0; i < 7; i++){
                for (int j = 0; j < 3; j++){
                    if(seats056[i][j].getBackground().equals(SELECTED_COLOR)){
                        seats056[i][j].setBackground(BOOKED_COLOR);
                        selected = true;
                    }
                }
            }
            if(selected){
                JOptionPane.showMessageDialog(null, "Seat Booked Successfully!!");
                Save056();
            } else {
                JOptionPane.showMessageDialog(null, "Please select a seat before confirming.");
            }
        }
        else if(e.getSource() == close056){
            System.exit(0);
        }
        else if(e.getSource() == save056){
            Save056();
        }
        else if(e.getSource() == clear056){
            Clear056();
        }
        else{
            ClickBtn056(e);
        }
    }

    public static void main(String[] args) {
        new BusTicketSystem();
    }
}
