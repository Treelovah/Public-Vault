#include <iostream>
#include <string>
#include <iterator>


constexpr unsigned int err = 2;


// This is still rather verbose.
/*
int main() {
    const unsigned int num_students = 5;
    unsigned int scores[num_students] = {84, 92, 76, 81, 56};
    unsigned int total_score = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
    double average_score = (static_cast<double>(total_score) / num_students);
    std::cout << average_score << '\n';
    return 0;
}
*/

// lets iterate over the array 'scores' and then do math.
namespace score_sheet {
    const unsigned int scores[] = {84, 92, 76, 81, 56};
    double num_students = std::size(scores);
    double total_score = 0;
    double total_average = 0;
}
int total_score() {
    for (int i : score_sheet::scores) {
        score_sheet::total_score += i;
    }
    return score_sheet::total_score;

}
int average_score() {
    score_sheet::total_average = (total_score() / score_sheet::num_students);
    return score_sheet::total_average;
}
int main() {
    std::cout <<  "total score: " << total_score() << '\n';
    std::cout << "total average score: " << average_score() << '\n';
}

