/* Runtime dump - SSLogFileOptions
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLogFileOptions : NSObject <NSCopying>
{
    NSString * _directoryPath;
    NSString * _fileName;
    int _maxNumberOfLogFiles;
    unsigned long _maxSizeInBytes;
}

@property (copy, nonatomic) NSString * logDirectoryPath;
@property (copy, nonatomic) NSString * logFileBaseName;
@property (nonatomic) unsigned long maxLogFileSize;
@property (nonatomic) int maxNumberOfLogFiles;

- (void)dealloc;
- (SSLogFileOptions *)init;
- (SSLogFileOptions *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)logDirectoryPath;
- (void)setLogDirectoryPath:(NSString *)arg0;
- (NSString *)logFileBaseName;
- (void)setLogFileBaseName:(NSString *)arg0;
- (unsigned long)maxLogFileSize;
- (void)setMaxLogFileSize:(unsigned long)arg0;
- (int)maxNumberOfLogFiles;
- (void)setMaxNumberOfLogFiles:(int)arg0;

@end
