import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import java.util.*;
import java.util.List;

public class BusTicketingSystem041 extends JFrame {
    private static final int ROWS = 8;
    private static final String[] ROW_LABELS = {"A", "B", "C", "D", "E", "F", "G", "H"};
    private static final int COLS = 3;
    private static final String SEATS_FILE = "seats041.txt";
    
    // Seat status constants
    private static final int UNSOLD = 0;
    private static final int BOOKED = 1;
    private static final int SOLD = 2;
    
    // Colors for seat status
    private static final Color WHITE = Color.WHITE;
    private static final Color GREEN = Color.GREEN;
    private static final Color GRAY = Color.GRAY;
    
    private JButton[][] seatButtons;
    private int[][] seatStatus;
    private Set<String> selectedSeats;
    private JLabel statusLabel;
    private JButton confirmButton;
    private JPanel mainPanel;
    
    public BusTicketingSystem041() {
        setTitle("Online Bus Ticketing System");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());
        
        seatButtons = new JButton[ROWS][COLS];
        seatStatus = new int[ROWS][COLS];
        selectedSeats = new HashSet<>();
        
        initializeComponents();
        loadSeatsFromFile();
        setupGUI();
        
        setSize(800, 600);
        setLocationRelativeTo(null);
        setVisible(true);
    }
    
    private void initializeComponents() {
        mainPanel = new JPanel(new BorderLayout());
        
        // Create seat grid panel
        JPanel seatPanel = createSeatPanel();
        
        // Create control panel
        JPanel controlPanel = createControlPanel();
        
        // Create legend panel
        JPanel legendPanel = createLegendPanel();
        
        mainPanel.add(seatPanel, BorderLayout.CENTER);
        mainPanel.add(controlPanel, BorderLayout.SOUTH);
        mainPanel.add(legendPanel, BorderLayout.NORTH);
        
        add(mainPanel);
    }
    
    private JPanel createSeatPanel() {
        JPanel panel = new JPanel(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        
        // Add driver label
        gbc.gridx = 1;
        gbc.gridy = 0;
        gbc.insets = new Insets(10, 10, 20, 10);
        JLabel driverLabel = new JLabel("driver");
        driverLabel.setBorder(BorderFactory.createLineBorder(Color.BLACK));
        driverLabel.setHorizontalAlignment(SwingConstants.CENTER);
        driverLabel.setPreferredSize(new Dimension(80, 30));
        panel.add(driverLabel, gbc);
        
        // Add seat buttons
        gbc.insets = new Insets(2, 2, 2, 2);
        for (int row = 0; row < ROWS; row++) {
            for (int col = 0; col < COLS; col++) {
                String seatLabel = ROW_LABELS[row] + (col + 1);
                JButton seatButton = new JButton(seatLabel);
                seatButton.setPreferredSize(new Dimension(60, 40));
                seatButton.setFont(new Font("Arial", Font.BOLD, 12));
                
                final int finalRow = row;
                final int finalCol = col;
                final String finalSeatLabel = seatLabel;
                
                seatButton.addActionListener(new ActionListener() {
                    @Override
                    public void actionPerformed(ActionEvent e) {
                        handleSeatSelection(finalRow, finalCol, finalSeatLabel);
                    }
                });
                
                seatButtons[row][col] = seatButton;
                
                gbc.gridx = col;
                gbc.gridy = row + 1;
                panel.add(seatButton, gbc);
            }
        }
        
        return panel;
    }
    
    private JPanel createControlPanel() {
        JPanel panel = new JPanel(new FlowLayout());
        
        statusLabel = new JLabel("Select seats to book");
        statusLabel.setFont(new Font("Arial", Font.PLAIN, 14));
        
        confirmButton = new JButton("Confirm Selection");
        confirmButton.setFont(new Font("Arial", Font.BOLD, 14));
        confirmButton.setEnabled(false);
        confirmButton.addActionListener(e -> confirmSelection());
        
        JButton saveButton = new JButton("Save to File");
        saveButton.addActionListener(e -> saveSeatsToFile());
        
        JButton loadButton = new JButton("Load from File");
        loadButton.addActionListener(e -> loadSeatsFromFile());
        
        JButton resetButton = new JButton("Reset All");
        resetButton.addActionListener(e -> resetAllSeats());
        
        panel.add(statusLabel);
        panel.add(Box.createHorizontalStrut(20));
        panel.add(confirmButton);
        panel.add(Box.createHorizontalStrut(10));
        panel.add(saveButton);
        panel.add(loadButton);
        panel.add(resetButton);
        
        return panel;
    }
    
    private JPanel createLegendPanel() {
        JPanel panel = new JPanel(new FlowLayout());
        panel.setBorder(BorderFactory.createTitledBorder("Legend"));
        
        // Unsold (White)
        JButton unsoldLegend = new JButton("Unsold");
        unsoldLegend.setBackground(WHITE);
        unsoldLegend.setEnabled(false);
        
        // Booked (Green)
        JButton bookedLegend = new JButton("Booked");
        bookedLegend.setBackground(GREEN);
        bookedLegend.setEnabled(false);
        
        // Sold (Gray)
        JButton soldLegend = new JButton("Sold");
        soldLegend.setBackground(GRAY);
        soldLegend.setEnabled(false);
        
        panel.add(unsoldLegend);
        panel.add(Box.createHorizontalStrut(10));
        panel.add(bookedLegend);
        panel.add(Box.createHorizontalStrut(10));
        panel.add(soldLegend);
        
        return panel;
    }
    
    private void handleSeatSelection(int row, int col, String seatLabel) {
        // Can only select unsold seats
        if (seatStatus[row][col] == SOLD) {
            JOptionPane.showMessageDialog(this, 
                "Seat " + seatLabel + " is already sold and cannot be selected.",
                "Seat Unavailable", JOptionPane.WARNING_MESSAGE);
            return;
        }
        
        if (seatStatus[row][col] == UNSOLD) {
            // Select the seat (mark as booked)
            seatStatus[row][col] = BOOKED;
            selectedSeats.add(seatLabel);
            updateSeatDisplay(row, col);
            statusLabel.setText("Selected seats: " + selectedSeats.toString());
            confirmButton.setEnabled(!selectedSeats.isEmpty());
        } else if (seatStatus[row][col] == BOOKED) {
            // Deselect the seat (mark as unsold)
            seatStatus[row][col] = UNSOLD;
            selectedSeats.remove(seatLabel);
            updateSeatDisplay(row, col);
            statusLabel.setText(selectedSeats.isEmpty() ? "Select seats to book" : 
                "Selected seats: " + selectedSeats.toString());
            confirmButton.setEnabled(!selectedSeats.isEmpty());
        }
    }
    
    private void updateSeatDisplay(int row, int col) {
        JButton button = seatButtons[row][col];
        switch (seatStatus[row][col]) {
            case UNSOLD:
                button.setBackground(WHITE);
                button.setEnabled(true);
                break;
            case BOOKED:
                button.setBackground(GREEN);
                button.setEnabled(true);
                break;
            case SOLD:
                button.setBackground(GRAY);
                button.setEnabled(false);
                break;
        }
    }
    
    private void confirmSelection() {
        if (selectedSeats.isEmpty()) {
            JOptionPane.showMessageDialog(this, "No seats selected!", 
                "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }
        
        int result = JOptionPane.showConfirmDialog(this,
            "Confirm booking for seats: " + selectedSeats.toString() + "?",
            "Confirm Booking", JOptionPane.YES_NO_OPTION);
        
        if (result == JOptionPane.YES_OPTION) {
            // Mark selected seats as sold
            for (int row = 0; row < ROWS; row++) {
                for (int col = 0; col < COLS; col++) {
                    if (seatStatus[row][col] == BOOKED) {
                        seatStatus[row][col] = SOLD;
                        updateSeatDisplay(row, col);
                    }
                }
            }
            
            JOptionPane.showMessageDialog(this,
                "Successfully booked seats: " + selectedSeats.toString(),
                "Booking Confirmed", JOptionPane.INFORMATION_MESSAGE);
            
            selectedSeats.clear();
            statusLabel.setText("Booking completed. Select more seats if needed.");
            confirmButton.setEnabled(false);
            
            // Auto-save after confirmation
            saveSeatsToFile();
        }
    }
    
    private void saveSeatsToFile() {
        try (PrintWriter writer = new PrintWriter(new FileWriter(SEATS_FILE))) {
            writer.println("# Bus Seat Status - Roll Number 041");
            writer.println("# Format: SeatLabel,Status (0=Unsold, 1=Booked, 2=Sold)");
            
            for (int row = 0; row < ROWS; row++) {
                for (int col = 0; col < COLS; col++) {
                    String seatLabel = ROW_LABELS[row] + (col + 1);
                    writer.println(seatLabel + "," + seatStatus[row][col]);
                }
            }
            
            statusLabel.setText("Seat information saved to file successfully!");
            
        } catch (IOException e) {
            JOptionPane.showMessageDialog(this,
                "Error saving to file: " + e.getMessage(),
                "File Error", JOptionPane.ERROR_MESSAGE);
        }
    }
    
    private void loadSeatsFromFile() {
        File file = new File(SEATS_FILE);
        if (!file.exists()) {
            // Initialize with all seats unsold
            for (int row = 0; row < ROWS; row++) {
                for (int col = 0; col < COLS; col++) {
                    seatStatus[row][col] = UNSOLD;
                    updateSeatDisplay(row, col);
                }
            }
            statusLabel.setText("No saved file found. All seats initialized as unsold.");
            return;
        }
        
        try (BufferedReader reader = new BufferedReader(new FileReader(SEATS_FILE))) {
            String line;
            while ((line = reader.readLine()) != null) {
                // Skip comments
                if (line.startsWith("#") || line.trim().isEmpty()) {
                    continue;
                }
                
                String[] parts = line.split(",");
                if (parts.length == 2) {
                    String seatLabel = parts[0].trim();
                    int status = Integer.parseInt(parts[1].trim());
                    
                    // Find row and column from seat label
                    char rowChar = seatLabel.charAt(0);
                    int col = Integer.parseInt(seatLabel.substring(1)) - 1;
                    int row = -1;
                    
                    for (int i = 0; i < ROW_LABELS.length; i++) {
                        if (ROW_LABELS[i].charAt(0) == rowChar) {
                            row = i;
                            break;
                        }
                    }
                    
                    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
                        seatStatus[row][col] = status;
                        updateSeatDisplay(row, col);
                    }
                }
            }
            
            statusLabel.setText("Seat information loaded from file successfully!");
            
        } catch (IOException | NumberFormatException e) {
            JOptionPane.showMessageDialog(this,
                "Error loading from file: " + e.getMessage(),
                "File Error", JOptionPane.ERROR_MESSAGE);
        }
    }
    
    private void resetAllSeats() {
        int result = JOptionPane.showConfirmDialog(this,
            "Are you sure you want to reset all seats to unsold?",
            "Reset Confirmation", JOptionPane.YES_NO_OPTION);
        
        if (result == JOptionPane.YES_OPTION) {
            for (int row = 0; row < ROWS; row++) {
                for (int col = 0; col < COLS; col++) {
                    seatStatus[row][col] = UNSOLD;
                    updateSeatDisplay(row, col);
                }
            }
            selectedSeats.clear();
            statusLabel.setText("All seats reset to unsold status.");
            confirmButton.setEnabled(false);
        }
    }
    
    private void setupGUI() {
        // Update all seat displays initially
        for (int row = 0; row < ROWS; row++) {
            for (int col = 0; col < COLS; col++) {
                updateSeatDisplay(row, col);
            }
        }
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            try {
                UIManager.setLookAndFeel(UIManager.getSystemLookAndFeel());
            } catch (Exception e) {
                e.printStackTrace();
            }
            new BusTicketingSystem041();
        });
    }
}