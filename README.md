# FileSupport
functions for traverse subfolders and subfiles, counting how many lines are there in a file

###Functions

```c++
    /**
     * @brief      { list sub level of folder under the path }
     *
     * @param[in]  path  { folder path }
     *
     * @return     { vector of subfolders }
     */
    FolderList list_folders(String path);

    /**
     * @brief      { list files under the path }
     *
     * @param[in]  path  { folder path }
     *
     * @return     { vector of subfiles }
     */
    FileList list_files(String path);

    /**
     * @brief      { list all files under the path recurrently }
     *
     * @param[in]  path   { folder path }
     * @param      files  { vector of all subfiles }
     */
    void list_files_recurrently(String path, FileList &files);

    /**
     * @brief      { count the lines of a file }
     *
     * @param[in]  filename  { path of file }
     *
     * @return     { how many lines }
     */
    int get_file_line_num(String filename);
    
```
