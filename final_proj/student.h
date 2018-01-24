using namespace std;

struct student{
  string name;
  string id;
  int grade;
}

vector<student> load_data(string path);
void save_data(string path, vector<student> students);
void print_student(student item);
void print_students(vector<student> students);
int find_student(vector<student> students, int criteria, string keyword);
bool compare_grade(const student &a, const student &b);
bool compare_id(const student &a, const student &b);
