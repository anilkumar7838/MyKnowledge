/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pack1;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.awt.event.*;
public class App extends Frame implements ActionListener {

    /**
     * @param args the command line arguments
     */
    Button b1,b2;
    App(){
        setLayout(new FlowLayout());
        setBackground(Color.cyan);
        b1=new Button("Red");
        b2=new Button("Blue");
        add(b1);
        add(b2);
        b1.addActionListener(this);
        b2.addActionListener(this);
        addWindowListener(new Closing());
    }
   public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==b1){
       setBackground(Color.red);
    }
    else
      setBackground(Color.blue);  
    }

    public static void main(String[] args) {
        // TODO code application logic here
        App ob = new App();
        ob.setVisible(true);
        ob.setSize(400,400);
        ob.setTitle("AK Display");
    }

    
}
class Closing extends WindowAdapter{
    public void windowClosing(WindowEvent we){
        System.exit(0);
    }
}
