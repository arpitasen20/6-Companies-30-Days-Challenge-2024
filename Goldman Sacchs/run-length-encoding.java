class GfG
 {
	String encode(String str)
	{
          //Your code here
          
        StringBuilder result = new StringBuilder();
        result.append(str.charAt(0));
        int count = 1;

        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } 
            else {
                result.append(count).append(str.charAt(i));
                count = 1;
            }
        }

        result.append(count);

        return result.toString();
	}
	
 }
