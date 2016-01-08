
public class tokenizer {
	private char [] delim;
	private String val;
	private int delimLength;
	private char [] stringToBeParsed;
	private int numOfTokens;
	
	public tokenizer(String delim, String val) {
		if(delim.length() == 0 || val.length() ==0 )
			System.out.println("Invalid arguments");
		this.delim = delim.toCharArray();
		stringToBeParsed = val.toCharArray();
		delimLength = delim.length();
		this.val = val;
	}
	private String getNextToken(){
		char [] returnVal;
		int i ; boolean delimFound;
		
		for (i=0; i < stringToBeParsed.length; i++) {
			if(stringToBeParsed[i] == delim[0]) {
				delimFound = true;
				for (int k = 1; k < delimLength; k ++) {
					if(delim[k] != stringToBeParsed[k+i])
						delimFound = false;
				}
				if(delimFound){ break;}
			}
		}
		//returnVal = val.substring(0,i+1).toCharArray();
		//stringToBeParsed = returnVal;	
		String returnVal1 = val.substring(0,i);
		numOfTokens--;
		if (hasNextToken()) {
			val = val.substring(i+delimLength);
			stringToBeParsed = val.toCharArray();
		}
		return returnVal1;
	}
	public boolean hasNextToken() {
		if(numOfTokens > 0)
				return true;
		return false;
	}
	private void getNumberOfTokens () {
		int tokens = 0;
		boolean found = false;
		for(int i = 0; i < stringToBeParsed.length; i++){
			if(stringToBeParsed[i] == delim[0]){
				found = true;
				for(int k = 1; k < delimLength; k++){
					if(stringToBeParsed[k+i] != delim[k])
						found = false;
				}
				if (found) {
					tokens ++;
					found =false;
				}
			}
		}
	}
	public static void main(String args []){
		tokenizer t = new tokenizer("/","This/is/a/test");
		System.out.println(t.getNextToken());
		System.out.println(t.getNextToken());
		System.out.println(t.getNextToken());
		System.out.println(t.getNextToken());

	}
}
