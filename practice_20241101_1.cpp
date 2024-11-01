// Ex 1
/*
    You receive an array with your peers' test scores. Now calculate the average and compare your score!

    Return true if you're better, else false!
    
    Note:
    Your points are not included in the array of your class's points. Do not forget them when calculating the average score!

*/

#include <iostream>
#include <vector>
#include <numeric>

// Function
double compareOwnGrade(std::vector<double> classGrades, double myGrade) {

    // Suport variables
    double classAverageGrade;
    double classSum;

    // Function logic
    for (double grade : classGrades) {
        classSum += grade;
    }
    
    classAverageGrade = classSum/classGrades.size();
    
    // Return results
    if (myGrade > classAverageGrade){
        return true;
    }
    else {
        return false;
    }
}

// Test
int main() {

    std::vector<double> classGradesTest = {6, 7, 8, 7, 6};
    double myGradeTest1 = 8;
    double myGradeTest2 = 5;
    bool result1;
    bool result2;

    result1 = compareOwnGrade(classGradesTest, myGradeTest1);
    result2 = compareOwnGrade(classGradesTest, myGradeTest2);

    std::cout << " Result 1: " << result1 << '\n';
    std::cout << " Result 2: " << result2;

    return 0;
}
