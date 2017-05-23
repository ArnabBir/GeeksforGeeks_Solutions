/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
    if(s.empty())   return -1;
    else    return minEle;
   
}

/*returns poped element from stack*/
int _stack ::pop()
{
   if(s.empty())    return -1;
   int popped_element = s.top();
   s.pop();
   if(popped_element < minEle){
       int prev_minEle = minEle;
       minEle = 2*minEle - popped_element;
       return prev_minEle;
   }
   else return popped_element;
}

/*push element x into the stack*/
void _stack::push(int x)
{
    if(s.empty()){
        minEle = x;
        s.push(x);
    }
    
    else if(minEle > x){
        s.push(2*x - minEle);
        minEle = x;
        //cout<<"min = "<<minEle<<endl;
    }
    else{
        s.push(x);
    }
    
}
