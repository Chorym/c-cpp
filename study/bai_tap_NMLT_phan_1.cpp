#include <iostream>

using namespace std;

void question1(int inputA); void question2(int inputA); void question3(int inputA); void question4(int inputA); void question5(int inputA);
void question6(int inputA); void question7(int inputA); void question8(int inputA); void question9(int inputA); void question10(int inputA, int inputB);
void question11(int inputA); void question12(int inputA); void question13(int inputA); void question14(int inputA); void question15(int inputA);
void question16(int inputA); void question17(int inputA); void question18(int inputA); void question19(int inputA);

int main()
{
    int questionNumber, inputA, inputB;
    cout << "Choose your question: ";
    cin >> questionNumber;
    cout << "Input a: ";
    cin >> inputA;
    switch (questionNumber)
    {
        case 1:
            question1(inputA);
            break;
        case 2:
            question2(inputA);
            break;
        case 3:
            question3(inputA);
            break;
        case 4:
            question4(inputA);
            break;
        case 5:
            question5(inputA);
            break;
        case 6:
            question6(inputA);
            break;
        case 7:
            question7(inputA);
            break;
        case 8:
            question8(inputA);
            break;
        case 9:
            question9(inputA);
            break;
        case 10:
            cout << "Input b: ";
            cin >> inputB;
            question10(inputA, inputB);
            break;
        case 11:
            question11(inputA);
            break;
        case 12:
            question12(inputA);
            break;
        default:
            cout << "Choose an existing question.";
            break;
    }
    return 0;
}

void question1(int inputA)
{   
    cout << "S(n) = 1 + 2 + 3 + ... + n" << endl;
    int increment = 0, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += increment;
    }
    cout << "Answer = " << answer;
}

void question2(int inputA)
{
    cout << "S(n) = 1^2 + 2^2 + ... + n^2" << endl;
    int increment = 0, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += increment*increment;
    }
    cout << "Answer = " << answer;
}

void question3(int inputA)
{
    cout << "S(n) = 1 + 1/2 + 1/3 + ... + 1/n" << endl;
    float increment = 0, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += 1/increment;
    }
    cout << "Answer = " << answer;
}

void question4(int inputA)
{
    cout << "S(n) = 1/2 + 1/4 + ... + 1/2n" << endl;
    float increment = 0, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += 1/(2*increment);
    }
    cout << "Answer = " << answer;
}

void question5(int inputA)
{
    cout << "S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)" << endl;
    float increment = -1, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += 1/(2*increment+1);
    }
    cout << "Answer = " << answer;
}

void question6(int inputA)
{
    cout << "S(n) = 1/1*2 + 1/2*3 + ... + (1/n)(n + 1)" << endl;
    float increment = 0, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += (1/increment)*(increment+1);
    }
    cout << "Answer = " << answer;
}

void question7(int inputA)
{
    cout << "S(n) = 1/2 + 2/3 + 3/4 + ... + n / n + 1" << endl;
    float increment = 0, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += increment/(increment+1);
    }
    cout << "Answer = " << answer;
}

void question8(int inputA)
{
    cout << " 1/2 + 3/4 + 5/6 + ... + (2n + 1)/(2n + 2)" << endl;
    float increment = 0, answer = 0;
    while (increment < inputA)
    {
        increment ++;
        answer += (2*increment+1)/(2*increment+2);
    }
    cout << "Answer = " << answer;
}

void question9(int inputA)
{
    cout << "T(n) + 1 x 2 x 3 x ... x N" << endl;
    float increment = 0, answer = 1;
    while (increment < inputA)
    {
        increment ++;
        answer *= increment;
    }
    cout << "Answer = " << answer;
}

void question10(int inputA, int inputB)
{
    cout << "T(x, n) = x^n" << endl;
    int answer = 1;
    while (inputB > 0)
    {
        answer *= inputA;
        inputB--;
    }
    cout << "Answer = " << answer;
}

void question11(int inputA)
{
    cout << "S(n) = 1 + 1*2 + 1*2*3 + ... + 1.2.3...*N" << endl;
    float increment = 1, incrementProduct = 1, answer = 0;
    while (inputA > 0)
    {
        increment = inputA;
        incrementProduct = 1;
        while (increment > 0)
        {
            incrementProduct *= increment;
            increment--;
        }
        answer += incrementProduct;
        inputA--;
    }
    cout << "Answer = " << answer;
}

void question12(int inputA)
{
    /*
    cout << "S(n) = x + x^2 + x^3 + ... + x^n" << endl;
    float increment = 1, incrementProduct = 1, answer = 0;
    while (inputA > 0)
    {
        increment = 1;
        incrementProduct = 1;
        while (increment > 0)
        {
            incrementProduct *= increment;
        }
        answer += incrementProduct;
        inputA--;
    }
    cout << "Answer = " << answer;
    */
}
