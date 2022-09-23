//sorting sentences with number index

class Solution {
    public String sortSentence(String s) {
             String[] words = s.split(" ");
        String[] reordered = new String[words.length];

        for (String word : words) {
            int wordPosition = word.charAt(word.length() - 1) - '0' - 1;
            reordered[wordPosition] = word.substring(0, word.length() - 1);
        }

        return String.join(" ", reordered);
    }
        
    }
