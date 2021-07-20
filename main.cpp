#include <iostream>
#include <vector>
#include <string>


namespace cosmic {
    union ListItem {
        std::int32_t n;
        // Destructor is necessary
        ~ListItem() = default;
    };

    struct List {
        // Trying unions for multi data type vector

        std::vector<ListItem> l_vec{};

        void add_item(int32_t num) {
            // Fill data into vector
                ListItem n = {num};
                l_vec.push_back(n);
        }
    };
}

int main() {
    cosmic::List l;
    l.add_item(5);
    return 0;
}

/* Pseudocode
 1. The Python List is implemented in various ways
 2. The plan is to use pointers that point to data
 3. These pointers will be stored in a vector
 4. Efficiency is not the goal
 5. All methods of the python list should be in the same time complexity as the original implementation
 6. Note down time complexity of every method and operator going forward
 */
