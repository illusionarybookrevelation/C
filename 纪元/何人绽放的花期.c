// me:
/*
����дһ�δ��룬Ҫ����C����д���������£�
����һλ�С�������Ů�ӣ���ʹ��һ����Ϊ�����š��ļ��ܣ�
ʹ�����ĵ�����������Ϊ100�꣨�����ʱ������Ϊ20�꣩��
���ӵڶ��쿪ʼ����ÿ�����һ�꣬
һֱ���˵���ʹ�á����š�ʱ�����䣨Ҳ���Ǵ�100��ݼ���20�꣩��
�ȷ�˵����������2024��3��27��ʹ�á����š���
27���������������20��䵽��100�꣬Ҳ����������80�꣬
��28�տ�ʼ���ˣ�28�գ�99�ꣻ29�գ�98�ꣻ30�գ�97��......
�����𽥵ݼ������������ӣ�����һֱ�ݼ��ص�20�꣬
�����ڼ��꼸�¼�����ɻ���?
*/


// Gemini��
#include <stdio.h>
#include <string.h>
// �������ڽṹ��
typedef struct Date {
    int year;
    int month;
    int day;
} Date;

// ���塰�����Ľṹ��
typedef struct Person {
    char name[20];
    int age;
    Date useSkillDate;
} Person;

// ������������֮����������
int daysBetweenDates(Date startDate, Date endDate) {
    int days = 0;
    // ����ÿ����
    for (int year = startDate.year; year <= endDate.year; year++) {
        for (int month = (year == startDate.year ? startDate.month : 1);
             month <= (year == endDate.year ? endDate.month : 12); month++) {
            // ����ÿ���µ�������
            int daysInMonth = 31;
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                daysInMonth = 30;
            }
            else if (month == 2) {
                daysInMonth = 28;
                if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                    daysInMonth = 29;
                }
            }
            // �ۼ�����
            if (year == startDate.year && month == startDate.month) {
                days += daysInMonth - startDate.day + 1;
            }
            else if (year == endDate.year && month == endDate.month) {
                days += endDate.day;
            }
            else {
                days += daysInMonth;
            }
        }
    }
    return days;
}

// ģ�⡰����ʹ�á����š�����
void useSkill(Person* person) {
    // ��¼ʹ�ü��ܵ�����
    person->useSkillDate.year = 2024;
    person->useSkillDate.month = 3;
    person->useSkillDate.day = 27;

    // �������Ϊ100��
    person->age = 100;

    // �������������������
    int daysToRetreat = person->age - 20;

    // ģ���������
    for (int i = 0; i < daysToRetreat; i++) {
        // ��������һ��
        person->useSkillDate.day++;
        // ������ڳ�����������������·ݼ�һ����������Ϊ1
        if (person->useSkillDate.day > 31) {
            person->useSkillDate.day = 1;
            person->useSkillDate.month++;
        }
        // ����·ݳ���12������ݼ�һ���·�����Ϊ1
        if (person->useSkillDate.month > 12) {
            person->useSkillDate.month = 1;
            person->useSkillDate.year++;
        }
        // �����һ
        person->age--;
    }
}

int main() {
    // ���塰����
    Person person;
    strcpy(person.name, "��");
    person.age = 20;

    // ʹ�á����š�����
    useSkill(&person);

    // ��ӡ�����������
    printf("%s �� %d��%d��%d������������\n", person.name, person.useSkillDate.year,
           person.useSkillDate.month, person.useSkillDate.day);

    return 0;
}
