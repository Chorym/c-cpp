#include <iostream>
#include <math.h>

using namespace std;

int factorial(int a)
{
    int answer = 1;
    for(int i = a; i > 0; i--)
    {
        answer *= i;
    }
    return answer;
}

void question1()
{   
    cout << "S(n) = 1 + 2 + 3 + ... + n" << endl;
    int increment = 0, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += increment;
    }
    cout << "Answer = " << answer << endl;
}

void question2()
{
    cout << "S(n) = 1^2 + 2^2 + ... + n^2" << endl;
    int increment = 0, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += increment*increment;
    }
    cout << "Answer = " << answer << endl;
}

void question3()
{
    cout << "S(n) = 1 + 1/2 + 1/3 + ... + 1/n" << endl;
    double increment = 0, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += 1/increment;
    }
    cout << "Answer = " << answer << endl;
}

void question4()
{
    cout << "S(n) = 1/2 + 1/4 + ... + 1/2n" << endl;
    float increment = 0, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += 1/(2*increment);
    }
    cout << "Answer = " << answer << endl;
}

void question5()
{
    cout << "S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)" << endl;
    float increment = -1, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += 1/(2*increment+1);
    }
    cout << "Answer = " << answer << endl;
}

void question6()
{
    cout << "S(n) = 1/1*2 + 1/2*3 + ... + (1/n)(n + 1)" << endl;
    float increment = 0, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += (1/increment)*(increment+1);
    }
    cout << "Answer = " << answer << endl;
}

void question7()
{
    cout << "S(n) = 1/2 + 2/3 + 3/4 + ... + n / n + 1" << endl;
    float increment = 0, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += increment/(increment+1);
    }
    cout << "Answer = " << answer << endl;
}

void question8()
{
    cout << " 1/2 + 3/4 + 5/6 + ... + (2n + 1)/(2n + 2)" << endl;
    float increment = 0, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer += (2*increment+1)/(2*increment+2);
    }
    cout << "Answer = " << answer << endl;
}

void question9()
{
    cout << "T(n) + 1 x 2 x 3 x ... x N" << endl;
    float increment = 0, answer = 1, input;
    cout << "Input n: ";
    cin >> input;
    while (increment < input)
    {
        increment ++;
        answer *= increment;
    }
    cout << "Answer = " << answer << endl;
}

void question10()
{
    cout << "T(x, n) = x^n" << endl;
    int answer = 1, inputX, inputN;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    while (inputN > 0)
    {
        answer *= inputX;
        inputN--;
    }
    cout << "Answer = " << answer << endl;
}

void question11()
{
    cout << "S(n) = 1 + 1*2 + 1*2*3 + ... + 1.2.3...*N" << endl;
    int increment = 1, incrementProduct = 1, answer = 0, input;
    cout << "Input n: ";
    cin >> input;
    while (input > 0)
    {
        increment = input;
        incrementProduct = 1;
        while (increment > 0)
        {
            incrementProduct *= increment;
            increment--;
        }
        answer += incrementProduct;
        input--;
    }
    cout << "Answer = " << answer << endl;
}

void question12()
{
    cout << "S(x,n) = x + x^2 + x^3 + ... + x^n" << endl;
    int incrementProduct = 1, answer = 0, inputX, inputN;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    while (inputN > 0)
    {
        incrementProduct = 1;
        for(int i = 0; i < inputN; i++)
        {
            incrementProduct *= inputX;
        }
        answer += incrementProduct;
        inputN--;
    }
    cout << "Answer = " << answer << endl;
}

void question13()
{
    cout << "S(x,n) = x^2 + x^4 + ... + x^2n" << endl;
    int incrementProduct = 1, answer = 0, inputX, inputN;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    while (inputN > 0)
    {
        incrementProduct = 1;
        for(int i = 0; i < inputN; i++)
        {
            incrementProduct *= inputX * inputX;
        }
        answer += incrementProduct;
        inputN--;
    }
    cout << "Answer = " << answer << endl;
}

