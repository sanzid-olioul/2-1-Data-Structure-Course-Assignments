class Results{
    private:
        Informations obj[3];
        int marit[3];
    public:
        Results(Informations a,Informations b,Informations c);
        void finds(int roll);
};
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
