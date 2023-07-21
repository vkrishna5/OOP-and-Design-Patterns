#include <iostream>
using namespace std;

class DatabaseConnection
{
private:
    static DatabaseConnection *connectionObj;
    string connectionURL;

    DatabaseConnection()
    {
        connectionURL = "mongodb://mongodb0.server1.com:27017";
    }

public:
    static DatabaseConnection *getConnection()
    {
        if (connectionObj == NULL)
        {
            connectionObj = new DatabaseConnection();
        }

        return connectionObj;
    }

    void setConnectionURL(string connectionURL)
    {
        this->connectionURL = connectionURL;
    }

    string getConnectionURL()
    {
        return connectionURL;
    }
};

DatabaseConnection *DatabaseConnection::connectionObj = NULL;

int main()
{
    DatabaseConnection *connectionObj1 = DatabaseConnection::getConnection();
    cout << connectionObj1->getConnectionURL() << endl;
    connectionObj1->setConnectionURL("mongodb://mongodb0.server2.com:27999");

    DatabaseConnection *connectionObj2 = DatabaseConnection::getConnection();
    cout << connectionObj2->getConnectionURL() << endl;
}