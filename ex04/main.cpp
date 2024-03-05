#include "Sed.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments. Usage : ./sed <filename> <s1> <s2>." << std::endl;
        return (0);
    }
    std::string filename;
    std::ofstream outfile;
    std::ifstream infile;
    std::string str;

    filename = static_cast<std::string>(argv[1]);
    infile.open(filename);
    outfile.open(filename + ".replace");
    if (infile.is_open())
    {
        while (infile.good())
        {
            infile >> str;
            if (str.end)
                outfile << std::endl;
            else if (str.compare(argv[2]) == 0)
                outfile << argv[3];
            else
                outfile << str;
        }
    }
    infile.close();
    outfile.close();

    return (0);
 }