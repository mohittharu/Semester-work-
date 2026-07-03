import javax.swing.*;

public class lab15_MenuBar extends JFrame {
    
    lab15_MenuBar() {
        setTitle("Menu Bar");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        
        JMenuBar menuBar = new JMenuBar();
        JMenu fileMenu = new JMenu("File");
        
        JMenuItem newItem = new JMenuItem("New");
        newItem.addActionListener(e -> {
            JOptionPane.showMessageDialog(this, "New file selected");
        });
        fileMenu.add(newItem);
        
        JMenuItem saveItem = new JMenuItem("Save");
        saveItem.addActionListener(e -> {
            JOptionPane.showMessageDialog(this, "File saved");
        });
        fileMenu.add(saveItem);
        
        fileMenu.addSeparator();
        
        JMenuItem exitItem = new JMenuItem("Exit");
        exitItem.addActionListener(e -> {
            System.exit(0);
        });
        fileMenu.add(exitItem);
        
        menuBar.add(fileMenu);
        setJMenuBar(menuBar);
        
        JLabel label = new JLabel("Menu Bar Example - Click on File menu");
        add(label);
        
        setVisible(true);
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new lab15_MenuBar();
            }
        });
        
        System.out.println("=============================");
        System.out.println("Lab No.: 15");
        System.out.println("Name: Mohit Tharu");
        System.out.println("Roll No./Section: 117-079/D");
        System.out.println("=============================");
    }
}
