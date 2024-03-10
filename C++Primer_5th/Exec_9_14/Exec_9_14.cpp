// Assign list<char *> to vector<string>.
std::list<const char*> clist{"hello", "world"};
std::vector<string> v;
v.assign(clist.begin(), clist.end());
