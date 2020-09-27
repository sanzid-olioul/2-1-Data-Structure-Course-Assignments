#include<iostream>
class Informations{
    private:
        int studentID;
        float course[3];
        float cgpa;
    public:
        Informations(int id,float c1,float c2,float c3);
        int ID();
        float CGPA();
};
class Results{
    private:
        Informations obj[3];
        int marit[3];
    public:
        Results(Informations a,Informations b,Informations c);
        void finds(int roll);
};
Informations::Informations(int id,float c1,float c2,float c3):studentID(id),course{c1,c2,c3}{
    cgpa = course[0]+course[1]+course[2];
    cgpa/=3;
};
int Informations::ID(){
    return studentID;
}
float Informations::CGPA(){
    return cgpa;
}

Results::Results(Informations a,Informations b,Informations c):obj{a,b,c}{
    if(obj[0].CGPA()>= obj[1].CGPA() && obj[1].CGPA() >=obj[2].CGPA()){
        marit[0]=1;
        marit[1]=2;
        marit[2]=3;
    }
    else if(obj[0].CGPA()>= obj[2].CGPA() && obj[2].CGPA()>=obj[1].CGPA()){
        marit[0]=1;
        marit[2]=2;
        marit[1]=3;
    }

    else if(obj[1].CGPA()>= obj[0].CGPA() && obj[0].CGPA()>=obj[2].CGPA()){
        marit[1]=1;
        marit[0]=2;
        marit[2]=3;
    }
    else if(obj[1].CGPA()>= obj[2].CGPA() && obj[2].CGPA()>=obj[0].CGPA()){
        marit[1]=1;
        marit[2]=2;
        marit[0]=3;
    }
     else if(obj[2].CGPA()>= obj[0].CGPA() && obj[0].CGPA()>=obj[1].CGPA()){
        marit[2]=1;
        marit[0]=2;
        marit[1]=3;
    }
    else{
        marit[2]=1;
        marit[1]=2;
        marit[0]=3;
    }
}
void Results::finds(int roll){
    for(int i=0;i<3;i++){
        if(roll == obj[i].ID()){
            std::cout<<"CGPA of Student ID "<<roll<<" is "<<obj[i].CGPA()<<std::endl<<"Merit position: "<<marit[i]<<std::endl;
        }
    }
}
int main()
{
    Informations s1(190101,3.50,3.75,4.00),s2(190102,3.00,3.25,4.00),s3(190103,3.50,3.25,3.00);

    Results Rs(s1,s2,s3);
    Rs.finds(190102);


    return 0;
}
