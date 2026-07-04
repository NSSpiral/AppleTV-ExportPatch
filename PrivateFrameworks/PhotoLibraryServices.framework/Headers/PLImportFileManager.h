/* Runtime dump - PLImportFileManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImportFileManager : NSObject

+ (char)isImportDirectoryFolderName:(NSString *)arg0;
+ (char)isCameraDirectoryFolderName:(NSString *)arg0;

- (id)_dcimDirectory;
- (NSNumber *)_DCIMFolderNameWithNumber:(int)arg0;
- (NSNumber *)urlForNewDCIMFolderWithFolderNumber:(int *)arg0;
- (id)nextAvailableFilePathInDirectory:(id)arg0 withExtension:(NSExtension *)arg1;
- (char)removeUnusedDCIMDirectoryAtPath:(NSString *)arg0;

@end
