#include <map>
#include <vector>
#include "User.cpp"

using namespace std;

class UserPersistence {
  private:
    map<int, User> users;

  public:
    void create(User user) {
      users[user.getId()] = user;
    }

    User read(int id) {
      return users[id];
    }

    void update(User user) {
      users[user.getId()] = user;
    }

    void deletes(int id) {
      users.erase(id);
    }

    vector<User> getAll() {
      vector<User> result;
      for (auto& [id, user] : users) {
        result.push_back(user);
      }
      return result;
    }
};