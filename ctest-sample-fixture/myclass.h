#ifndef __MYCLASS_H__
#define __MYCLASS_H__

template <typename T>
struct myclass
{
    T operator()(T m, T n)
    {
        return m + n;
    }
};

#endif /* __MYCLASS_H__ */