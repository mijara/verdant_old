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
    void setPosition(int index, int position);
    void setLength(int index, int length);
    void setType(int index, int type);

    void ensureCapacity(size_t index);
    int size();
};

#endif // INDEXBUFFER_H
