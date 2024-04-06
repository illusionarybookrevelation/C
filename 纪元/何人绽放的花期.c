// me:
/*
帮我写一段代码，要求用C语言写，描述如下：
假设一位叫“花”的女子，她使用一招名为“绽放”的技能，
使用完后的当天她年龄会变为100岁（假设此时她年龄为20岁），
并从第二天开始年龄每天回退一岁，
一直回退到她使用“绽放”时的年龄（也就是从100岁递减到20岁）。
比方说：“花”在2024年3月27日使用“绽放”，
27日那天她的年龄从20岁变到到100岁，也就是增长了80岁，
从28日开始回退：28日，99岁；29日，98岁；30日，97岁......
年龄逐渐递减，日期逐渐增加，年龄一直递减回到20岁，
求她在几年几月几号完成回退?
*/


// Gemini：
#include <stdio.h>
#include <string.h>
// 定义日期结构体
typedef struct Date {
    int year;
    int month;
    int day;
} Date;

// 定义“花”的结构体
typedef struct Person {
    char name[20];
    int age;
    Date useSkillDate;
} Person;

// 计算两个日期之间相差的天数
int daysBetweenDates(Date startDate, Date endDate) {
    int days = 0;
    // 遍历每个月
    for (int year = startDate.year; year <= endDate.year; year++) {
        for (int month = (year == startDate.year ? startDate.month : 1);
             month <= (year == endDate.year ? endDate.month : 12); month++) {
            // 计算每个月的总天数
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
            // 累加天数
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

// 模拟“花”使用“绽放”技能
void useSkill(Person* person) {
    // 记录使用技能的日期
    person->useSkillDate.year = 2024;
    person->useSkillDate.month = 3;
    person->useSkillDate.day = 27;

    // 将年龄变为100岁
    person->age = 100;

    // 计算年龄回退所需天数
    int daysToRetreat = person->age - 20;

    // 模拟年龄回退
    for (int i = 0; i < daysToRetreat; i++) {
        // 日期增加一天
        person->useSkillDate.day++;
        // 如果日期超过月最大天数，则月份加一，日期重置为1
        if (person->useSkillDate.day > 31) {
            person->useSkillDate.day = 1;
            person->useSkillDate.month++;
        }
        // 如果月份超过12，则年份加一，月份重置为1
        if (person->useSkillDate.month > 12) {
            person->useSkillDate.month = 1;
            person->useSkillDate.year++;
        }
        // 年龄减一
        person->age--;
    }
}

int main() {
    // 定义“花”
    Person person;
    strcpy(person.name, "花");
    person.age = 20;

    // 使用“绽放”技能
    useSkill(&person);

    // 打印回退完成日期
    printf("%s 在 %d年%d月%d号完成年龄回退\n", person.name, person.useSkillDate.year,
           person.useSkillDate.month, person.useSkillDate.day);

    return 0;
}
