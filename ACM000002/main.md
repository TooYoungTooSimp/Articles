\clearpage
\pagenumbering{arabic}

# ICPC Howtos

## STL tricks

### How to efficiently clear a queue:

```cpp
template <typename T>
class queue_clearable : public queue<T, vector<T>>
{
public:
    void clear() { c.clear(); }
};
```


