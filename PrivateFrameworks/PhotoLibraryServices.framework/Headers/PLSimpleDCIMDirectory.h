/* Runtime dump - PLSimpleDCIMDirectory
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSimpleDCIMDirectory : NSObject
{
    NSURL * _baseURL;
    NSString * _subDirSuffix;
    unsigned int _directoryLimit;
    NSFileManager * _fileManager;
    NSMutableIndexSet * _availableFileNameNumbers;
    NSURL * _currentSubDirectory;
    unsigned int _currentSubDirectoryNumber;
    NSString * _userInfoPath;
    char _hasLoadedUserInfo;
    char _representsCameraRoll;
    NSObject<OS_dispatch_queue> * _isolation;
}

@property (readonly, retain, nonatomic) NSURL * currentSubDirectory;
@property char representsCameraRoll;
@property (readonly, retain) NSURL * directoryURL;

+ (NSString *)cameraRollPlistName;
+ (NSDictionary *)migrateOldPlistToNewPlist:(id)arg0;
+ (NSString *)cloudPlistName;

- (void)dealloc;
- (PLSimpleDCIMDirectory *)init;
- (void)reset;
- (PLSimpleDCIMDirectory *)initWithDirectoryURL:(NSURL *)arg0 subDirectorySuffix:(NSString *)arg1 perDirectoryLimit:(unsigned int)arg2 userInfoPath:(NSString *)arg3;
- (void)setRepresentsCameraRoll:(char)arg0;
- (id)nextAvailableFileURLWithExtension:(id)arg0;
- (char)_ensureDirectoryExists:(id)arg0;
- (NSURL *)currentSubDirectory;
- (void)_saveUserInfo;
- (char)representsCameraRoll;
- (NSURL *)directoryURL;
- (void)_loadUserInfoLastDirectoryNumber:(id *)arg0 lastFileNumber:(id *)arg1;
- (NSNumber *)subDirURLForNumber:(unsigned int)arg0 create:(char)arg1 didCreate:(char *)arg2;
- (struct _NSRange)fileNameNumberRangeForDirNumber:(unsigned int)arg0;
- (NSNumber *)availableFileNameNumbersInDirNumber:(unsigned int)arg0;

@end
