// Rewrite the Exec_8_4 , every word as a individual element.
void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (ifs >> buf))
            vec.pushback(buf);
    }
}