void question14()
{
    cout << "S(x,n) = x + x^3 + x^5 + ... + x^2n + 1" << endl;
    int incrementProduct = 1, answer = 0, inputX, inputN;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    answer = inputX;
    while (inputN > 0)
    {
        incrementProduct = 1;
        for(int i = 0; i < inputN; i++)
        {
            incrementProduct *= inputX * inputX;
            if(i == inputN-1)
            {
                incrementProduct *= inputX;
            }
        }
        answer += incrementProduct;
        inputN--;
    }
    cout << "Answer = " << answer << endl;
}

void question15()
{
    cout << "S(n) = 1/1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ... + 1/ (1 + 2 + 3 + ... + N)" << endl;
    float input, incrementSum = 0, answer;
    cout << "Input n: ";
    cin >> input;
    for(int i = 1; i <= input; i++)
    {
        incrementSum += i;
        answer += 1/incrementSum;
    }
    cout << "Answer = " << answer << endl;
}

void question16()
{
    cout << "S(x, n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + ... + x^n/1 + 2 + 3 + ... + N" << endl;
    float inputX, inputN, incrementSum, answer;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    for(int i = 1; i <= inputN; i++)
    {
        incrementSum += i;
        float exponentsProduct = pow(inputX, i)/incrementSum;
        answer += exponentsProduct;
    }
    cout << "Answer = " << answer << endl;
}

void question17()
{
    cout << "S(x, n) = x + x^2/2! + x^3/3! + ... + x^n/n!" << endl;
    float inputX, inputN, factorial = 1, answer;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    for(int i = 1; i <= inputN; i++)
    {
        float exponentsProduct = pow(inputX, i) / (factorial *= i);
        answer += exponentsProduct;
    }
    cout << "Answer = " << answer << endl;
}

void question18()
{
    cout << "S(x, n) = 1 + x^2/2! + x^4/4! + ... + x^2n/(2n)!" << endl;
    float inputX, inputN, answer = 0;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    for(int i = 0; i <= inputN; i++)
    {
        float exponentsProduct = pow(inputX, 2*i) / factorial(2*i);
        answer += exponentsProduct;
    }
    cout << "Answer = " << answer << endl;
}

void question19()
{
    cout << "1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!" << endl;
    float inputX, inputN, answer = 1;
    cout << "Input x: ";
    cin >> inputX;
    cout << "Input n: ";
    cin >> inputN;
    for(int i = 0; i <= inputN; i++)
    {
        float exponentsProduct = pow(inputX, 2*i+1) / factorial(2*i+1);
        answer += exponentsProduct;
    }
    cout << "Answer = " << answer << endl;
}

void question20()
{
    cout << "liet ke cac uoc so cua n" << endl;
    int input;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0)
        {
            cout << i << ", ";
        }
    }
}

void question21()
{
    cout << "tong cac uoc so cua n" << endl;
    int input, sum;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0)
        {
            cout << i << ", ";
            sum += i;
        }
    }
    cout << endl;
    cout << "tong cac uoc cua n = " << sum << endl;
}

void question22()
{
    cout << "tich cac uoc so cua n" << endl;
    int input, product = 1;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0)
        {
            cout << i << ", ";
            product *= i;
        }
    }
    cout << endl;
    cout << "tich cac uoc cua n = " << product << endl;
}

void question23()
{
    cout << "so luong cac uoc so cua n" << endl;
    int input, count;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0)
        {
            cout << i << ", ";
            count += 1;
        }
    }
    cout << endl;
    cout << "so luong cac uoc cua n = " << count << endl;
}

void question24()
{
    cout << "cac uoc so le cua n" << endl;
    int input;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so le cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0 && i % 2 == 1)
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}

void question25()
{
    cout << "tong cac uoc so chan cua n" << endl;
    int input, sum;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so chan cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0 && i % 2 == 0)
        {
            cout << i << ", ";
            sum += i;
        }
    }
    cout << endl;
    cout << "tong cac uoc so chan cua n: " << sum << endl;
}

void question26()
{
    cout << "tich cac uoc so le cua n" << endl;
    int input, product = 1;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so le cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0 && i % 2 == 1)
        {
            cout << i << ", ";
            product *= i;
        }
    }
    cout << endl;
    cout << "tich cac uoc so le cua n: " << product << endl;
}

