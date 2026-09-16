// Create a base class Patient with common data members such as patientId, patientName, age and
// numberOfDaysAdmitted.
// • Provide appropriate constructors to initialize patient information.
// • Create virtual functions such as calculateBill() and displayPatientDetails().
// • Derive InPatient and OutPatient from Patient, and derive EmergencyPatient from InPatient.
// • Override calculateBill() in InPatient, OutPatient and EmergencyPatient.
// • Use suitable billing formulas for each patient category.
// • Maintain different patient objects using Patient pointers, such as an array or vector of Patient
// pointers.
// • Demonstrate runtime polymorphism by calling calculateBill() and displayPatientDetails() through
// Patient pointers.
// • Use RTTI with dynamic_cast or typeid to identify the actual runtime type of each patient object.
// • If an object is an EmergencyPatient, display additional information such as emergency charges,
// ambulance charges and type of emergency

#include<iostream>
#include<string>
using namespace std;

class Patient
{
    public:
    int patientId;
    string patientName;
    int age;
    int noofdaysaddmitted;

    Patient(int id, string name, int agee, int no_of_days)
    {
        patientId = id;
        patientName = name;
        age = agee;
        noofdaysaddmitted = no_of_days;

    }

    // display details of patient
    virtual void displayDetails()
    {
        cout << "patient_id : " << patientId << endl;
        cout << "patient name : " << patientName << endl;
        cout << "age : " << age << endl;
        cout << "no of days addmitted : " << noofdaysaddmitted << endl;

    }

    virtual int calculateBill()
    {
        return 0;
    }

};

class InPatient : public Patient
{
    private:
    double roomCharges;
    int noofdays;
    double medicineCharges;
    double doctorCharges;

    public:
    InPatient(double room, int days, double medicine, double doctor, int id, string name, int age, int no_of_days ) 
    : Patient(id,name,age,no_of_days),
     roomCharges(room),
     noofdays(days),
     medicineCharges(medicine),
     doctorCharges(doctor)
    {

    }

    int calculateBill() override 
    {
        return ((roomCharges * noofdays) + medicineCharges + doctorCharges);
    }
    

};

class OutPatient : public Patient
{
    private:
    double testCharges;
    double consultationFees;
    double medicine;

    public:
    OutPatient(double test, double consultation, double medi, int  id, string name, int age, int no_of_days)
    : testCharges(test),
    consultationFees(consultation),
    medicine(medi),
    Patient(id, name, age, no_of_days)
    {

    }

    int calculateBill() override 
    {
        return(testCharges + consultationFees + medicine);
    }

};

class EmergencyPatient : public InPatient
{
    double roomCharges;
    double doctorCharges;
    double ambulanceCharges;
    double medicineCharges;
    int noofdays;
    double icuCharges;

    EmergencyPatient(double room, double doctor, double ambulance, double medi,
                     int nod, double icu, int  id, string name, int age, int no_of_days)
                     :roomCharges(room),
                     doctorCharges(doctor),
                     ambulanceCharges(ambulance),
                     medicineCharges(medi),
                     noofdays(nod),
                     icuCharges(icu),
                     Patient(id,name,age,no_of_days)
                     {

                     }
};