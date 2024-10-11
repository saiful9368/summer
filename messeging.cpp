#include <iostream>
#include <deque>
#include <string>
using namespace std;
class MessagingSystem {
private:
    deque<string> messages;
public:
    void sendMessage(const string& message) {
        messages.push_back(message);
        cout << "Message sent: " << message << endl;
    }
    void receiveMessage() {
        if (!messages.empty()) {
            cout << "Message received: " << messages.front() << endl;
            messages.pop_front();
        } else {
            cout << "No messages to receive." << endl;
        }
    }
    void deleteMessageFront() {
        if (!messages.empty()) {
            cout << " Message deleted from front: " << messages.front() << endl;
            messages.pop_front();
        } else {
            cout << "No messages to delete from front." << endl;
        }
    }
    void deleteMessageBack() {
        if (!messages.empty()) {
            cout << "Message deleted from back: " << messages.back() << endl;
            messages.pop_back();
        } else {
            cout << "No messages to delete from back." << endl;
        }
    }
    void showAllMessages() {
        if (!messages.empty()) {
            cout << "All messages:" << endl;
            for (const auto& msg : messages) {
                cout << msg << endl;
            }
        } else {
            cout << "No messages to display." << endl;
        }
    }
};
int main() {
    MessagingSystem system;
    system.sendMessage("Shivkumar");
    system.sendMessage("Abhishek");
    system.sendMessage("Rohit");
    system.sendMessage("Satyam");
    system.sendMessage("Himanshu");
    system.sendMessage("LPU");
    system.showAllMessages();
    system.receiveMessage();
    system.deleteMessageFront();
    system.deleteMessageBack();
    system.showAllMessages();
    return 0;
}
