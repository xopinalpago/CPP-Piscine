/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:07:14 by dlu               #+#    #+#             */
/*   Updated: 2024/01/31 15:11:06 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    return ;
}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
    *this = copy;
    return ;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy)
{
    if (this == &copy)
        return *this;
    return *this;
}

PmergeMe::~PmergeMe(void)
{
    return ;
}

void PmergeMe::displayPairs(std::vector<int_pair> &pairs)
{
    std::cout << "Pairs : ";
    for (unsigned int i = 0; i < pairs.size(); i++)
    {
        std::cout << pairs[i].first << " " << pairs[i].second << " ";
    }
    std::cout << std::endl;   
}

void PmergeMe::displayVector(std::string str, std::vector<int> &vec)
{
    std::cout << str;
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;   
}

void PmergeMe::displayDeque(std::string str, std::deque<int> &vec)
{
    std::cout << str;
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;   
}

void PmergeMe::displayChar(std::string str, char **argv)
{
    std::cout << str;
    int i = 0;

    while (argv[i])
    {
        std::cout << argv[i] << " ";
        i++;
    }
    std::cout << std::endl;   
}

int PmergeMe::stringToInt(std::string const &str)
{
    std::istringstream iss(str);
    int value;
    char remain;
    if (iss >> value && !(iss >> remain))
        return value;
    else
        throw std::exception();
}

void PmergeMe::putInVector(int count, char **args, std::vector<int> &vec)
{
    for (int i = 0; i < count; i++)
    {
        int num;
        try {
            num = stringToInt(args[i]);
        } catch (std::exception &e) {
            throw ParsingError();
        }
        if (num < 0)
            throw ParsingError();
        if (std::find(vec.begin(), vec.end(), num) != vec.end())
            throw ParsingError();
        vec.push_back(num);
    }
}

void PmergeMe::putInDeque(int count, char **args)
{
    for (int i = 0; i < count; i++)
    {
        int num;
        try {
            num = stringToInt(args[i]);
        } catch (std::exception &e) {
            throw ParsingError();
        }
        if (num < 0)
            throw ParsingError();
        if (std::find(this->_deq.begin(), this->_deq.end(), num) != this->_deq.end())
            throw ParsingError();
        this->_deq.push_back(num);
    }
}

void PmergeMe::printResultVector(int count, char **argv)
{
    clock_t vecStartTime = clock();
    putInVector(count, argv, this->_vec);
    std::vector<int> vecSorted = mergeInsertionSortVector(this->_vec);
    clock_t vecEndTime = clock();

    std::cout << "Time to process a range of " << this->_vec.size()
              << " elements with std::vector : "
              << static_cast<double>(vecEndTime - vecStartTime) /
                     CLOCKS_PER_SEC * 1000000
              << " us" << std::endl;
}

void PmergeMe::printResultDeque(int count, char **argv)
{
    clock_t deqStartTime = clock();
    putInDeque(count, argv);
    std::deque<int> deqSorted = mergeInsertionSortDeque(this->_deq);
    clock_t deqEndTime = clock();

    displayDeque("After:   ", deqSorted);
    std::cout << "Time to process a range of " << this->_deq.size()
              << " elements with std::deque : "
              << static_cast<double>(deqEndTime - deqStartTime) /
                     CLOCKS_PER_SEC * 1000000
              << " us" << std::endl;
}

void PmergeMe::printResult(int count, char **argv)
{
    putInVector(count, argv, this->_vecUnsorted);
    displayVector("Before:  ", this->_vecUnsorted);
    printResultDeque(count, argv);
    printResultVector(count, argv);
}

void PmergeMe::isSortedVector(std::vector<int> &pend)
{
    for (unsigned int i = 1; i < pend.size(); i++)
    {
        if (pend[i - 1] >= pend[i])
        {
            std::cout << "ERROR" << std::endl;
            exit(1);
        }
    }
}

void PmergeMe::isSortedDeque(std::deque<int> &pend)
{
    for (unsigned int i = 1; i < pend.size(); i++)
    {
        if (pend[i - 1] >= pend[i])
        {
            std::cout << "ERROR" << std::endl;
            exit(1);
        }
    }
}

unsigned int PmergeMe::jacobsthalNum(unsigned int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return jacobsthalNum(num - 1) + 2 * jacobsthalNum(num - 2);
}

void PmergeMe::insertionSortVector(std::vector<int_pair> &pairs, int size)
{
    for (int currentSize = 2; currentSize <= size; ++currentSize)
    {
        int_pair last = pairs[currentSize - 1];
        int i = currentSize - 2;
        while (i >= 0 && pairs[i].second > last.second)
        {
            pairs[i + 1] = pairs[i];
            --i;
        }
        pairs[i + 1] = last;
        if (DEBUG)
            displayPairs(pairs);
    }
}

void PmergeMe::insertionSortDeque(std::deque<int_pair> &pairs, int size)
{
    for (int currentSize = 2; currentSize <= size; ++currentSize)
    {
        int_pair last = pairs[currentSize - 1];
        int i = currentSize - 2;
        while (i >= 0 && pairs[i].second > last.second)
        {
            pairs[i + 1] = pairs[i];
            --i;
        }
        pairs[i + 1] = last;
    }
}

int PmergeMe::binarySearchVector(std::vector<int> &sorted, int item, int low, int high)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == sorted[mid])
            return mid + 1;
        else if (item > sorted[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if ((unsigned long)low >= sorted.size())
        return (-1);
    return low;
}

int PmergeMe::binarySearchDeque(std::deque<int> &sorted, int item, int low, int high)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == sorted[mid])
            return mid + 1;
        else if (item > sorted[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if ((unsigned long)low >= sorted.size())
        return (-1);
    return low;
}

void PmergeMe::mergeVector(std::vector<int> &pend, std::vector<int> &sorted)
{
    // Put the first of smaller element in front
    sorted.insert(sorted.begin(), pend.front());
    for (int i = 3; ; i++)
    {
        int diffi = jacobsthalNum(i) - 1;
        int diffinf = jacobsthalNum(i - 1) - 1;
        if ((unsigned long)diffi > pend.size())
            break ;
        for (int j = diffi; j > diffinf; j--)
        {
            if (pend.size() > (unsigned long)j)
            {
                int loc = binarySearchVector(sorted,  pend.at(j), 0, sorted.size());
                if (DEBUG)
                {
                    std::cout << std::endl;
                    displayVector("Pend before : ", pend);
                    displayVector("Sorted before : ", sorted);
                    std::cout << "To insert : " << pend.at(j) << std::endl;
                    std::cout << "Insertion pos : " << loc << std::endl;
                }
                if (loc == -1)
                    sorted.push_back(pend.at(j));
                else
                    sorted.insert(sorted.begin() + loc, pend.at(j));
                if (DEBUG)
                {
                    displayVector("Pend after : ", pend);
                    displayVector("Sorted after : ", sorted);
                }
            }
        }
    }
    isSortedVector(sorted);
}

void PmergeMe::mergeDeque(std::deque<int> &pend, std::deque<int> &sorted)
{
    sorted.insert(sorted.begin(), pend.front());
    for (int i = 3; ; i++)
    {
        int diffi = jacobsthalNum(i) - 1;
        int diffinf = jacobsthalNum(i - 1) - 1;
        if ((unsigned long)diffi > pend.size())
            break ;
        for (int j = diffi; j > diffinf; j--)
        {
            if (pend.size() > (unsigned long)j)
            {
                int loc = binarySearchDeque(sorted,  pend.at(j), 0, sorted.size());
                if (loc == -1)
                    sorted.push_back(pend.at(j));
                else
                    sorted.insert(sorted.begin() + loc, pend.at(j));
            }
        }
    }
    isSortedDeque(sorted);
}

std::vector<int> PmergeMe::mergeInsertionSortVector(std::vector<int> c)
{
    if (c.size() < 2)
        return c;
    // Check whether the container has even or odd number of elements
    int oddNumber;
    bool odd = c.size() % 2 != 0;
    if (odd) {
        oddNumber = c.back();
        c.pop_back();
    }
    // Create pairs
    std::vector<int_pair> pairs;
    for (std::vector<int>::iterator it = c.begin(); it != c.end(); it += 2)
    {
        int_pair pair;
        int num1 = *it;
        int num2 = *(it + 1);
        pair.first = num1 > num2 ? num2 : num1;
        pair.second = num1 > num2 ? num1 : num2;
        pairs.push_back(pair);
    }
    // Insert pairs in the correct order
    insertionSortVector(pairs, pairs.size());
    // Merge into the sorted array
    std::vector<int> pend;
    std::vector<int> sorted;
    for (std::vector<int_pair>::iterator it = pairs.begin(); it != pairs.end(); it++)
    {
        pend.push_back(it->first);
        sorted.push_back(it->second);
    }
    if (odd)
        pend.push_back(oddNumber);
    if (DEBUG)
    {
        std::cout << std::endl;
        displayVector("Pend init : ", pend);
        displayVector("Sorted init : ", sorted);
    }
    mergeVector(pend, sorted);
    return (sorted);
}

std::deque<int> PmergeMe::mergeInsertionSortDeque(std::deque<int> c)
{
    if (c.size() < 2)
        return c;
    // Check whether the container has even or odd number of elements
    int oddNumber;
    bool odd = c.size() % 2 != 0;
    if (odd) {
        oddNumber = c.back();
        c.pop_back();
    }
    // Create pairs
    std::deque<int_pair> pairs;
    for (std::deque<int>::iterator it = c.begin(); it != c.end(); it += 2)
    {
        int_pair pair;
        int num1 = *it;
        int num2 = *(it + 1);
        pair.first = num1 > num2 ? num2 : num1;
        pair.second = num1 > num2 ? num1 : num2;
        pairs.push_back(pair);
    }
    // Insert pairs in the correct order
    insertionSortDeque(pairs, pairs.size());
    // Merge into the sorted array
    std::deque<int> pend;
    std::deque<int> sorted;
    for (std::deque<int_pair>::iterator it = pairs.begin(); it != pairs.end(); it++)
    {
        pend.push_back(it->first);
        sorted.push_back(it->second);
    }
    if (odd)
        pend.push_back(oddNumber);
    mergeDeque(pend, sorted);
    return (sorted);
}

char const *PmergeMe::ParsingError::what(void) const throw()
{
    return "Error";
}
