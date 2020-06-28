#include <iostream>
#include <set>

int main()
{
    unsigned t = 0;
    std::cin >> t;

    while (t--)
    {
        unsigned n = 0;
        std::cin >> n;

        int a[n] = {0};
        std::set<int> mySet;
        for (unsigned i = 0; i < n; i++)
        {
            std::cin >> a[i];
            mySet.insert(a[i]);
        }

        for (unsigned i = 0; i < n; i++)
        {
            auto it = mySet.find(a[i]);
            it++;
            if (it == mySet.end())
                std::cout << "_ ";
            else
                std::cout << *it << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}