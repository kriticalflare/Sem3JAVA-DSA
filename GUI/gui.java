import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class gui{
    public static void main(String[] args) {

        JFrame f1=new JFrame("simple");
        JLabel l1=new JLabel("ENTER NAME");
        JTextField t=new JTextField();
        JLabel l2=new JLabel();
        JButton b=new JButton("CLICK");
        f1.setSize(500,500);
        l1.setBounds(210,50,200,100);
        t.setBounds(150,120,200,20);
        b.setBounds(210,150,90,50);
        f1.add(l1);
        f1.add(t);
        f1.add(b);
        b.addActionListener(
    
            new ActionListener(){
                @Override
                public void actionPerformed(ActionEvent e)
                {
                  String str=t.getText();
                  l2.setText("hello "+ str +",how are you?");
                }
            }
        );
        l2.setBounds(180,200,400,100);
        f1.add(l2);
        f1.setLayout(null);
        f1.setVisible(true);

    }
    
}