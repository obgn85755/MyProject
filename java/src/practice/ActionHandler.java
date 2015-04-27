import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class ActionHandler implements ActionListener {
  JTextField kor,eng,math;
  JLabel sum,avg, gra;

  ActionHandler(JTextField kor,JTextField eng,JTextField math,
                                        JLabel sum,JLabel avg,JLabel gra){
     this.kor=kor; this.eng=eng; this.math=math;
     this.sum=sum; this.avg=avg; this.gra=gra;
  }
@Override
  public void actionPerformed(ActionEvent e) {
      String str=e.getActionCommand();
    //if(kor.getText().isEmpty()) { }
    //else {
      if(str.equals("°á°ú")){
        int total=Integer.parseInt(kor.getText())+Integer.parseInt(eng.getText())+
        Integer.parseInt(math.getText());
        sum.setText(""+total);
        avg.setText(""+(total/3));
        gra.setText(grade(total/3));
      }
      else {
           kor.setText(""); eng.setText(""); math.setText("");
           sum.setText(""); avg.setText(""); gra.setText("");
      }
  //}
  }

  String grade(int avg){
         String returnValue;
         switch(avg/10){
   	 	case 10: case 9: case 8: returnValue="Very Good"; break;
		case 7: case 6: returnValue="So good"; break;
		case 5: returnValue="Good"; break;
		default: returnValue="Bad";
         }
    return returnValue;
   }

}

