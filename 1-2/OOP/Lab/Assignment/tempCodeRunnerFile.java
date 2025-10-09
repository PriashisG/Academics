        // ===== Left Side Image with Custom Size =====
        JPanel leftPanel = new JPanel();
        leftPanel.setBackground(new Color(14, 29, 49));
        leftPanel.setLayout(new BorderLayout());

        // Load original image
        ImageIcon leftImage = new ImageIcon("logo.png"); // <-- use your logo file here

        // Scale image (200x200 for example)
        Image scaledImg = leftImage.getImage().getScaledInstance(200, 200, Image.SCALE_SMOOTH);
        ImageIcon scaledIcon = new ImageIcon(scaledImg);

        // Put scaled image into JLabel
        JLabel leftImageLabel = new JLabel(scaledIcon);
        leftImageLabel.setHorizontalAlignment(JLabel.CENTER);

        leftPanel.add(leftImageLabel, BorderLayout.CENTER);

        // Fix panel width so logo is visible
        leftPanel.setPreferredSize(new Dimension(250, 0));

        // Add to frame on the LEFT side
        frame.add(leftPanel, BorderLayout.WEST);