#ifndef INDEXBUFFER_H
#define INDEXBUFFER_H

#import "vector"

class IndexBuffer
{
private:
    std::vector<int> positions;
    std::vector<int> lenghts;
    std::vector<int> types;

public:
    void add(int position, int length, int type);
    int size();
};

#endif // INDEXBUFFER_H
