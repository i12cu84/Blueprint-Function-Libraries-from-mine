# Unreal Engine Blue Prints Library Node

<details>
<summary>API parsing (English)</summary>
<pre><code>

static FString ReadStringToFile(FString Dir)
Function:
Reading a file
Input:
FString Dir: The file path
Output:
FString Result: The file contents

static void WriteStringToFile(FString FileName, FString content) {
Function:
Write to file wide character UTF-16
Input:
FString FileName: The file path
FString content: The file content

static bool WriteStringToFileU8(FString FileName, FString content)
Function:
Write to the file UTF-8
Input:
FString FileName: The file path
FString content: The file content
Output:
bool ver: Whether the write was successful

static TArray<FString> FindFilesTo(FString Path, FString Filter, bool Files,bool Directory)
Function:
Finding files
Input:
FString Path: File directory path
FString Filter: Filename filter
bool Files: Whether to look for files
Output:
TArray<FString> ver: All file paths in the file directory

static bool MoveFileTo(FString To, FString From)
Funtionc:
Moving files
Input:
FString To: The destination file path
FString From: The source file path
Output:
bool ver: Whether the move was successful

static int32 CopyFileTo(FString To, FString From)
Function:
Copying files
Input:
FString To: The destination file path
FString From: The source file path

static bool DeleteFileTo(FString FilePath)
Function:
Deleting files
Input:
FString FilePath: The file path

static void OpenFile(FString FilePath)
Function:
Opening a file
Input:
FString FilePath: The file path

static void CreateDic(FString filePath)
Function:
Creating folders
Input:
FString filePath: The file path

static void DeleteDic(FString filePath)
Function:
Deleting folders
Input:
FString filePath: The file path

static int64 GitFileSize(FString filePath)
Function:
Getting the file size
Input:
FString filePath: The file path
Output:
int64 ver: The file size

static TArray<FString> FindFolder(FString Path, FString Filter, bool Files,bool Directory)
Funtcion:
Find all files in the file directory
Input:
FString Path: File directory path
FString Filter: Filename filter
bool Files: Whether to look for files
bool Directory: Whether to look for folders
Output:
TArray<FString> ver: All file paths in the file directory

static TArray<FString> GetFolderFiles(FString Path)
Function:
Search all files in the file directory, cannot delete search
Input:
FString Path: File directory path
Output:
TArray<FString> ver: All file paths in the file directory

static void CopyMessageToClipboard(FString text)
Function:
Overwrite the clipboard contents
Input:
FString text: Copies the content

static FString PasteMessageFromClipboard()
Function:
Gets the clipboard contents
Output:
FString ver: The output

static bool IsValidFilePath(const FString& FilePath)
Function:
Determines if the path is valid
Input:
FString& FilePath: The file path
Output:
bool ver: Whether the path is valid

static TArray<FString> GetFilesInDirectory(const FString& DirectoryPath)
Function:
To get a file with a specified path, you can only get a folder
Input:
FString& DirectoryPath: Folder path
Output:
TArray<FString> ver: path to the folder file

static TArray<FString> GetMP3FilePaths(const FString& Directory)
Function:
Only mp3 files can be retrieved from the specified path
Input:
FString& Directory: Folder path
Output:
TArray<FString> ver: path to the folder file

static FString GetFileNameFromPath(const FString& FilePath)
Function:
Extract the filename from the file path
Input:
FString& FilePath: The file path
Output:
FString ver: Filename

static bool DeleteFileAtPath(const FString& FilePath)
Function:
Deleting files
Input:
FString& FilePath: The file path
Output:
bool ver: Whether the operation was successful

static float SetSUVM()
Function:
UE can play in the background
Output:
float ver: Output 1.0f for background playback,0.0f for non-background playback

static bool SaveConstraintArray(FString SaveDirectory, FString Filename, TArray<FString> SaveText,  bool AllowOverWriting);
Function:
The exported array data is saved locally
Input:
FString SaveDirectory: Save to the destination path
FString Filename: This specifies the name of the exported csv file
TArray<FString> SaveText: Stores content separated by "," as columns and array index as rows
bool AllowOverWriting: Whether to override
Output:
bool ver: Whether the export was successful

static TArray<FString> LoadConstraintArray(FString FilePath);
Function:
Import the array data into the blueprint
Input:
FString FilePath: The path to read the csv
Output:
TArray<FString> ver: This returns the contents of the csv

static bool DeleteFile(FString FilePath);
Function:
Delete specified file
Input:
FString FilePath: The path to delete the target file
Output:
bool ver: Whether the deletion was successful

static TArray<ULineBatchComponent*> DrawRayLine(FVector StartPos, FVector EndPos, float fLifeTime, FLinearColor color);
Function:
Draw a line
Input:
FVector StartPos: The 3D starting point of the line
FVector EndPos: The 3D end of the line
float fLifeTime: The lifetime of the drawn line (about 0.02s recommended)
FLinearColor color: The color of the drawing line
Output:
TArray<ULineBatchComponent*> ver: The object on which the line is drawn

static void DestoryLine(TArray<ULineBatchComponent*> LineList);
Function:
The object that clears the line object
Input:
TArray<ULineBatchComponent*> LineList: The line object to be cleared

static TArray<FString> GetAllSaveFileNames(const FString& Directory);
Function:
Gets a list of files in the file path
Input:
FString Directory: The path to the root directory of the file
Output:
TArray<FString> ver: File object path group under path

static FString GetFileNamePath(const FString& FilePath)
Function:
Get the texture (image) from the file path and create the returned object
Input:
FString FilePath: The path to the file
Output:
FString: Filename

static UTexture2D* LoadImageFromAbsolutePath(const FString& AbsolutePath);
Function:
Get the texture (image) from the file path and create the returned object
Input:
FString AbsolutePath: The path to the file
Output:
UTexture2D: Texture object pointer

static AActor* GetActorByName(TArray<AActor*> Actors, const FString& ActorName)
Function:
Actors are extracted according to UAID
Input:
TArray<AActor*> Actors :Actor search source
FString& ActorName :Actor name (UAID)
Output:
AActor* : The Actor pointer

static UMediaSource* LoadMediaSourceFromAbsolutePath(const FString& AbsolutePath)
Function:
Getting the media player
Input:
FString& AbsolutePath: The file path
Output:
UMediaSource: The media player pointer

</code></pre>
</details>

<details>
<summary>API 解析(中文)</summary>
<pre><code>
static FString ReadStringToFile(FString Dir) 
Function:
读取文件
Input:
FString Dir					:文件路径
Output:
FString Result				:文件内容

static void WriteStringToFile(FString FileName, FString content) {
Function:
写入文件 宽字符 UTF-16
Input:
FString FileName				:文件路径
FString content					:文件内容

static bool WriteStringToFileU8(FString FileName, FString content) 
Function:
写入文件 UTF-8
Input:
FString FileName				:文件路径
FString content					:文件内容
Output:
bool ver							:是否写入成功

static TArray<FString> FindFilesTo(FString Path, FString Filter, bool Files,bool Directory) 
Function:
寻找文件
Input:
FString Path					:文件目录路径
FString Filter				:文件名过滤器
bool Files						:是否查找文件
Output:
TArray<FString> ver			:文件目录下所有文件路径

static bool MoveFileTo(FString To, FString From)
Funtionc:
移动文件
Input:
FString To					:目标文件路径
FString From					:源文件路径
Output:
bool ver						:是否移动成功

static int32 CopyFileTo(FString To, FString From)
Function:
复制文件
Input:
FString To					:目标文件路径
FString From					:源文件路径

static bool DeleteFileTo(FString FilePath) 
Function:
删除文件
Input:
FString FilePath				:文件路径

static void OpenFile(FString FilePath) 
Function:
打开文件
Input:
FString FilePath				:文件路径

static void CreateDic(FString filePath) 
Function:
创建文件夹
Input:
FString filePath				:文件路径

static void DeleteDic(FString filePath) 
Function:
删除文件夹
Input:
FString filePath				:文件路径

static int64 GitFileSize(FString filePath) 
Function:
获取文件大小
Input:
FString filePath				:文件路径
Output:
int64 ver						:文件大小

static TArray<FString> FindFolder(FString Path, FString Filter, bool Files,bool Directory) 
Funtcion:
查找文件目录下的所有文件
Input:
FString Path					:文件目录路径
FString Filter				:文件名过滤器
bool Files						:是否查找文件
bool Directory				:是否查找文件夹
Output:
TArray<FString> ver			:文件目录下所有文件路径

static TArray<FString> GetFolderFiles(FString Path) 
Function:
查找文件目录下所有文件,无法删选查找
Input:
FString Path					:文件目录路径
Output:
TArray<FString> ver			:文件目录下所有文件路径

static void CopyMessageToClipboard(FString text)
Function:
覆盖剪切板内容
Input:
FString text				:复制内容

static FString PasteMessageFromClipboard()
Function:
获取剪切板内容
Output:
FString ver					:输出内容

static bool IsValidFilePath(const FString& FilePath)
Function:
获取路径是否有效
Input:
FString& FilePath			:文件路径
Output:
bool ver					:路径是否有效

static TArray<FString> GetFilesInDirectory(const FString& DirectoryPath)
Function:
获取指定路径的文件 只能获取文件夹
Input:
FString& DirectoryPath		:文件夹路径
Output:
TArray<FString> ver			:文件夹子文件路径

static TArray<FString> GetMP3FilePaths(const FString& Directory)
Function:
获取指定路径的文件 只能获取mp3文件
Input:
FString& Directory 			:文件夹路径
Output:
TArray<FString> ver			:文件夹子文件路径

static FString GetFileNameFromPath(const FString& FilePath)
Function:
从文件路径中提取文件名
Input:
FString& FilePath			:文件路径
Output:
FString ver					:文件名

static bool DeleteFileAtPath(const FString& FilePath)
Function:
删除文件
Input:
FString& FilePath			:文件路径
Output:
bool ver					:是否操作成功

static float SetSUVM()
Function:
UE可后台播放
Output:
float ver					:输出1.0f为可后台播放,0.0f为不可后台播放

static bool SaveConstraintArray(FString SaveDirectory, FString Filename, TArray<FString> SaveText, bool AllowOverWriting);
Function:
导出数组数据保存到本地
Input:
FString SaveDirectory		:保存到目标路径
FString Filename			:设定导出csv文件的名字
TArray<FString> SaveText	:存储内容,以","隔开为列,以数组索引为行
bool AllowOverWriting		:是否覆盖
Output:
bool ver					:是否导出成功

static TArray<FString> LoadConstraintArray(FString FilePath);
Function:
导入数组数据到蓝图中
Input:
FString FilePath			:读取csv的路径
Output:
TArray<FString> ver			:返回csv中的内容

static bool DeleteFile(FString FilePath);
Function:
删除指定文件
Input:
FString FilePath			:删除目标文件的路径
Output:
bool ver					:是否删除成功

static TArray<ULineBatchComponent*> DrawRayLine(FVector StartPos, FVector EndPos, float fLifeTime, FLinearColor color);
Function:
绘制一条线
Input:
FVector StartPos					:线的三维起点
FVector EndPos						:线的三维终点
float fLifeTime						:绘制线存在的时间(推荐0.02s左右)
FLinearColor color					:绘制线的颜色
Output:
TArray<ULineBatchComponent*> ver	:绘制线的对象

static void DestoryLine(TArray<ULineBatchComponent*> LineList);
Function:
清空线对象的对象
Input:
TArray<ULineBatchComponent*> LineList	:需要清空的线对象

static TArray<FString> GetAllSaveFileNames(const FString& Directory);
Function:
获取文件路径下的文件列表
Input:
FString Directory					:文件根目录的路径
Output:
TArray<FString> ver					:路径下文件对象路径组

static FString GetFileNamePath(const FString& FilePath)
Function:
从文件路径中获取纹理(图片)并创建返回的对象
Input:
FString FilePath				:文件的路径
Output:
FString							:文件名

static UTexture2D* LoadImageFromAbsolutePath(const FString& AbsolutePath);
Function:
从文件路径中获取纹理(图片)并创建返回的对象
Input:
FString AbsolutePath				:文件的路径
Output:
UTexture2D							:纹理对象指针

static AActor* GetActorByName(TArray<AActor*> Actors, const FString& ActorName)
Function:
按照UAID提取Actor
Input:
TArray<AActor*> Actors				:Actor搜索源
FString& ActorName					:Actor名字(UAID)
Output:
AActor*								:Actor指针

static UMediaSource* LoadMediaSourceFromAbsolutePath(const FString& AbsolutePath)
Function:
获取媒体播放器
Input:
FString& AbsolutePath				:文件路径
Output:
UMediaSource						:媒体播放器指针

</code></pre>
</details>

UE版本 5.2.1

放入Plugins即可使用