#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //1.将单位为英寸的身高转换为英尺和英寸 1英尺(ft)=12英寸(in)
    const int Inches_per_foot = 12;
    cout << "Please enter your stature in inches:___\b\b\b";
    int stature;
    cin >> stature;
    cout << stature << " inches are " << stature / Inches_per_foot << " feet " << stature % Inches_per_foot << " inches." << endl;
    //2.计算BMI
    const double Meters_per_inch = 0.0254;
    const double Kilograms_per_pound = 0.4536;
    cout << "Enter your stature in feet and inches:__ __\b\b\b\b\b";
    int stature_foot;
    int stature_inch;
    cin >> stature_foot >> stature_inch;
    cout << "Enter your weight in pounds:___\b\b\b";
    int weight;
    cin >> weight;
    cout << "Your BMI = " << weight * Kilograms_per_pound / pow((Meters_per_inch * (stature_foot * Inches_per_foot + stature_inch)),2)
         << endl;
    //3.将单位为度、分、秒的维度转换为单位为度的维度值
    const double Minutes_per_degree = 60;
    const double Seconds_per_minute = 60;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:";
    double degrees;
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    double minutes;
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    double seconds;
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
         << degrees + minutes / Minutes_per_degree + seconds / Seconds_per_minute / Minutes_per_degree
         << " degrees" << endl;
    //4.输入秒数后转换成天、小时、分钟和秒
    const int seconds_per_minute = 60;
    const int Minutes_per_hour = 60;
    const int Hour_per_day = 24;
    cout << "Enter the number of seconds: ";
    long seconds_num;
    cin >> seconds_num;
    cout << seconds_num << " seconds = "
         << seconds_num / (seconds_per_minute * Minutes_per_hour * Hour_per_day) << " days, "
         << seconds_num / (seconds_per_minute * Minutes_per_hour) % Hour_per_day << " hours, "
         << (seconds_num / seconds_per_minute) % Minutes_per_hour << " minutes, "
         << seconds_num % seconds_per_minute << " seconds" << endl;
    //5.显示中国的人口占全球人口的百分比
    cout << "Enter the world's population:";
    long long world_population;
    cin >> world_population;
    cout << "Enter the population of China:";
    long long Chinese_population;
    cin >> Chinese_population;
    cout << "The population of China is " << double(Chinese_population) / double(world_population) * 100
         << "% of the world population." << endl;
    //6.计算汽车耗油量为一加仑的里程
    cout << "请输入驱车里程(英里)：";
    double dist;
    cin >> dist;
    cout << "请输入使用汽油量(加仑):";
    double gas;
    cin >> gas;
    cout << "汽车耗油量为一加仑的里程为 " << dist / gas << " 英里.";
    //7.将欧洲风格的耗油量(每100公里消耗的汽油量)转换为美国风格的耗油量(每加仑汽油跑的英里数)
    const double smiles_per_hmile = 62.14;
    const double litres_per_gallon = 3.875;
    cout << "请按欧洲风格输入汽车的耗油量(每100公里消耗的汽油量(升)):";
    double oil_consumption;
    cin  >> oil_consumption;
    cout << "转换为美国风格的耗油量为(每加仑汽油跑的英里数):"
         << 1.0 / oil_consumption * litres_per_gallon * smiles_per_hmile
         << " mpg" << endl;
    return 0;
}
