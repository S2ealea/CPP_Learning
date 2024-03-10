// Initialize a vector<double> from list<int> or vector<int>.

list<int> ilist(5,4);
vector<int> ivec(5,5);

vector<double> dvc(ilist.begin(), ilist.end());
vector<double> dev2(ivec.begin(), ivec.end());
