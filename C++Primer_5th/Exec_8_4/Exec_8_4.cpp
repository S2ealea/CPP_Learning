// A function reading a file in read mode.
// Read the content to the string of vector, every line as a
// individual element.
void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (getline(ifs, buf))
            vec.pushback(buf);
    }
}
