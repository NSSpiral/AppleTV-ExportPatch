/* Runtime dump - PLPhotoDCFDirectory
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCFDirectory : PLPhotoDCFObject
{
    PLPhotoDCIMDirectory * _dcimDirectory;
    struct __CFDictionary * _fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
    char _considerInvalidFileGroups;
}

@property char considerInvalidFileGroups;

+ (void)initializeFileGroupPrefixAndExtensions;
+ (PLPhotoDCFDirectory *)fileGroupRequiredEmptyPrefixes;
+ (PLPhotoDCFDirectory *)fileGroupRequiredEmptyExtensions;

- (void)dealloc;
- (PLPhotoDCIMDirectory *)dcimDirectory;
- (NSObject *)nextAvailableFileGroup;
- (void)ensureDirectoryExists;
- (NSString *)_lastUsedFileGroupUserInfoKey;
- (unsigned int)_calculateBaseDirectoryValue;
- (NSString *)fullPath;
- (char)canAddFileGroupWithGroupNumber:(int)arg0;
- (id)fileGroups;
- (char)_canAddItemWithPrefix:(NSString *)arg0 minimumFileGroupNumber:(int)arg1;
- (char)_canAddItemWithPrefix:(NSString *)arg0;
- (char)isEntensionValid:(id)arg0;
- (char)considerInvalidFileGroups;
- (NSString *)_nextAvailableFileGroupWithPrefix:(NSString *)arg0 extension:(id *)arg1;
- (PLPhotoDCFDirectory *)initWithName:(NSString *)arg0 number:(int)arg1 dcimDirectory:(PLPhotoDCIMDirectory *)arg2;
- (char)canAddImage;
- (char)canAddVideo;
- (id)nextAvailableVideoFileGroupWithExtension:(id)arg0;
- (void)removeFileGroup:(NSObject *)arg0;
- (void)setWriteIsPending:(char)arg0;
- (void)setConsiderInvalidFileGroups:(char)arg0;

@end
