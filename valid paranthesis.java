class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        
        for(int i = 0; i < s.length(); i++){
            switch(s.charAt(i)){
                case '(':
                    stack.push('(');
                    break;
                case '{':
                    stack.push('{');
                    break;
                case '[':
                    stack.push('[');
                    break;
                case ')':
                    if(stack.empty() || stack.peek() != '('){
                        return false;
                    } else {
                        stack.pop();
                    }
                    break;
                case '}':
                    if(stack.empty() || stack.peek() != '{'){
                        return false;
                    } else {
                        stack.pop();
                    }
                    break;
                case ']':
                    if(stack.empty() || stack.peek() != '['){
                        return false;
                    } else {
                        stack.pop();
                    }
                    break;
            }
        }
        
        
        if(!stack.empty()){
            return false;
        }
        
        return true;
    }
}