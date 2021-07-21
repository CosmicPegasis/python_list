#include <iostream>
#include <vector>
#include <string>
#include <variant>


namespace cosmic {
    struct List {

        std::variant<int, double, std::string> ListItem;
        std::vector<std::variant<int, double, std::string>> l_vec{};

        void add_item(auto num) {
            // Fill data into vector
            // Time Complexity O(1)
                ListItem = num;
                l_vec.push_back(ListItem);
        }

    };
}

//int main() {
//    cosmic::List l;
//    l.add_item("hello world");
//
//
//    return 0;
//}

/* Pseudocode
 1. The Python List is implemented in various ways
 2. The plan is to use pointers that point to data
 3. These pointers will be stored in a vector
 4. Efficiency is not the goal
 5. All methods of the python list should be in the same time complexity as the original implementation
 6. Note down time complexity of every method and operator going forward
 */
