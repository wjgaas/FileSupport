#include "filesupport.h"
#include "opencv2/opencv.hpp"

using namespace std;

int main(void) 
{
    FileSupport fs;

	///List files
    FileList filist = fs.list_files("../images");

    for(FileList::const_iterator it = filist.begin(); \
        it != filist.end(); ++it)
    {
        cv::Mat img = cv::imread(*it);
		cv::imshow("tes",  img);
		cv::waitKey(0);
    }

	///List folders
    FolderList folist = fs.list_folders("..");

    for(FolderList::const_iterator it = folist.begin(); \
        it != folist.end(); ++it)
    {
        cout << *it << endl;
    }

	int lines = fs.get_file_line_num("..\\filesupport.h");

    return 0;
}
