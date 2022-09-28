class Solution {
    public int calculate(String s) {
         int res=0,curr=0,i=0,n=s.length();
        char op='+';
        Stack<Integer> cases = new Stack<Integer>();
        for(char ch: s.toCharArray()){
            if(Character.isDigit(ch))
                curr=curr*10+ch-'0';

            if(i==n-1 || (!Character.isDigit(ch) && ch!=' ')){
                if(op=='+')
                    cases.push(curr);
                else if(op=='-')
                    cases.push(-curr);
                else if(op=='*')
                    cases.push(curr*cases.pop());
                else if(op=='/')
                    cases.push(cases.pop()/curr);
                op=ch;
                curr=0;
            }i++;
        }
        while(!cases.isEmpty()) res+=cases.pop();
        return res;
    }
    }

