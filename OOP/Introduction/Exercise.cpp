#include <iostream>
#include <vector>
using namespace std;

class Hotel {
private:
    int roomNumber;
    bool isBooked;
    string customerName;
    string phoneNumber;

public:
    Hotel(int number) {
        roomNumber = number;
        isBooked = false;
        customerName = "";
        phoneNumber = "";
    }

    int getRoomNumber() const { return roomNumber; }
    bool getBookingStatus() const { return isBooked; }
    string getCustomerName() const { return customerName; }
    string getPhoneNumber() const { return phoneNumber; }

    void bookRoom(string name, string phone) {
        isBooked = true;
        customerName = name;
        phoneNumber = phone;
    }

    void cancelBooking() {
        isBooked = false;
        customerName = "";
        phoneNumber = "";
    }
};

int main() {
    int choice;
    const int maxSize = 10;
    vector<Hotel> hotel;

    // Initialize 10 rooms from 101 to 110
    for (int i = 0; i < maxSize; ++i) {
        hotel.push_back(Hotel(101 + i));
    }

    do {
        cout << "\n===== Hotel Management System =====" << endl;
        cout << "| 1. Show Available Rooms         |" << endl;
        cout << "| 2. Book a Room                  |" << endl;
        cout << "| 3. Cancel Booking               |" << endl;
        cout << "| 4. Show Customer Details        |" << endl;
        cout << "| 5. Exit                         |" << endl;
        cout << "=> Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n=== Available Rooms ===\n";
                bool found = false;
                for (Hotel& h : hotel) {
                    if (!h.getBookingStatus()) {
                        cout << "Room " << h.getRoomNumber() << " is available.\n";
                        found = true;
                    }
                }
                if (!found) {
                    cout << "No rooms available.\n";
                }
                break;
            }

            case 2: {
                int roomNum;
                string name, phone;
                cout << "Enter room number to book: ";
                cin >> roomNum;
                bool found = false;
                for (Hotel& h : hotel) {
                    if (h.getRoomNumber() == roomNum) {
                        if (!h.getBookingStatus()) {
                            cin.ignore();
                            cout << "Enter customer name: ";
                            getline(cin, name);
                            cout << "Enter phone number: ";
                            getline(cin, phone);
                            h.bookRoom(name, phone);
                            cout << "Room " << roomNum << " booked successfully.\n";
                        } else {
                            cout << "Room is already booked.\n";
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Invalid room number.\n";
                break;
            }

            case 3: {
                int roomNum;
                cout << "Enter room number to cancel booking: ";
                cin >> roomNum;
                bool found = false;
                for (Hotel& h : hotel) {
                    if (h.getRoomNumber() == roomNum) {
                        if (h.getBookingStatus()) {
                            h.cancelBooking();
                            cout << "Booking canceled for Room " << roomNum << ".\n";
                        } else {
                            cout << "Room is not currently booked.\n";
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Invalid room number.\n";
                break;
            }

            case 4: {
                cout << "\n=== Customer Details ===\n";
                bool found = false;
                for (Hotel& h : hotel) {
                    if (h.getBookingStatus()) {
                        cout << "Room " << h.getRoomNumber() << ":\n";
                        cout << "  Name : " << h.getCustomerName() << "\n";
                        cout << "  Phone: " << h.getPhoneNumber() << "\n";
                        found = true;
                    }
                }
                if (!found) cout << "No customer bookings found.\n";
                break;
            }

            case 5:
                cout << "Exiting system. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
