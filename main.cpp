#include <bits/stdc++.h>
using namespace std;

void demoGrade()
{
    int k, m, f;
    cin >> k >> m >> f;
    cout << "Total : " << k + m + f;
}
void calcGrade()
{
    string grade[] = {"F", "F", "F", "F", "F", "F", "F", "F", "F", "F", "D", "D+", "C", "C+", "B", "B+", "A", "A", "A", "A", "A"};
    int score;
    cin >> score;
    cout << "Grade : " << grade[(int)score / 5];
}
void evemodd()
{
    int x;
    cin >> x;
    cout << x << " is " << ((x % 2 == 0) ? "an Even number." : "an Odd number.");
}
void leapyear()
{
    int year;
    cin >> year;
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (leap)
    {
        cout << year << " is a leap year. ";
    }
    else
    {
        cout << year << " is not a leap year. ";
    }
}
void buffetPromotion()
{
    int n;
    cin >> n;
    cout << 249 * (n - (n / 4));
}
void colaPromotion()
{
    int cola;
    cin >> cola;
    if (cola > 39)
    {
        cout << (cola / 20 - 1) * 4 - 1;
    }
    else
    {
        cout << 1;
    }
}
void switchcase()
{
    cout << "1. kid" << endl;
    cout << "2. adult" << endl;
    cout << "3. senior" << endl;
    cout << "select a choice. ";
    int fare; // undefined behavior
    char choice;
    cin >> choice;
    switch (tolower(choice))
    {
    case '1':
    case 'k':
        //        case 'K':
    case '3':
    case 's':
        //        case 'S':
        fare = 10;
        cout << "kid or senior" << endl;
        break;
    case '2':
    case 'a':
        //        case 'A':
        fare = 20;
        cout << "adult" << endl;
        break;
    default:
        fare = 20;
        cout << "default fare rate" << endl;
        break;
    }
    //    if (choice == '1' || tolower(choice) == 'k' || choice == '3' || tolower(choice) == 's') {
    //        cout << "kid or senior" << endl;
    //        fare = 10;
    //    } else if (choice == '2' || tolower(choice) == 'a') {
    //        cout << "adult" << endl;
    //        fare = 20;
    //    } else {
    //        fare = 20;
    //        cout << "default fare rate" << endl;
    //    }
    cout << "fare = " << fare << endl;
}
void forloop()
{
    for (int i = 0; i < 51; i += 10)
    {
        cout << i << " ";
    }
}
void addascii()
{
    int n;
    string s;
    cin >> s >> n;
    for (int i = 0; i < s.length(); i++)
    {
        cout << (char)((int)s.at(i) + n);
    }
}
void multipletable()
{
    int n, m;
    cin >> n >> m;
    if (1 < n < 16 || 1 <= m <= 10)
    {
        cout << "Invalid Input";
        return;
    }
    cout << "Cat\tRow\tOut\n";
    for (int i = 1; i <= m; i++)
    {
        cout << n << "x"
             << "\t" << i << "\t" << n * i << endl;
    }
}
void starwave()
{
    string line1 = "--*-----";
    string line2 = "";
}
void starpyramid()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void showOdd()
{
    int n = 0;
    while (n < 20)
    {
        if (n % 2 == 1)
        {
            cout << n << endl;
        }
        n++;
    }
}
void countdown()
{
    int n = 10;
    while (n > 0)
    {
        cout << n << endl;
        n--;
    }
}
void addpositive()
{
    int n;
    int sum = 0;
    while (true)
    {
        cin >> n;
        if (n >= 0)
        {
            sum += n;
        }
        else
        {
            break;
        }
    }
}
void primenumber()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << "Invalid Number";
        return;
    }
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        cout << n << " is prime.";
    }
    else
    {
        cout << n << " is not prime.";
    }
}
void inttype()
{
    int i = 0, n, neg, zer, pos;
    while (i < 10)
    {
        cin >> n;
        if (n > 0)
        {
            pos++;
        }
        else if (n == 0)
        {
            zer++;
        }
        else if (n < 0)
        {
            neg++;
        }
    }
    cout << "neg" << neg << "\npos" << pos << "\nzero" << zer;
}
void multipletable30_50()
{
    int n, i = 1;
    cin >> n;
    if (!(30 <= n <= 50))
    {
        cout << "Invalid Input";
        return;
    }
    while (i <= 12)
    {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
}
void dowhileeven100_2()
{
    int x = 100;
    do
    {
        if (x % 2 == 0)
        {
            cout << x << endl;
        }
        x--;
    } while (x >= 2);
}
void dowhile1_100()
{
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 100);
}
void dowhileaddpositive()
{
    int n;
    int sum = 0;
    do
    {
        cin >> n;
        if (n >= 0)
        {
            sum += n;
        }
        else
        {
            break;
        }
    } while (true);
}
void ntoexit()
{
    char n;
    int sum = 0;
    while (n != 'n')
    {
        cin >> n;
        if ((int)n >= 0)
        {
            sum += n;
        }
        else
        {
            continue;
        }
    }
    cout << "Stopped";
}
void rectangle()
{
    int l, w, i, j;
    cin >> l >> w;
    if (l <= 0 || w <= 0)
    {
        cout << "Invalid Input";
        return;
    }
    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= w; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void sumtennum()
{
    int i = 0, num, sum = 0, numarr[10];
    while (i < 10)
    {
        cin >> num;
        numarr[i] = num;
        i++;
    }
    // add even in sumarr
    for (int i = 0; i < sizeof(numarr); i++)
    {
        if (numarr[i] % 2 == 0)
            sum += numarr[i];
    }
    cout << "sum " << sum;
}
void findsmallest()
{
    int num, small = 2147483647;
    while (true)
    {
        cin >> num;
        if (small > num)
            small = num;
        else
        {
            continue;
        }
    }
    cout << "Stopped";
}
void displaybackward()
{
    int num[10], i = 9;
    while (i > 0)
    {
        cin >> num[i];
        i--;
    }
    for (int i = 0; i < 9; i++)
    {
        cout << num[i] << " ";
    }
}
void findlarget()
{
    int num, large = -2147483647;
    while (true)
    {
        cin >> num;
        if (large < num)
            large = num;
        else
        {
            continue;
        }
    }
    cout << "Stopped";
}
void sortarr()
{
    int myarr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> myarr[i];
    }
    for (int t = 0; t < 10; t++)
    {
        int min = t;
        for (int i = t + 1; sizeof(myarr) > i; i++)
        {
            if (myarr[i] < myarr[min])
            {
                min = i;
            }
        }
        if (min != t)
        {
            int temp = myarr[t];
            cout << "----------\n[j]" << myarr[t] << "\n min" << myarr[min] << "\n t" << myarr[t] << "\n[M" << myarr[min] << "TP]" << temp << endl;
            myarr[t] = myarr[min];
            myarr[min] = temp;
        }
    }
    for (int t = 0; t < 5; t++)
    {
        cout << "val " << myarr[t] << endl;
    }
}
void sortarrdes()
{
    int myarr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    for (int t = 0; t < 5; t++)
    {
        int max = t;
        for (int i = t + 1; sizeof(myarr) > i; i++)
        {
            if (myarr[i] > myarr[max])
            {
                max = i;
            }
        }
        if (max != t)
        {
            int temp = myarr[t];
            myarr[t] = myarr[max];
            myarr[max] = temp;
        }
    }
    for (int t = 0; t < 5; t++)
    {
        cout << "val " << myarr[t];
    }
}
void printverticaltext()
{
    string str;
    cin >> str;
    for (int i = 0; i <= str.length(); i++)
    {
        cout << str[i] << endl;
    }
}
void reversetext()
{
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    cout << str;
}
void reversetextnobuildin()
{
    string str, temp;
    cin >> str;
    for (int i = str.length(); i >= 0; i--)
    {
        temp[i] = str[i];
        cout << temp[i];
    }
}
void display2darray()
{
    int myarr[3][3];
    // input 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Array[" << i << "][" << j << "]: ";
            cin >> myarr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Array[" << i << "][" << j << "]: " << myarr[i][j] << endl;
        }
    }
}
void addmatrix()
{
    int myarr1[3][3], myarr2[3][3], myarr3[3][3];
    cout << "Input Arr1 \t";

    // input 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Array[" << i << "][" << j << "]: ";
            cin >> myarr1[i][j];
        }
    }
    cout << "Input Arr2 \t";

    // input 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Array[" << i << "][" << j << "]: ";
            cin >> myarr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << myarr1[i][j];
        }
        cout << " + ";

        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << myarr2[i][j];
        }
        cout << " = ";
        for (int j = 0; j < 3; j++)
        {
            myarr3[i][j] = myarr1[i][j] + myarr2[i][j];
            cout << myarr3[i][j] << " ";
        }
        cout << endl;
    }
}
// void palindromcheck(){
//     string str;
//     cin >> str ;
//     // for even string
//         //    R       A         M         A         R

