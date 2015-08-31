#include "indexbuffer.h"

void IndexBuffer::setPosition(int index, int position)
{
    ensureCapacity(index);
    positions[index] = position;
}

void IndexBuffer::setLength(int index, int length)
{
    ensureCapacity(index);
    lenghts[index] = length;
}

void IndexBuffer::setType(int index, int type)
{
    ensureCapacity(index);
    types[index] = type;
}

/**
 * @brief adds one more index if needed. This allows to threat incoming values as existing ones,
 * simplifying algorithms.
 *
 * @param index the index of the new value to append.
 */
void IndexBuffer::ensureCapacity(size_t index)
{
    if (positions.size() < index && index == positions.size())
    {
        positions.push_back(0);
        lenghts.push_back(0);
        types.push_back(-1);
    }
}

int IndexBuffer::size()
{
    return positions.size();
}
