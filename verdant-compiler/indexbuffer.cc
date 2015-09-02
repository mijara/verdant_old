#include "indexbuffer.h"

void IndexBuffer::add(int position, int length, int type)
{
    positions.push_back(position);
    lenghts.push_back(length);
    types.push_back(type);
}

int IndexBuffer::size()
{
    return positions.size();
}
