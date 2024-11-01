#include <iostream>
#include <string>
#include <limits> 
#include <cctype> 
using namespace std;

int main()
{
    int studentCount = 100;
    string studentName, fatherName, motherName, university, department, location;
    string pastEducation, currentEducation, favoritePersonality, favoriteBooks, dreamCountry;
    string hobby, likes, dislikes, dreamDestination, vision, personality;
    string contactNumber, email, extracurricularActivities, skills;
    int age, siblings, enrollment;
    float cgpa;
    char choice;

    for (int i = 1; i <= studentCount; i++)
    {
        cout << "\n*** Enter information for Student *** " << i << " ***\n";
        cout << "*\n";

        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter father's name: ";
        getline(cin, fatherName);

        cout << "Enter mother's name: ";
        getline(cin, motherName);


        // Age input with validation
        while (true)
        {
            cout << "Enter your age: ";
            cin >> age;
            if (cin.fail() || age <= 0)
            {
                cout << "Invalid input. Please enter a valid age.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                break;
            }
        }
        cin.ignore();


        // Contact number input with validation
        while (true)
        {
            cout << "Enter your contact number: ";
            getline(cin, contactNumber);
            bool isValid = true; // Flag for validity

            // Check if contact number is empty or contains non-digit characters
            if (contactNumber.empty()) {
                isValid = false;
            }
            else {
                for (char ch : contactNumber) {
                    if (!isdigit(ch)) {
                        isValid = false; // Invalid if any character is not a digit
                        break;
                    }
                }
            }

            if (!isValid)
            {
                cout << "Invalid input. Please enter a valid contact number (digits only).\n";
            }
            else
            {
                break;
            }
        }


        // Email input with validation
        while (true)
        {
            cout << "Enter your email address: ";
            getline(cin, email);
            size_t atPosition = email.find('@');
            size_t dotPosition = email.find('.', atPosition);
            bool isValidEmail = (atPosition != string::npos && dotPosition != string::npos && atPosition < dotPosition && !email.empty());

            if (!isValidEmail)
            {
                cout << "Invalid input. Please enter a valid email address.\n";
            }
            else
            {
                break;
            }
        }


        // Siblings input with validation
        while (true)
        {
            cout << "Enter number of siblings: ";
            cin >> siblings;
            if (cin.fail() || siblings < 0)
            {
                cout << "Invalid input. Please enter a valid number of siblings.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                break;
            }
        }
        cin.ignore();


        cout << "Enter university name: ";
        getline(cin, university);

        cout << "Enter department name: ";
        getline(cin, department);


        // Enrollment number with validation
        while (true)
        {
            cout << "Enter enrollment number: ";
            cin >> enrollment;
            if (cin.fail() || enrollment <= 0)
            {
                cout << "Invalid input. Please enter a valid enrollment number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                break;
            }
        }
        cin.ignore();


        // CGPA input with validation
        while (true)
        {
            cout << "Enter CGPA: ";
            cin >> cgpa;
            if (cin.fail() || cgpa < 0.0 || cgpa > 4.0)
            {
                cout << "Invalid input. Please enter a valid CGPA (0.0 - 4.0).\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                break;
            }
        }
        cin.ignore();


        cout << "Enter location (city): ";
        getline(cin, location);

        cout << "Enter your hobby: ";
        getline(cin, hobby);

        cout << "Enter your past education: ";
        getline(cin, pastEducation);

        cout << "Enter your current education: ";
        getline(cin, currentEducation);

        cout << "Enter something you like: ";
        getline(cin, likes);

        cout << "Enter something you dislike: ";
        getline(cin, dislikes);

        cout << "Enter your favorite personality: ";
        getline(cin, favoritePersonality);

        cout << "Enter your dream destination: ";
        getline(cin, dreamDestination);

        cout << "Enter your future goal: ";
        getline(cin, vision);

        cout << "Enter your favorite books: ";
        getline(cin, favoriteBooks);

        cout << "Enter your dream country: ";
        getline(cin, dreamCountry);

        cout << "Enter any extracurricular activities: ";
        getline(cin, extracurricularActivities);

        cout << "Enter your skills: ";
        getline(cin, skills);


        cout << "Describe your personality in a few words: ";
        getline(cin, personality);



        // Display information for each student
        cout << "\n**** Information for Student **** " << i << "*\n";
        cout << "Student Name: " << studentName << endl;
        cout << "Father's Name: " << fatherName << endl;
        cout << "Mother's Name: " << motherName << endl;
        cout << "Age: " << age << endl;
        cout << "Contact Number: " << contactNumber << endl;
        cout << "Email: " << email << endl;
        cout << "Number of Siblings: " << siblings << endl;
        cout << "University: " << university << endl;
        cout << "Department: " << department << endl;
        cout << "Enrollment Number: " << enrollment << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Location: " << location << endl;
        cout << "Hobby: " << hobby << endl;
        cout << "Past Education: " << pastEducation << endl;
        cout << "Current Education: " << currentEducation << endl;
        cout << "Likes: " << likes << endl;
        cout << "Dislikes: " << dislikes << endl;
        cout << "Favorite Personality: " << favoritePersonality << endl;
        cout << "Dream Destination: " << dreamDestination << endl;
        cout << "Vision/Future Goal: " << vision << endl;
        cout << "Favorite Books: " << favoriteBooks << endl;
        cout << "Dream Country: " << dreamCountry << endl;
        cout << "Extracurricular Activities: " << extracurricularActivities << endl;
        cout << "Skills: " << skills << endl;
        cout << "Personal Description: " << personality << endl;


        // Prompt to check if the user wants to continue
        cout << "\nWould you like to enter information for another student? (y/n): ";
        cin >> choice;
        cin.ignore();

        if (choice == 'n' || choice == 'N')
        {
            cout << "\n*** End of Data Entry ***\n";
            break;
        }
    }

    return 0;
}