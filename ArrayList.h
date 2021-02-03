template <typename T>
class ArrayList {
    private:
        int capacity;
        int lastElementIndex;
        T* array;
    public:
        ArrayList();
        T get(int index);
        void update(int index, T value);
        T remove();//remove from end
        void append(T value);
        int size();
};