#include <iostream>
#include <string>
using namespace std;

string name, fa_name, mo_name, s_name, dob;
int id_number, class_num, ce_marks, ada_marks, mcfa_marks, bs_marks, oop_marks, peed_marks;

void generate_marksheet()
{
    int grand_total;
    float percentage;
    grand_total = ce_marks + ada_marks + mcfa_marks + bs_marks + oop_marks + peed_marks;
    percentage = static_cast<float>(grand_total) / 6;

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|                  METROPOLITAN UNIVERSITY GRADE CERTIFICATE                    |\n";
    cout << "|------------------------------------------------------------------------------------\n";
    cout << "|Your name: " << name << "\tclass: " << class_num << "th\tID Number: " << id_number << "\n";
    cout << "|Father name: " << fa_name << "\n";
    cout << "|Mother name: " << mo_name << "\n";
    cout << "|Date of birth: " << dob << "\n";
    cout << "|university name: " << s_name << "\n";
    cout << "|------------------------------------------------------------------------------------\n";
    cout << "|\tSUBJECTS      \tMAX MARKS\tMIN MARKS\tTHEORY MARKS\n";
    cout << "|------------------------------------------------------------------------------------\n";
    cout << "|\tCE             \t  100      \t   33       \t    " << ce_marks << "\n";
    cout << "|\tAD&A           \t  100      \t   33       \t    " << ada_marks << "\n";
    cout << "|\tMC&fA          \t  100      \t   33       \t    " << mcfa_marks << "\n";
    cout << "|\tBS             \t  100      \t   33       \t    " << bs_marks << "\n";
    cout << "|\tOOP            \t  100      \t   33       \t    " << oop_marks << "\n";
    cout << "|\tPE&ED          \t  100      \t   33       \t    " << peed_marks << "\n";
    cout << "|------------------------------------------------------------------------------------\n";
    cout << "|\t               \t  600    |    GRAND TOTAL\t    " << grand_total << "\n";
    cout << "|------------------------------------------------------------------------------------\n";

    if (percentage >= 80 && percentage <= 100)
    {
        cout << "|RESULT : PASS IN FIRST DIVISION\n";
        cout << "|GRADE  : A+\n";
    }
    else if (percentage >= 60 && percentage <= 79)
    {
        cout << "|RESULT : PASS IN FIRST DIVISION\n";
        cout << "|GRADE  : A\n";
    }
    else if (percentage >= 41 && percentage <= 59)
    {
        cout << "|RESULT : PASS IN SECOND DIVISION\n";
        cout << "|GRADE  : B\n";
    }
    else if (percentage >= 33 && percentage <= 40)
    {
        cout << "|RESULT : PASS IN THIRD DIVISION\n";
        cout << "|GRADE  : C\n";
    }
    else if (percentage >= 0 && percentage <= 32)
    {
        cout << "|RESULT : Fail\n";
        cout << "|GRADE  : F\n";
    }

    cout << "|------------------------------------------------------------------------------------\n\n";
}

void take_user_info()
{
    char yesNo;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter father name: ";
    getline(cin, fa_name);
    cout << "Enter mother name: ";
    getline(cin, mo_name);
    cout << "Enter UNIVERSITY name: ";
    getline(cin, s_name);
    cout << "Enter date of birth: ";
    getline(cin, dob);
    cout << "Enter BATCH: ";
    cin >> class_num;
    cout << "Enter ID No: ";
    cin >> id_number;
    cout << "Enter subject marks\n";

    do
    {
        cout << "CE marks: ";
        cin >> ce_marks;
    } while (ce_marks > 100 || ce_marks < 1);

    do
    {
        cout << "AD&A marks: ";
        cin >> ada_marks;
        if (ada_marks > 100 || ada_marks < 1)
        {
            cout << "invalid marks, enter valid marks\n";
        }
    } while (ada_marks > 100 || ada_marks < 1);

    do
    {
        cout << "MC&FA marks: ";
        cin >> mcfa_marks;
        if (mcfa_marks > 100 || mcfa_marks < 1)
        {
            cout << "invalid marks, enter valid marks\n";
        }
    } while (mcfa_marks > 100 || mcfa_marks < 1);

    do
    {
        cout << "BS marks: ";
        cin >> bs_marks;
        if (bs_marks > 100 || bs_marks < 1)
        {
            cout << "invalid marks, enter valid marks\n";
        }
    } while (bs_marks > 100 || bs_marks < 1);

    do
    {
        cout << "PE&ED marks: ";
        cin >> peed_marks;
        if (peed_marks > 100 || peed_marks < 1)
        {
            cout << "invalid marks, enter valid marks\n";
        }
    } while (peed_marks > 100 || peed_marks < 1);

    do
    {
        cout << "OOP marks: ";
        cin >> oop_marks;
        if (oop_marks > 100 || oop_marks < 1)
        {
            cout << "invalid marks, enter valid marks\n";
        }
    } while (oop_marks > 100 || oop_marks < 1);

    cout << "\nIf you want to generate your Mark Transcript then press 'Y' otherwise 'N': ";
    cin.ignore();
    cin >> yesNo;

    if (yesNo == 'y' || yesNo == 'Y')
    {
        generate_marksheet();
    }
    else
    {
        exit(0);
    }
}

int main()
{
    char yesNo;
    cout << "\n             **Welcome to Marks Transcript Conversion project**               \n\n";
    cout << "If you want to generate your marks transcript ";
    cout << "then you have to provide some information\n";
    cout << "If you want to provide information then press 'Y' otherwise 'N': ";
    cin >> yesNo;

    if (yesNo == 'y' || yesNo == 'Y')
    {
        take_user_info();
    }
    else
    {
        exit(0);
    }

    return 0;
}