//         // 0 1 2 3 4 5 6 7 8 9 10  11  12  13  14  15
//     int size= strlen(str[0]);

//     // init ballance check, checked flag
//     bool rightCheck = true , leftCheck = true ;
//     int sizeCheck =0 ;
//     // for even
//     if(size%2 ==0){
//         // check if current balance*/
//         while( sizeCheck<size ){
//             if(str[sizeCheck+1] != str[size-sizeCheck]){
//                 rightCheck=false;
//             }
//             /*
//             if(str[sizeCheck] != str[size-1- sizeCheck]){
//                 leftCheck=false;
//             }*/
//             sizeCheck++;
//         }

//     // if current checked balanced then got one character mismatch
//     if(rightCheck){
//         cout <<"Bereischetze ben Tareno." ;
//     }else{
//         cout << "No ballance of tree " ;
//     }
//     //for odd string
//     }else{
//         sizeCheck = size/2+1;
//         while( sizeCheck<size ){
//             if(str[sizeCheck+1] != str[size-sizeCheck]){
//                 rightCheck=false;
//             }
//             /*
//             if(str[sizeCheck] != str[size-1- sizeCheck]){
//                 leftCheck=false;
//             }*/
//             sizeCheck++;
//         }
//         // if current checked balanced then got one character mismatch
//         if(rightCheck){
//             cout << "Bereischetze ben Tareno." ;
//         }else{
//             cout << "No ballance of tree " ;
//         }

