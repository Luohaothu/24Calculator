#include <iostream>
#include <vector>

int main() {
    int a, b, c, d;
    std::cout << "Input 4 number: ";
    std::cin >> a >> b >> c >> d;

    std::vector<std::vector<int>> combine{{a, b, c, d}, {a, b, d, c}, {a, c, b, d}, {a, c, d, b}, {a, d, b, c},
                                          {a, d, c, b}, {b, a, c, d}, {b, a, d, c}, {b, c, a, d}, {b, c, d, a},
                                          {b, d, a, c}, {b, d, c, a}, {c, a, b, d}, {c, a, d, b}, {c, b, a, d},
                                          {c, b, d, a}, {c, d, a, b}, {c, d, b, a}, {d, a, b, c}, {d, a, c, b},
                                          {d, b, a, c}, {d, b, c, a}, {d, c, a, b}, {d, c, b, a}};

    for (int n = 0; n < 24; n++) {
        auto combo = combine[n];
        for (int i = 0; i < 4; ++i) {
            int temp1; char op1;
            switch (i) {
                case 0: temp1 = combo[0] + combo[1]; op1 = '+'; break;
                case 1: temp1 = combo[0] - combo[1]; op1 = '-'; break;
                case 2: temp1 = combo[0] * combo[1]; op1 = '*'; break;
                case 3: temp1 = combo[0] / combo[1]; op1 = '/'; break;
            }
            for (int j = 0; j < 4; ++j) {
                int temp2; char op2;
                switch (j) {
                    case 0: temp2 = temp1 + combo[2]; op2 = '+'; break;
                    case 1: temp2 = temp1 - combo[2]; op2 = '-'; break;
                    case 2: temp2 = temp1 * combo[2]; op2 = '*'; break;
                    case 3: temp2 = temp1 / combo[2]; op2 = '/'; break;
                }
                for (int k = 0; k < 4; ++k) {
                    int temp3; char op3;
                    switch (k) {
                        case 0: temp3 = temp2 + combo[3]; op3 = '+'; break;
                        case 1: temp3 = temp2 - combo[3]; op3 = '-'; break;
                        case 2: temp3 = temp2 * combo[3]; op3 = '*'; break;
                        case 3: temp3 = temp2 / combo[3]; op3 = '/'; break;
                    }
                    if (temp3 == 24){

                        std::cout << combo[0] << ' ' << combo[1] << ' ' << combo[2] << ' ' << combo[3]
                        << ' ' << op1 << ' ' << op2 << ' ' << op3 << std::endl;
                    }
                }
            }
        }
    }
    return 0;
}