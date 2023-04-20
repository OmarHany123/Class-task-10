#include <iostream>

using namespace std;

class Human {
private:
    string name, jop;
    int age;
    char gerund;
public:
    void set_name(string a){
        name = a;
    }
    string get_name(){
        return name;
    }
    void set_age(int b){
        age = b;
    }
    int get_age(){
        return age;
    }
    void set_gerund(char c){
        gerund = c;
    }
    char get_gerund(){
        return gerund;
    }
    void set_jop(string d){
        jop = d;
    }
    string get_jop(){
        return jop;
    }
};

int main()
{
    string name, jop;
    int age;
    char gerund;
    Human hm;

    cin >> name >> age >> jop >> gerund;

    hm.set_name(name);
    hm.set_age(age);
    hm.set_jop(jop);
    hm.set_gerund(gerund);

    cout << "Your name is : " << hm.get_name() << " , " << "Your age is : " << hm.get_age() << " , " << "Your jop is : " << hm.get_jop() << " , " <<  "Your gerund is : " << hm.get_gerund() << endl;

    return 0;
}
