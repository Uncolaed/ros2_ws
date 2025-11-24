#include <thread>
#include <iostream>
#include <chrono>

int data = 0;
void Consumer();
void Producer()
{
    std::thread consumer(Consumer);
    consumer.detach();
    while(1)
    {
        std::cout << "data: " << data++ << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void Consumer()
{
    int received = 0;

    while(1)
    {
       received = data + 10;
        std::cout << "received data : " << received << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    }
}

int main()
{
    std::thread thread1(Producer);

    thread1.join();

    return 0;
}