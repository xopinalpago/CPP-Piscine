/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:07:16 by dlu               #+#    #+#             */
/*   Updated: 2024/01/31 14:43:03 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#ifndef DEBUG
#define DEBUG 0
#endif

#include <algorithm>
#include <cstring>
#include <ctime>
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>

typedef std::pair<int, int> int_pair;

class PmergeMe
{
  public:
    class ParsingError : public std::exception
    {
      public:
        virtual char const *what() const throw();
    };
    PmergeMe(void);
    PmergeMe(PmergeMe const &copy);
    PmergeMe &operator=(PmergeMe const &copy);
    ~PmergeMe(void);

    void printResult(int count, char **args);

  private:
    // Memory block for vector is guaranteed to be continuous while deque is segmented.
    std::vector<int>  _vecUnsorted;
    std::vector<int>  _vec;
    std::deque<int>   _deq;

    unsigned int      jacobsthalNum(unsigned int num);
    int               stringToInt(std::string const &str);

    void              displayPairs(std::vector<int_pair> &pairs);
    void              displayVector(std::string str, std::vector<int> &vec);
    void              displayDeque(std::string str, std::deque<int> &vec);
    void              displayChar(std::string str, char **argv);

    int               binarySearchVector(std::vector<int> &sorted, int item, int low, int high);
    void              printResultVector(int count, char **args);
    void              mergeVector(std::vector<int> &pend, std::vector<int> &sorted);
    void              isSortedVector(std::vector<int> &pend);
    void              putInVector(int count, char **args, std::vector<int> &vec);
    void              insertionSortVector(std::vector<int_pair> &pairs, int size);
    std::vector<int>  mergeInsertionSortVector(std::vector<int> c);

    int               binarySearchDeque(std::deque<int> &sorted, int item, int low, int high);
    void              printResultDeque(int count, char **args);
    void              mergeDeque(std::deque<int> &pend, std::deque<int> &sorted);
    void              isSortedDeque(std::deque<int> &pend);
    void              putInDeque(int count, char **args);
    void              insertionSortDeque(std::deque<int_pair> &pairs, int size);
    std::deque<int>   mergeInsertionSortDeque(std::deque<int> c);
};

#endif
