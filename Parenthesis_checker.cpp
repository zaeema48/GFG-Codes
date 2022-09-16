// Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” 
// are correct in exp.
// For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.



class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>a; 
       for(int i=0; i<x.size(); i++){
           if(x[i]=='('||x[i]=='['||x[i]=='{')
           a.push(x[i]);
           else{
               if(a.empty())
               return false;
               else if ((x[i]==')'&& a.top()=='(')||(x[i]==']'&&a.top()=='[')||(x[i]=='}'&&a.top()=='{'))
               a.pop();
               else 
               return false;
           } 
       }
       if(!a.empty())
       return false; 
       
       return true;
    }

};