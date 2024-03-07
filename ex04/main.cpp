#include <iostream>
#include <string>
#include <fstream>

void sed(std::string filename, std::string search, std::string replace)
{
    std::ofstream outfile;
    std::ifstream infile;
    std::string str;
    std::string line;
    size_t tmp;

    infile.open(filename);
    if (!infile.is_open())
        return;
    outfile.open(filename + ".replace");
    while (infile.good() && !infile.eof())
    {
        std::getline(infile, str);

        line = "";
        while (str.find(search, 0) != std::string::npos && search.length() > 0)
        {
            tmp = str.find(search, 0);
            line += str.substr(0, tmp) + replace;
            str = str.substr(tmp + search.length(), str.length());
        }
        line += str;
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }
    infile.close();
    outfile.close();
    return;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments. Usage : ./sed <filename> <s1> <s2>." << std::endl;
        return (0);
    }
    sed(static_cast<std::string>(argv[1]), static_cast<std::string>(argv[2]), static_cast<std::string>(argv[3]));
    return (0);
 }