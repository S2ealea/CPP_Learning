// A function with istream& parameter, together with return type is istream& .
// The function get the data from the stream until the end symbol of the file.
// And print the read data to the standard output.
// After these, before the returning of the stream, reset the stream first to make 
// it effective.

std::istream& func(std::istream &is)
{
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}
