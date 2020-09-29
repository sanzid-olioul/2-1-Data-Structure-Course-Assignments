class Informations{
    private:
        int studentID;
        float course[3];
        float cgpa;
    public:
        void input();
        int ID();
        float CGPA();
};
void Informations::input(){
    std::cout<<"Enter the student ID : ";
    std::cin>>studentID;
    cgpa =0;
    for(int i=0;i<3;i++){
        std::cout<<"Enter the GPA for course "<<i+1<<" :";
        std::cin>>course[i];
        cgpa+= course[i];
    }
    cgpa/=3;
}
int Informations::ID(){
    return studentID;
}
float Informations::CGPA(){
    return cgpa;
}
