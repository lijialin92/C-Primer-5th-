#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <array>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    cout << left;
    //1父女儿取名字
    /*父亲的姓名*/
    string value_father_name;
    //*女儿的姓名*/
    string value_daughter_name;
    /*女儿的生日月份*/
    int daughter_birth_month = 6;
    /*女儿的生日date*/
    int daughter_birth_date = 28;
    //父亲剩下的金钱
    int father_money = 500;
    //用户选择本月女儿要干什么
    int input = -1;
    //*女儿的星座*/
    string value_daughter_constell;
    //女儿的基本属性
    array<int, 5>  value_arr_infos;
    //所有属性的综合，用于最后的判断
    int value_total_infos = 0;
    //5个属性总最高的值
    int value_arr_max;
    //5个属性中最高的
    int max_index;
    //基本属性名字
    array<string, 5> artribute_names {"体力", "智力", "魅力", "道德", "气质"};
    //女儿最后职位的数组
    array<string, 5> position_names {"村妇","魔法师", "修女", "作家", "酒吧女仆"};

    /*星座*/
    string constell_names[12][2] {
            {"山羊座", "水瓶座"},
            {"水瓶座", "双鱼座"},
            {"双鱼座", "白羊座"},
            {"白羊座", "金牛座"},
            {"金牛座", "双子座"},
            {"双子座", "巨蟹座"},
            {"巨蟹座", "狮子座"},
            {"狮子座", "处女座"},
            {"处女座", "天秤座"},
            {"天秤座", "天蝎座"},
            {"天蝎座", "射手座"},
            {"射手座", "山羊座"}
    };

    /*基本信息录入*/
    cout << "父亲的姓名：";
    cin >> value_father_name;
    cout << "女儿的姓名：";
    cin >> value_daughter_name;
    cout << "女儿的生日(MM DD): ";
    cin >> daughter_birth_month >> daughter_birth_date;

    /*每个月跨星座的日期*/
    int constell_date[12] {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    //计算女儿的星座
    value_daughter_constell = constell_names[daughter_birth_month - 1][daughter_birth_date / constell_date[daughter_birth_month - 1]];
    //第一次基本输出信息
    cout << "***************************************************" << endl;
    cout << "女儿的信息：" << endl;
    cout << "姓名：" << value_daughter_name << endl;
    cout << "生日：1659-" << daughter_birth_month << "-" << daughter_birth_date << endl;
    cout << "星座：" << value_daughter_constell << endl;
    if(value_daughter_constell == "白羊座"){
        value_arr_infos[0] = 80;
        value_arr_infos[1] = 15;
        value_arr_infos[2] = 15;
        value_arr_infos[3] = 11;
        value_arr_infos[4] = 21;

    } else if (value_daughter_constell == "金牛座"){
        value_arr_infos[0] = 46;
        value_arr_infos[1] = 30;
        value_arr_infos[2] = 28;
        value_arr_infos[3] = 20;
        value_arr_infos[4] = 29;
    } else if (value_daughter_constell == "双子座"){
        value_arr_infos[0] = 50;
        value_arr_infos[1] = 35;
        value_arr_infos[2] = 23;
        value_arr_infos[3] = 8;
        value_arr_infos[4] = 20;
    } else if (value_daughter_constell == "巨蟹座"){
        value_arr_infos[0] = 40;
        value_arr_infos[1] = 31;
        value_arr_infos[2] = 33;
        value_arr_infos[3] = 17;
        value_arr_infos[4] = 33;
    } else if (value_daughter_constell == "狮子座"){
        value_arr_infos[0] = 85;
        value_arr_infos[1] = 9;
        value_arr_infos[2] = 11;
        value_arr_infos[3] = 20;
        value_arr_infos[4] = 37;
    } else if (value_daughter_constell == "处女座"){
        value_arr_infos[0] = 35;
        value_arr_infos[1] = 28;
        value_arr_infos[2] = 36;
        value_arr_infos[3] = 18;
        value_arr_infos[4] = 40;
    } else if (value_daughter_constell == "天秤座"){
        value_arr_infos[0] = 42;
        value_arr_infos[1] = 33;
        value_arr_infos[2] = 25;
        value_arr_infos[3] = 32;
        value_arr_infos[4] = 28;
    } else if (value_daughter_constell == "天蝎座"){
        value_arr_infos[0] = 50;
        value_arr_infos[1] = 25;
        value_arr_infos[2] = 40;
        value_arr_infos[3] = 18;
        value_arr_infos[4] = 17;
    } else if (value_daughter_constell == "射手座"){
        value_arr_infos[0] = 57;
        value_arr_infos[1] = 31;
        value_arr_infos[2] = 15;
        value_arr_infos[3] = 19;
        value_arr_infos[4] = 20;
    } else if (value_daughter_constell == "摩羯座"){
        value_arr_infos[0] = 56;
        value_arr_infos[1] = 21;
        value_arr_infos[2] = 16;
        value_arr_infos[3] = 25;
        value_arr_infos[4] = 23;
    } else if (value_daughter_constell == "水瓶座"){
        value_arr_infos[0] = 43;
        value_arr_infos[1] = 43;
        value_arr_infos[2] = 20;
        value_arr_infos[3] = 23;
        value_arr_infos[4] = 17;
    } else if (value_daughter_constell == "双鱼座"){
        value_arr_infos[0] = 41;
        value_arr_infos[1] = 20;
        value_arr_infos[2] = 29;
        value_arr_infos[3] = 23;
        value_arr_infos[4] = 32;
    }

    //游戏主循环
    //简化游戏变为一年，12个月。
    for(int i = 0; i < 12; i++)
    {
        //显示状态
        //显示日期
        if(i + 6 > 12)
        {
            cout << "现在是1660年" << i - 6 << "月, 剩下" << 12 - i << "个月培养女儿。" << endl;
        }
        else
        {
            cout << "现在是1659年" << 6 + i << "月, 剩下" << 12 - i << "个月培养女儿。" << endl;
        }

        //显示女儿的状态
        for(int j = 0; j < 5; j++)
        {
            cout << artribute_names[j] << ":" << setw(4) << value_arr_infos[j] << endl;
        }
        //显示剩下的金钱（父亲的金钱）
        cout << "金钱:" << father_money << endl;
        //玩家操作
        cout << "请选择现在要干什么。\n" << "1. 学习武功\n2. 上私塾\n3. 与女儿交流\n4. 存档\n5. 读档" << endl;
        cout << "请输入：" << endl;
        cin >> input;
        srand(time(NULL));
        switch(input)
        {
            case 1://学习武功，体力增加50-70；魅力增加
            {
                if(father_money >= 60)
                {
                    father_money -= 50;
                    cout << "金币 - " << 60 << endl;
                    int temp1 = (rand() % 10 + 20);
                    int temp2 = (rand() % 10 + 20);
                    int temp3 = (rand() % 10 + 10);
                    value_arr_infos[0] += temp1;
                    value_arr_infos[2] += temp2;
                    value_arr_infos[4] += temp3;
                    cout << artribute_names[0] << " + " << temp1 << '\t';
                    cout << artribute_names[2] << " + " << temp2 << '\t';
                    cout << artribute_names[4] << " + " << temp3 << '\t' << endl;
                    cout << "***************************************************" << endl;
                } else
                {
                    cout << "金币不足，强制打工！" << endl;
                    int temp0 = (rand() % 20 + 90);
                    father_money += temp0;
                    cout << "金币 + " << temp0 << endl;
                    cout << "***************************************************" << endl;
                }
                break;
            }
            case 2://上私塾
                if(father_money >= 70)
                {
                    father_money -= 70;
                    cout << "金币 - " << 70 << endl;
                    int temp1 = (rand() % 10 + 20);
                    int temp2 = (rand() % 10 + 20);
                    int temp3 = (rand() % 10 + 20);
                    value_arr_infos[1] += temp1;
                    value_arr_infos[3] += temp2;
                    value_arr_infos[4] += temp3;
                    cout << artribute_names[1] << " + " << temp1 << '\t';
                    cout << artribute_names[3] << " + " << temp2 << '\t';
                    cout << artribute_names[4] << " + " << temp3 << endl;
                    cout << "***************************************************" << endl;
                }else
                {
                    cout << "金币不足，强制打工！" << endl;
                    int temp0 = (rand() % 20 + 90);
                    father_money += temp0;
                    cout << "金币 + " << temp0 << endl;
                    cout << "***************************************************" << endl;
                }
                break;
            case 3: //与女儿交流
            {
                cout << "1. 严厉的教育女儿！\n2. 给女儿100金币零花钱。" << endl;
                cout << "请输入：" << endl;
                cin >> input;
                switch(input)
                {
                    case 1://严厉的教育女儿让女儿的道德+10-20
                    {
                        int temp0 = (rand() % 10 + 10);
                        value_arr_infos[3] += temp0;
                        cout << artribute_names[3] << " + " << temp0 << endl;
                        cout << "***************************************************" << endl;
                        break;
                    }
                    case 2://给女儿100金币的零花钱，所有属性增长15-25
                    {
                        if(father_money >= 100)
                        {
                            father_money -= 100;
                            cout << "金币 - " << 100 << endl;
                            int temp1 = rand() % 10 + 15;
                            int temp2 = rand() % 10 + 15;
                            int temp3 = rand() % 10 + 15;
                            int temp4 = rand() % 10 + 15;
                            int temp5 = rand() % 10 + 15;
                            value_arr_infos[0] += temp1;
                            value_arr_infos[1] += temp2;
                            value_arr_infos[2] += temp3;
                            value_arr_infos[3] += temp4;
                            value_arr_infos[4] += temp5;
                            cout << artribute_names[0] << " + " << temp1 << '\t';
                            cout << artribute_names[1] << " + " << temp2 << '\t';
                            cout << artribute_names[2] << " + " << temp3 << '\t';
                            cout << artribute_names[3] << " + " << temp4 << '\t';
                            cout << artribute_names[4] << " + " << temp5 << endl;
                            cout << "***************************************************" << endl;
                        } else
                        {
                            cout << "金币不足，强制打工！" << endl;
                            int temp0 = (rand() % 20 + 90);
                            father_money += temp0;
                            cout << "金币 + " << temp0 << endl;
                            cout << "***************************************************" << endl;
                        }
                        break;
                    }
                    default:
                    {
                        cout << "您输入的数字无效！默认严厉的教育女儿。" << endl;
                        int temp0 = (rand() % 10 + 10);
                        value_arr_infos[3] += temp0;
                        cout << artribute_names[3] << " + " << temp0 << endl;
                        cout << "***************************************************" << endl;
                        break;
                    }
                }
            }
                break;
            case 4://存档
                break;
            case 5://读档
                break;
            default:
                break;
        }
    }
    //12个月后，根据女儿的属性决定女儿的未来的位子。
    for(int i = 0; i < 3 ; i++)
    {
        cout << "***************************************************" << endl;
    }
    //输出女儿最后的属性
    for(string str : artribute_names)
    {
        cout << str << '\t';
    }
    cout << endl;
    for(int val : value_arr_infos)
    {
        cout << val << '\t';
    }
    cout << endl;
    //计算所以属性的总和
    for(int i = 0; i < 5; i++)
    {
        value_total_infos += value_arr_infos[i];
    }
    //计算5个属性中那个属性罪高；
    value_arr_max = value_arr_infos[0];
    for(int i = 1; i < 5; i++)
    {
        if(value_arr_max <= value_arr_infos[i])
        {
            max_index = i;
        } else
        {
            max_index = 0;
        }
    }
    //判断女儿的成就
    if(value_total_infos >= 2000)
    {
        cout << "成为女王！\n游戏结束。" << endl;
    }
    else if (value_total_infos >= 1800 && value_total_infos < 2000)
    {
        cout << "成为王妃！\n游戏结束。" << endl;
    }
    else if(value_total_infos >= 1600 && value_total_infos < 1800)
    {
        cout << "成为女将军！\n游戏结束。" << endl;
    }
    else if(value_total_infos >= 1200 && max_index == 1)
    {
        cout << "成为皇家学院总裁！\n游戏结束。" << endl;
    }
    else if(value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 4)
    {
        cout << "成为公主！\n游戏结束。" << endl;
    } else if (value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 0)
    {
        cout << "成为近卫骑士团长！\n游戏结束。" << endl;
    } else if (value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 3)
    {
        cout << "成为高级祭司！\n游戏结束。" << endl;
    } else if (value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 2)
    {
        cout << "成为国王的宠妃！\n游戏结束。" << endl;
    } else if(value_total_infos < 1200){
        srand(time(NULL));
        int temp_index = rand() % 5 + 0;
        cout << "成为" << position_names[temp_index] << "!\n游戏结束。" << endl;
    }



    




    return 0;
}
