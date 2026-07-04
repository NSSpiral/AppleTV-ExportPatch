/* Runtime dump - MBFileManager
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileManager : NSObject

+ (MBFileManager *)defaultManager;

- (NSString *)fileAttributesAtPath:(NSString *)arg0 traverseLink:(char)arg1;
- (NSString *)directoryContentsAtPath:(NSString *)arg0;
- (char)createDirectoryAtPath:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (char)fileExistsAtPath:(NSString *)arg0;
- (char)movePath:(NSString *)arg0 toPath:(NSString *)arg1;
- (char)removeFileAtPath:(NSString *)arg0;
- (char)copyPath:(NSString *)arg0 toPath:(NSString *)arg1;

@end
