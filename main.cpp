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
    //1��Ů��ȡ����
    /*���׵�����*/
    string value_father_name;
    //*Ů��������*/
    string value_daughter_name;
    /*Ů���������·�*/
    int daughter_birth_month = 6;
    /*Ů��������date*/
    int daughter_birth_date = 28;
    //����ʣ�µĽ�Ǯ
    int father_money = 500;
    //�û�ѡ����Ů��Ҫ��ʲô
    int input = -1;
    //*Ů��������*/
    string value_daughter_constell;
    //Ů���Ļ�������
    array<int, 5>  value_arr_infos;
    //�������Ե��ۺϣ����������ж�
    int value_total_infos = 0;
    //5����������ߵ�ֵ
    int value_arr_max;
    //5����������ߵ�
    int max_index;
    //������������
    array<string, 5> artribute_names {"����", "����", "����", "����", "����"};
    //Ů�����ְλ������
    array<string, 5> position_names {"�帾","ħ��ʦ", "��Ů", "����", "�ư�Ů��"};

    /*����*/
    string constell_names[12][2] {
            {"ɽ����", "ˮƿ��"},
            {"ˮƿ��", "˫����"},
            {"˫����", "������"},
            {"������", "��ţ��"},
            {"��ţ��", "˫����"},
            {"˫����", "��з��"},
            {"��з��", "ʨ����"},
            {"ʨ����", "��Ů��"},
            {"��Ů��", "�����"},
            {"�����", "��Ы��"},
            {"��Ы��", "������"},
            {"������", "ɽ����"}
    };

    /*������Ϣ¼��*/
    cout << "���׵�������";
    cin >> value_father_name;
    cout << "Ů����������";
    cin >> value_daughter_name;
    cout << "Ů��������(MM DD): ";
    cin >> daughter_birth_month >> daughter_birth_date;

    /*ÿ���¿�����������*/
    int constell_date[12] {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    //����Ů��������
    value_daughter_constell = constell_names[daughter_birth_month - 1][daughter_birth_date / constell_date[daughter_birth_month - 1]];
    //��һ�λ��������Ϣ
    cout << "***************************************************" << endl;
    cout << "Ů������Ϣ��" << endl;
    cout << "������" << value_daughter_name << endl;
    cout << "���գ�1659-" << daughter_birth_month << "-" << daughter_birth_date << endl;
    cout << "������" << value_daughter_constell << endl;
    if(value_daughter_constell == "������"){
        value_arr_infos[0] = 80;
        value_arr_infos[1] = 15;
        value_arr_infos[2] = 15;
        value_arr_infos[3] = 11;
        value_arr_infos[4] = 21;

    } else if (value_daughter_constell == "��ţ��"){
        value_arr_infos[0] = 46;
        value_arr_infos[1] = 30;
        value_arr_infos[2] = 28;
        value_arr_infos[3] = 20;
        value_arr_infos[4] = 29;
    } else if (value_daughter_constell == "˫����"){
        value_arr_infos[0] = 50;
        value_arr_infos[1] = 35;
        value_arr_infos[2] = 23;
        value_arr_infos[3] = 8;
        value_arr_infos[4] = 20;
    } else if (value_daughter_constell == "��з��"){
        value_arr_infos[0] = 40;
        value_arr_infos[1] = 31;
        value_arr_infos[2] = 33;
        value_arr_infos[3] = 17;
        value_arr_infos[4] = 33;
    } else if (value_daughter_constell == "ʨ����"){
        value_arr_infos[0] = 85;
        value_arr_infos[1] = 9;
        value_arr_infos[2] = 11;
        value_arr_infos[3] = 20;
        value_arr_infos[4] = 37;
    } else if (value_daughter_constell == "��Ů��"){
        value_arr_infos[0] = 35;
        value_arr_infos[1] = 28;
        value_arr_infos[2] = 36;
        value_arr_infos[3] = 18;
        value_arr_infos[4] = 40;
    } else if (value_daughter_constell == "�����"){
        value_arr_infos[0] = 42;
        value_arr_infos[1] = 33;
        value_arr_infos[2] = 25;
        value_arr_infos[3] = 32;
        value_arr_infos[4] = 28;
    } else if (value_daughter_constell == "��Ы��"){
        value_arr_infos[0] = 50;
        value_arr_infos[1] = 25;
        value_arr_infos[2] = 40;
        value_arr_infos[3] = 18;
        value_arr_infos[4] = 17;
    } else if (value_daughter_constell == "������"){
        value_arr_infos[0] = 57;
        value_arr_infos[1] = 31;
        value_arr_infos[2] = 15;
        value_arr_infos[3] = 19;
        value_arr_infos[4] = 20;
    } else if (value_daughter_constell == "Ħ����"){
        value_arr_infos[0] = 56;
        value_arr_infos[1] = 21;
        value_arr_infos[2] = 16;
        value_arr_infos[3] = 25;
        value_arr_infos[4] = 23;
    } else if (value_daughter_constell == "ˮƿ��"){
        value_arr_infos[0] = 43;
        value_arr_infos[1] = 43;
        value_arr_infos[2] = 20;
        value_arr_infos[3] = 23;
        value_arr_infos[4] = 17;
    } else if (value_daughter_constell == "˫����"){
        value_arr_infos[0] = 41;
        value_arr_infos[1] = 20;
        value_arr_infos[2] = 29;
        value_arr_infos[3] = 23;
        value_arr_infos[4] = 32;
    }

    //��Ϸ��ѭ��
    //����Ϸ��Ϊһ�꣬12���¡�
    for(int i = 0; i < 12; i++)
    {
        //��ʾ״̬
        //��ʾ����
        if(i + 6 > 12)
        {
            cout << "������1660��" << i - 6 << "��, ʣ��" << 12 - i << "��������Ů����" << endl;
        }
        else
        {
            cout << "������1659��" << 6 + i << "��, ʣ��" << 12 - i << "��������Ů����" << endl;
        }

        //��ʾŮ����״̬
        for(int j = 0; j < 5; j++)
        {
            cout << artribute_names[j] << ":" << setw(4) << value_arr_infos[j] << endl;
        }
        //��ʾʣ�µĽ�Ǯ�����׵Ľ�Ǯ��
        cout << "��Ǯ:" << father_money << endl;
        //��Ҳ���
        cout << "��ѡ������Ҫ��ʲô��\n" << "1. ѧϰ�书\n2. ��˽��\n3. ��Ů������\n4. �浵\n5. ����" << endl;
        cout << "�����룺" << endl;
        cin >> input;
        srand(time(NULL));
        switch(input)
        {
            case 1://ѧϰ�书����������50-70����������
            {
                if(father_money >= 60)
                {
                    father_money -= 50;
                    cout << "��� - " << 60 << endl;
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
                    cout << "��Ҳ��㣬ǿ�ƴ򹤣�" << endl;
                    int temp0 = (rand() % 20 + 90);
                    father_money += temp0;
                    cout << "��� + " << temp0 << endl;
                    cout << "***************************************************" << endl;
                }
                break;
            }
            case 2://��˽��
                if(father_money >= 70)
                {
                    father_money -= 70;
                    cout << "��� - " << 70 << endl;
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
                    cout << "��Ҳ��㣬ǿ�ƴ򹤣�" << endl;
                    int temp0 = (rand() % 20 + 90);
                    father_money += temp0;
                    cout << "��� + " << temp0 << endl;
                    cout << "***************************************************" << endl;
                }
                break;
            case 3: //��Ů������
            {
                cout << "1. �����Ľ���Ů����\n2. ��Ů��100����㻨Ǯ��" << endl;
                cout << "�����룺" << endl;
                cin >> input;
                switch(input)
                {
                    case 1://�����Ľ���Ů����Ů���ĵ���+10-20
                    {
                        int temp0 = (rand() % 10 + 10);
                        value_arr_infos[3] += temp0;
                        cout << artribute_names[3] << " + " << temp0 << endl;
                        cout << "***************************************************" << endl;
                        break;
                    }
                    case 2://��Ů��100��ҵ��㻨Ǯ��������������15-25
                    {
                        if(father_money >= 100)
                        {
                            father_money -= 100;
                            cout << "��� - " << 100 << endl;
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
                            cout << "��Ҳ��㣬ǿ�ƴ򹤣�" << endl;
                            int temp0 = (rand() % 20 + 90);
                            father_money += temp0;
                            cout << "��� + " << temp0 << endl;
                            cout << "***************************************************" << endl;
                        }
                        break;
                    }
                    default:
                    {
                        cout << "�������������Ч��Ĭ�������Ľ���Ů����" << endl;
                        int temp0 = (rand() % 10 + 10);
                        value_arr_infos[3] += temp0;
                        cout << artribute_names[3] << " + " << temp0 << endl;
                        cout << "***************************************************" << endl;
                        break;
                    }
                }
            }
                break;
            case 4://�浵
                break;
            case 5://����
                break;
            default:
                break;
        }
    }
    //12���º󣬸���Ů�������Ծ���Ů����δ����λ�ӡ�
    for(int i = 0; i < 3 ; i++)
    {
        cout << "***************************************************" << endl;
    }
    //���Ů����������
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
    //�����������Ե��ܺ�
    for(int i = 0; i < 5; i++)
    {
        value_total_infos += value_arr_infos[i];
    }
    //����5���������Ǹ�������ߣ�
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
    //�ж�Ů���ĳɾ�
    if(value_total_infos >= 2000)
    {
        cout << "��ΪŮ����\n��Ϸ������" << endl;
    }
    else if (value_total_infos >= 1800 && value_total_infos < 2000)
    {
        cout << "��Ϊ������\n��Ϸ������" << endl;
    }
    else if(value_total_infos >= 1600 && value_total_infos < 1800)
    {
        cout << "��ΪŮ������\n��Ϸ������" << endl;
    }
    else if(value_total_infos >= 1200 && max_index == 1)
    {
        cout << "��Ϊ�ʼ�ѧԺ�ܲã�\n��Ϸ������" << endl;
    }
    else if(value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 4)
    {
        cout << "��Ϊ������\n��Ϸ������" << endl;
    } else if (value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 0)
    {
        cout << "��Ϊ������ʿ�ų���\n��Ϸ������" << endl;
    } else if (value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 3)
    {
        cout << "��Ϊ�߼���˾��\n��Ϸ������" << endl;
    } else if (value_total_infos <= 1600 && value_total_infos >= 1200 && max_index == 2)
    {
        cout << "��Ϊ�����ĳ�����\n��Ϸ������" << endl;
    } else if(value_total_infos < 1200){
        srand(time(NULL));
        int temp_index = rand() % 5 + 0;
        cout << "��Ϊ" << position_names[temp_index] << "!\n��Ϸ������" << endl;
    }



    




    return 0;
}
