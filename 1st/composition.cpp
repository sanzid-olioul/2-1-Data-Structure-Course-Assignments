#include<iostream>
class A{
    public:
    A(std::string name,int roll);
};
class B{
    public:
    B(std::string uni,int session, A obj);
};


int main()
{
    A obA("Sanzid Olioul",8);
    B obB("Pabna University",2018,obA);

    obB.show();



    return 0;
}
class A{
    private:
        std::string name;
        int roll;
    public:
        A(std::string name,int roll):name(name),roll(roll){}
        void show();
};
void A::show(){
    std::cout<<name<<"  "<<roll<<std::endl;
}
class B{
    private:
        std::string uni;
        int session;
        A obj;
    public:
        B(std::string uni,int session, A obj):uni(uni),session(session),obj(obj){}
        void show();
};
void B::show()
{   obj.show();
    std::cout<<uni<<" "<<session<<std::endl;
}