void question27()
{
    cout << "so luong cac uoc so chan cua n" << endl;
    int input, count;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0)
        {
            cout << i << ", ";
        }
    }
    cout << endl;
    cout << "cac uoc chan so cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0 && i % 2 == 0)
        {
            cout << i << ", ";
            count += 1;
        }
    }
    cout << endl;
    cout << "so luong cac uoc chan cua n = " << count << endl;
}

void question28()
{
    cout << "tong cac uoc so cua n nho hon n" << endl;
    int input, sum;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so cua n: ";
    for(int i = 1; i < input; i++)
    {
        if(input % i == 0)
        {
            cout << i << ", ";
            sum += i;
        }
    }
    cout << input;
    cout << endl;
    cout << "tong cac uoc cua n nho hon n = " << sum << endl;
}

void question29()
{
    cout << "uoc so le lon nhat cua n" << endl;
    int input, max;
    cout << "Input n: ";
    cin >> input;
    cout << "cac uoc so le cua n: ";
    for(int i = 1; i <= input; i++)
    {
        if(input % i == 0 && i % 2 == 1)
        {
            cout << i << ", ";
            max = i;
        }
    }
    cout << endl;
    cout << "uoc le lon nhat cua n: " << max << endl;
}

void question30()
{
    cout << "kiem tra so n co phai so hoan thien" << endl;
    int input, sum;
    cout << "Input n: ";
    cin >> input;
    for(int i = 1; i < input; i++)
    {
        if(input % i == 0)
        {
            sum += i;
        }
    }
    if(sum == input)
    {
        cout << "so n la so hoan thien";
    }
    else
    {
        cout << "so n ko phai la so hoan thien";
    }
}

void question31()
{
    cout << "kiem tra so n co phai so nguyen to" << endl;
    int input;
    bool isPrime;
    cout << "Input n: ";
    cin >> input;
    if (input == 0 || input == 1)
    {
        isPrime = false;
    }
    else
    {
        for(int i = 0; i < input/2; i++)
        {
            if(input % i == 1)
            {
                isPrime = true;
            }
            else
            {
                isPrime = false;
            }
        }
    }
    if (isPrime)
    {
        cout << "n la so nguyen to" << endl;
    }
    else
    {
        cout << "n ko la so nguyen to" << endl;
    }
}

void question32()
{

}

void question33()
{

}

void question34()
{

}

void question35()
{

}

void question36()
{

}

void question37()
{

}

void question38()
{

}

void question39()
{

}

void question40()
{

}

int main()
{
    int questionNumber;
    cout << "Choose your question: ";
    cin >> questionNumber;
    switch (questionNumber)
    {
        case 1:
            question1(); break;
        case 2:
            question2(); break;
        case 3:
            question3(); break;
        case 4:
            question4(); break;
        case 5:
            question5(); break;
        case 6:
            question6(); break;
        case 7:
            question7(); break;
        case 8:
            question8(); break;
        case 9:
            question9(); break;
        case 10:
            question10(); break;
        case 11:
            question11(); break;
        case 12:
            question12(); break;
        case 13:
            question13(); break;
        case 14:
            question14(); break;
        case 15:
            question15(); break;
        case 16:
            question16(); break;
        case 17:
            question17(); break;
        case 18:
            question18(); break;
        case 19:
            question19(); break;
        case 20:
            question20(); break;
        case 21:
            question21(); break;
        case 22:
            question22(); break;
        case 23:
            question23(); break;
        case 24:
            question24(); break;
        case 25:
            question25(); break;
        case 26:
            question26(); break;
        case 27:
            question27(); break;
        case 28:
            question28(); break;
        case 29:
            question29(); break;
        case 30:
            question30(); break;
        case 31:
            question31(); break;
        case 32:
            question32(); break;
        case 33:
            question33(); break;
        case 34:
            question34(); break;
        case 35:
            question35(); break;
        case 36:
            question36(); break;
        case 37:
            question37(); break;
        case 38:
            question38(); break;
        case 39:
            question39(); break;
        case 40:
            question40(); break;
        default:
            cout << "Doesn't exist.";
    }
    return 0;
}
