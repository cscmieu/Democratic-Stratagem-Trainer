/**
 * @file SimpleSingleton.h
 * @brief This file contains the declaration of the SimpleSingleton class.
 */

#ifndef SIMPLESINGLETON_H
#define SIMPLESINGLETON_H

/**
 * @brief A simple singleton class template.
 * 
 * This class template provides a simple implementation of the singleton pattern.
 * It ensures that only one instance of the class can be created and provides a
 * static method to access that instance.
 * 
 * @tparam T The type of the class that will be made a singleton.
 */
template<typename T>
class SimpleSingleton {
public:
    /**
     * @brief Deleted copy constructor.
     * 
     * The copy constructor is deleted to prevent the creation of multiple instances
     * of the singleton class.
     */
    SimpleSingleton(const SimpleSingleton&) = delete;

    /**
     * @brief Deleted copy assignment operator.
     * 
     * The copy assignment operator is deleted to prevent the creation of multiple instances
     * of the singleton class.
     */
    SimpleSingleton& operator=(const SimpleSingleton&) = delete;

    /**
     * @brief Get the instance of the singleton class.
     * 
     * This static method returns a reference to the singleton instance of the class.
     * If the instance does not exist, it will be created.
     * 
     * @return T& A reference to the singleton instance.
     */
    static T& getInstance()
    {
        static T instance; // Guaranteed to be destroyed and instantiated on first use
        return instance;
    };

protected:
    /**
     * @brief Default constructor.
     * 
     * The default constructor is protected to prevent the creation of instances of the
     * singleton class from outside the class.
     */
    SimpleSingleton() = default;

    /**
     * @brief Destructor.
     * 
     * The destructor is protected to prevent the deletion of the singleton instance
     * from outside the class.
     */
    ~SimpleSingleton() = default;
};

#endif // SIMPLESINGLETON_H
