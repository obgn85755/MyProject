import java.util.TimeZone;

public class dfd {

	public static void main(String[] args) {
		
		for(String name: TimeZone.getAvailableIDs()){
			System.out.println(name);
		}
	}

}
