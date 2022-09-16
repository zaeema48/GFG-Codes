// //
// Given a sentence in the form of a string in uppercase,
// convert it into its equivalent mobile numeric keypad sequence.
// //


//User function Template for Java
class Solution 
{ 
    String printSequence(String S) 
    { 
        HashMap<Character, String> phone = new HashMap<>();
        phone.put('A', "2");
        phone.put('B', "22");
        phone.put('C', "222");
        phone.put('D', "3");
        phone.put('E', "33");
        phone.put('F', "333");
        phone.put('G', "4");
        phone.put('H', "44");
        phone.put('I', "444");
        phone.put('J', "5");
        phone.put('K', "55");
        phone.put('L', "555");
        phone.put('M', "6");
        phone.put('N', "66");
        phone.put('O', "666");
        phone.put('P', "7");
        phone.put('Q', "77");
        phone.put('R', "777");
        phone.put('S', "7777");
        phone.put('T', "8");
        phone.put('U', "88");
        phone.put('V', "888");
        phone.put('W', "9");
        phone.put('X', "99");
        phone.put('Y', "999");
        phone.put('Z', "9999");
        phone.put(' ', "0");
        String str="";
        for(int i=0; i<S.length(); i++){
            str=str+phone.get(S.charAt(i));
        }
        return str;
    }
    }
