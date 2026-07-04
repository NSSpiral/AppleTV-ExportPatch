/* Runtime dump - PLPhotoDCIMDirectory
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCIMDirectory : NSObject
{
    NSString * _dcimPath;
    NSString * _miscPath;
    NSString * _posterImagePath;
    NSMutableArray * _topLevelDirectories;
    struct __CFDictionary * _topLevelDirectoriesByNumber;
    struct __CFSet * _unusableTopLevelDirectoryNumbers;
    int _lastUsedDirectoryNumber;
    NSMutableDictionary * _userInfo;
    char _userInfoDidChange;
    struct flock * _dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
}

- (void)dealloc;
- (NSMutableDictionary *)userInfo;
- (void)setUserInfoObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (PLPhotoDCIMDirectory *)initWithDCIMPath:(NSString *)arg0;
- (void)lockDirectory;
- (id)nextAvailableDirectory;
- (void)unlockDirectory;
- (NSString *)userInfoObjectForKey:(NSString *)arg0;
- (void)saveUserInfo;
- (NSString *)dcimPath;
- (void)reloadUserInfo;
- (NSString *)miscPath;
- (NSString *)_userInfoPath;
- (void)recreateInfoPlist;
- (id)dcfDirectories;
- (char)isValidImageExtension:(id)arg0;
- (char)isValidVideoExtension:(id)arg0;
- (void)countOfAllPhotos:(int *)arg0 andVideos:(int *)arg1 stopAfterFirst:(char)arg2;
- (NSString *)posterImagePath;
- (void)clearDCFDirectories;
- (id)countOfAllPhotosAndVideos;
- (char)hasChangedExternally;
- (void)setHasChangedExternally:(char)arg0;

@end
