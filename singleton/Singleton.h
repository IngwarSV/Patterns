#ifndef SINGLETON
#define SINGLETON

class Singleton {
    private:
        static Singleton* instance;
        
        Singleton();
        ~Singleton();
        Singleton(const Singleton& copy) = delete;
        Singleton& operator=(const Singleton& copy) = delete;

    public:
        static Singleton* getInstance();
};

// Меєрс:
// class Singleton {
//     private:
//         Singleton();
//         ~Singleton();
//         Singleton(const Singleton& copy) = delete;
//         Singleton& operator=(const Singleton& copy) = delete;

//     public:
//         static Singleton& getInstance();
// };





#endif // SINGLETON
