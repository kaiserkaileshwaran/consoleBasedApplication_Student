#include<bits/stdc++.h>
using namespace std;

void readData(vector<string>&, vector<int>&, vector<string>&, vector<char>&, vector<int>&, vector<string>&, vector<string>&, vector<char>&, vector<float>&, vector<float>&);
void updateData(vector<string>&, vector<int>&, vector<string>&, vector<char>&, vector<int>&, vector<string>&, vector<string>&, vector<char>&, vector<float>&, vector<float>&);
void deleteData(vector<string>&, vector<int>&, vector<string>&, vector<char>&, vector<int>&, vector<string>&, vector<string>&, vector<char>&, vector<float>&, vector<float>&);
void choice(vector<string>&, vector<int>&, vector<string>&, vector<char>&, vector<int>&, vector<string>&, vector<string>&, vector<char>&, vector<float>&, vector<float>&);


void createData(vector<string>& name, vector<int>& id, vector<string>& dept, vector<char>& sec, vector<int>& batch, vector<string>& ph_no, vector<string>& addr, vector<char>& stayType, vector<float>& cgpa, vector<float>& arrear) {
    int num = 0;
    float num1 = 0;
    string str;
    char ch;
    cout << "Student Name = ";
    cin >> str;
    name.push_back(str);
    cout << "Student id = ";
    cin >> num;
    id.push_back(num);
    cout << "Student Dept = ";
    cin >> str;
    dept.push_back(str);
    cout << "Student section = ";
    cin >> ch;
    sec.push_back(ch);
    cout << "Student batch = ";
    cin >> num;
    batch.push_back(num);
    cout << "Student ph_no = ";
    cin >> str;
    ph_no.push_back(str);
    cout << "Studnet addr = ";
    cin >> str;
    addr.push_back(str);
    cout << "Student Accomodation Type = ";
    cin >> ch;
    stayType.push_back(ch);
    cout << "Student CGPA = ";
    cin >> num1;
    cgpa.push_back(num1);
    cout << "Studnet arrear = ";
    cin >> num;
    arrear.push_back(num);
    choice(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);

}

void readData(vector<string>& name, vector<int>& id, vector<string>& dept, vector<char>& sec, vector<int>& batch, vector<string>& ph_no, vector<string>& addr, vector<char>& stayType, vector<float>& cgpa, vector<float>& arrear) {
    cout << "Total Students - "<< name.size() << '\n';
    for(int i = 0; i < name.size(); i++){    
        cout << "==========\n";
        cout << "Details of student " << i + 1 << '\n';
        cout << "Student Name : " << name[i] << '\n';
        cout << "Student ID : " << id[i] << '\n';
        cout << "Student Department : " << dept[i] << '\n';
        cout << "Student Section : " << sec[i] << '\n';
        cout << "Student Batch : " << batch[i] << '\n';
        cout << "Student Ph_no : " << ph_no[i] << '\n';
        cout << "Student Address : " << addr[i] << '\n';
        cout << "Student Stay Type : " << stayType[i] << '\n';
        cout << "Student CGPA : " << cgpa[i] << '\n';
        cout << "Student Arraer : " << arrear[i] << '\n';
        cout << "==========\n";
    }
    choice(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);
}

void updateData(vector<string>& name, vector<int>& id, vector<string>& dept, vector<char>& sec, vector<int>& batch, vector<string>& ph_no, vector<string>& addr, vector<char>& stayType, vector<float>& cgpa, vector<float>& arrear) {
    cout << "Which student data that you want to update. Mention the Student number = ";
    int num;
    cin >> num;
    cout << "Which data that you want to update to this student = ";
    int category;
    cout << "\n1.Name\n2.ID\n3.Department\n4.Section\n5.Batch\n6.Phone Numebr\n7.Address\n8.Stay Type\n9.CGPA\n10.Arrear\n" ;
    cin >> category;
    string str1;
    int int1;
    float float1;
    char char1;
    if(category == 1){
        cout << "Name : ";
        cin >> str1;
        name[num - 1] = str1;
        cout << "Data updated\n";
    }else if(category == 2){
        cout << "ID : ";
        cin >> int1;
        id[num - 1] = int1;
        cout << "Data updated\n";
    }else if(category == 3){
        cout << "Department : ";
        cin >> str1;
        dept[num - 1] = str1;
        cout << "Data updated\n";
    }else if(category == 4){
        cout << "Section : ";
        cin >> char1;
        sec[num - 1] = char1;
        cout << "Data updated\n";
    }else if(category == 5){
        cout << "Batch : ";
        cin >> int1;
        batch[num - 1] = int1;
        cout << "Data updated\n";
    }else if(category == 6){
        cout << "Phone Numebr : ";
        cin >> str1;
        ph_no[num - 1] = str1;
        cout << "Data updated\n";
    }else if(category == 7){
        cout << "Address : ";
        cin >> str1;
        addr[num - 1] = str1;
        cout << "Data updated\n";
    }else if(category == 8){
        cout << "Stay Type : ";
        cin >> char1;
        stayType[num - 1] = char1;
        cout << "Data updated\n";
    }else if(category == 9){
        cout << "CGPA : ";
        cin >> float1;
        cgpa[num - 1] = float1;
        cout << "Data updated\n";
    }else if (category = 10){
        cout << "Arrear : ";
        cin >> float1;
        arrear[num - 1] = float1;
        cout << "Data updated\n";
    } 
    choice(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);
}

void deleteData(vector<string>& name, vector<int>& id, vector<string>& dept, vector<char>& sec, vector<int>& batch, vector<string>& ph_no, vector<string>& addr, vector<char>& stayType, vector<float>& cgpa, vector<float>& arrear) {
    cout << "Which student data that you want to delete. Mention the Student number = ";
    int num;
    cin >> num;
    name.erase(name.begin() + (num - 1));
    id.erase(id.begin() + (num - 1));
    dept.erase(dept.begin() + (num - 1));
    sec.erase(sec.begin() + (num - 1));
    batch.erase(batch.begin() + (num - 1));
    ph_no.erase(ph_no.begin() + (num - 1));
    addr.erase(addr.begin() + (num - 1));
    stayType.erase(stayType.begin() + (num - 1));
    cgpa.erase(cgpa.begin() + (num - 1));
    arrear.erase(arrear.begin() + (num - 1));
    choice(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);
}

void choice(vector<string>& name, vector<int>& id, vector<string>& dept, vector<char>& sec, vector<int>& batch, vector<string>& ph_no, vector<string>& addr, vector<char>& stayType, vector<float>& cgpa, vector<float>& arrear) {
    cout << "Operations and their numbers-\n1.Create a data.\n2.Read a data.\n3.Update a Data.\n4.Delete a data.\n";
    int options;
    do {
        cout << "Enter your operation number (Enter 0 to exit)\n";
        cin >> options;
        switch(options) {
            case 1:
                createData(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);
                break;
            case 2:
                readData(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);
                break;
            case 3:
                updateData(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);
                break;
            case 4:
                deleteData(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);
                break;
            default:
                if(options != 0){
                    cout << "Invalid option. Try again.\n";
                }
                break;
        }
    } while (options != 0);
}

int main(void) {
    vector<string> name, dept, addr, ph_no;
    vector<int> id, batch;
    vector<float> cgpa, arrear;
    vector<char> sec, stayType;
    choice(name, id, dept, sec, batch, ph_no, addr, stayType, cgpa, arrear);

    return 0;
}
