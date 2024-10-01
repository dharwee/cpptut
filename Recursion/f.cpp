//basic recursion

#include <iostream>
using namespace std;
void p(int n){
    if(n==0){
        return;
    }
    else{
         p(n-1);
         cout<<n<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    p(n);
   
    return 0;
}


#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main() {
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
   
    return 0;
}
