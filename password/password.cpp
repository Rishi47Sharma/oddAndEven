 #include <iostream>
 using namespace std;
class userAndPassword
{
private:
    string userId = "user" ;
    string userPassword ="password";
public:
void  getData()
{
    string id ;
    string password;
    cout<<"Enter user id :";
    cin>>id;
    cout<<"Enter password :";
    cin>>password;
    cout<<endl;
    if(userId==id && userPassword==password)
    {cout<<"successful........ ";}
    else
    {cout<<"unsuccessful!!!!!";}
    }
    };

int main()
{   userAndPassword obj1;
    obj1.getData();
    return 0;
}