//     }
// }
void nearesttoaverage()
{
    // average
    float avg = 0;
    int ans;
    float myarr[10];
    // put 1-10 to my arr
    // for (int i = 0; i < 10; i++) {
    //     myarr[i] = i + 1;
    // }
    for (int i = 0; i < 10; i++)
    {
        cin >> myarr[i];
        // get sum of arr
        avg = avg + myarr[i];
    }
    // for (int i = 0; i < 10; i++) {
    //     avg = avg + myarr[i];
    // }
    avg = avg / 10;
    int nearest = INT_MAX;
    int oldnear = nearest;
    for (int i = 0; i < 10; i++)
    {
        nearest = min(nearest, (int)abs(avg - myarr[i]));
        if (nearest != oldnear)
        {
            oldnear = nearest;
            ans = i;
        }
    }
    cout << avg << endl
         << myarr[ans];
}
int addnumber()
{
    int n;
    int sum = 0;
    int addnum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> addnum;
        sum += addnum;
    }
    return sum;
}
int rectangle(float width, float height)
{
    return width * height;
}
int sumcube(int n)
{
    return pow((n * (n + 1) / 2), 2);
}
void sqrtc()
{
    float n[7] = {1.00, 2.50, 4.00, 5.50, 7.00, 8.50, 10.00};
    for (int i = 0; i < 7; i++)
    {
        cout << sqrt(n[i]) << endl;
    }
}
void powcube()
{
    int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        cout << pow(n[i], 3) << endl;
    }
}
void strcompare()
{
    char s1[10] = "comp";
    cout << strcmp(s1, "com") << endl;
    cout << strcmp("comp", s1) << endl;
    cout << strcmp("com", "com") << endl;
}
void strcopy()
{
    char s1[20];
    char s2[20];

    cout << "Enter string s1: ";
    cin >> s1;

    // Copying s1 into s2;
    strcpy(s2, s1);

    cout << "String s2 = " << s2;
}
void strlenght()
{
    char str[20];
    cout << "Enter string: ";
    cin >> str;
    cout << "Length of string: " << strlen(str);
}
void fibonacci()
{
    int n1 = 0, n2 = 1, nextTerm = 0, n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << n1 << " " << n2 << " ";
    nextTerm = n1 + n2;
    n1 = n2;
    n2 = nextTerm;
    for (int i = 3; i <= n; i++)
    {
        cout << nextTerm << " ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int gcd()
{
    int n1, n2, i, gcd;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    cout << gcd;
    return gcd;
}
int lcm()
{
    int n1, n2, min, lcm;
    cout << "Enter 2 positive integer: ";
    cin >> n1 >> n2;
    min = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (min % n1 == 0 && min % n2 == 0)
        {
            lcm = min;
            break;
        }
        ++min;
    }
    return lcm;
}
void textpyramid()
{
    string mystr, seperator;
    int cycle = 1;
    cin >> mystr >> seperator >> cycle;
    cout << mystr << endl;
    for (int i = 0; i < cycle; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << mystr << seperator;
        }
        cout << mystr << endl;
    }
}
void wave()
{
    string line[5] = {
        {"--*-----"},
        {"-*-*----"},
        {"*---*---"},
        {"-----*-*"},
        {"------*-"}};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << line[i];
        }
        cout << endl;
    }
}
void stuck()
{
    struct student
    {
        char name[20];
        int id;
        int year;
        float gpa;
        int number;
        int height;
    };
    struct student mystudent = {"Panu", 06456463, 63, 3.17, 10, 172};
    cout << mystudent.name << mystudent.id << mystudent.year << mystudent.gpa << mystudent.number << mystudent.height;
}
void structdemo()
{
    typedef int INTEGER;
    INTEGER a = 3;
    cout << a << endl;
}
void struckin()
{
    struct test
    {
        int a;
        char b;
        float c;
        string d;
        double e;
        bool f;
    };
    struct test t1;
    cin >> t1.a >> t1.b >> t1.c >> t1.d >> t1.e >> t1.f;
    // struct test t2 = {2,'B',2.2,"BBB"};
    // struct test t3 = {3,'C',3.3,"CCC"};
    cout << "Structure Test\n"
         << t1.a << "\t" << t1.b << "\t" << t1.c << "\t" << t1.d << "\t" << t1.e << "\t" << t1.f << endl;
    // << t2.a << "\t" << t2.b << "\t" << t2.c << "\t" << t2.d << endl
    // << t3.a << "\t" << t3.b << "\t" << t3.c << "\t" << t3.d << endl;
}
void structcopy()
{
    struct test
    {
        int a;
        char b;
        float c;
        string d;
    };
    struct test t1 = {1, 'A', 1.1, "AAA"};
    struct test t2 = {2, 'B', 2.2, "bbb"};
    cout << "Test copy struct\nBefore copy\n"
         << "t1.a = " << t1.a << "\tt1.b = " << t1.b << "\tt1.c = " << t1.c << "\tt1.d = " << t1.d << "\n"
         << "t2.a = " << t2.a << "\tt2.b = " << t2.b << "\tt2.c = " << t2.c << "\tt2.d = " << t2.d << "\n";
    t2 = t1;
    cout << "After copy t1 to t2\n"
         << "t1.a = " << t1.a << "\tt1.b = " << t1.b << "\tt1.c = " << t1.c << "\tt1.d = " << t1.d << "\n"
         << "t2.a = " << t2.a << "\tt2.b = " << t2.b << "\tt2.c = " << t2.c << "\tt2.d = " << t2.d << "\n";
}
void bmi()
{
    struct bmi
    {
        char name[16];
        char surname[20];
        float height;
        float weight;
        float bmi;
        char answer[14];
    };
    bmi BMI;
    cout << "===== Enter student data =====\nName : ";
    cin >> BMI.name;
    cout << "Surname : ";
    cin >> BMI.surname;
    cout << "Height (m) : ";
    cin >> BMI.height;
    cout << "Weight (Kg) : ";
    cin >> BMI.weight;
    BMI.bmi = BMI.weight / pow(BMI.height, 2);
    BMI.answer[14] = (BMI.bmi <= 25 && BMI.bmi >= 20) ? 'Normal BMI' : 'Dangerous BMI';
    cout << "========== BMI result ==========\nName\t\tSurname\t\tweight\tHeight\tBMI\tanswer\n"
         << BMI.name << "\t\t" << BMI.surname << "\t\t" << BMI.weight << "\t" << BMI.height << "\t" << BMI.bmi << "\t" << BMI.answer
         << "\n========== End result ==========";
}
void emplolyee()
{
    struct employee
    {
        string id;
        string name;
        string pos;
        string depart;
        int salary;
    };
    employee emp[10] = {{"10000", "Sa-art  ", "IT Manager         ", "IT-Planning",30000},
              {"10001", "Sakol   ", "Programmer         ", "IT Planning",13000},
              {"10002", "Savitree", "Admin              ", "IT-Planning",10000},
              {"80001", "Satid   ", "User support       ", "Support    ",11000},
              {"80002", "Savinee ", "Project Coordinater", "IT-Planning",13000},
              {"80003", "Saithip ", "Admin              ", "Support    ",10000},
              {"10003", "Sartra  ", "User Support       ", "Support    ",11000},
              {"10004", "Sasikarn", "System Analyst     ", "IT-Planning",15000},
              {"80004", "Sasaluk ", "System Analyst     ", "IT-Planning",15000},
              {"10005", "Samaporn", "Programmer         ", "IT-Planning",13000}};
    cout << "Temporary Employee\n";
    for (int i = 0; i < 10; i++)
    {
        if (emp[i].id[0] == '8')
        {
            cout << emp[i].id << "\t" << emp[i].name << "\t" << emp[i].pos << "\t" << emp[i].depart << "\t" << emp[i].salary << endl;
        }
    }
}
void numberbeforereachzero()
{
    int a[10] = {4,5,8,9,8,1,0,1,9,3};
    // pointer
    int *pointer = &a[0];
    for (int i = 0; i < 10; i++)
    {
        if(*pointer == 0)
        {
            break;
        }
        cout << *pointer << " ";
        pointer++;
    }
    cout << "\n";
    cout << pointer-a;
}
int main()
{
    numberbeforereachzero();
    return 0;
}
