import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.HashSet;

public class BusTicketSystem {
    public static void main(String[] args) {
        new BusTicketSystem().createGUI();
    }

    JFrame frame;
    JComboBox<String> routeCombo;
    JButton[][] seats;
    HashSet<String> bookedSeats = new HashSet<>();
    JPanel seatPanel;

    String[] routes = {"City A → City B", "City B → City C", "City A → City C"};

    public void createGUI() {
        frame = new JFrame("Bus Ticket System");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 500);
        frame.setLayout(new BorderLayout());

        // Route selection
        JPanel topPanel = new JPanel();
        topPanel.add(new JLabel("Select Route:"));
        routeCombo = new JComboBox<>(routes);
        routeCombo.addActionListener(e -> refreshSeats());
        topPanel.add(routeCombo);
        frame.add(topPanel, BorderLayout.NORTH);

        // Seats panel
        seatPanel = new JPanel(new GridLayout(5, 4, 10, 10)); // 5 rows, 4 seats
        seats = new JButton[5][4];
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 4; j++) {
                JButton seat = new JButton((i * 4 + j + 1) + "");
                seat.setBackground(Color.GREEN);
                seat.addActionListener(new SeatListener(i, j));
                seats[i][j] = seat;
                seatPanel.add(seat);
            }
        }
        frame.add(seatPanel, BorderLayout.CENTER);

        frame.setVisible(true);
    }

    private void refreshSeats() {
        // When route changes, reset seat colors (for simplicity)
        bookedSeats.clear();
        for (int i = 0; i < seats.length; i++) {
            for (int j = 0; j < seats[i].length; j++) {
                seats[i][j].setBackground(Color.GREEN);
                seats[i][j].setEnabled(true);
            }
        }
    }

    class SeatListener implements ActionListener {
        int row, col;
        public SeatListener(int r, int c) {
            this.row = r;
            this.col = c;
        }

        public void actionPerformed(ActionEvent e) {
            String seatID = routeCombo.getSelectedItem() + "-" + (row * 4 + col + 1);
            if (bookedSeats.contains(seatID)) {
                JOptionPane.showMessageDialog(frame, "Seat already booked!");
            } else {
                bookedSeats.add(seatID);
                seats[row][col].setBackground(Color.RED);
                JOptionPane.showMessageDialog(frame, "Seat booked successfully!");
            }
        }
    }
}
