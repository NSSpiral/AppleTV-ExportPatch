/* Runtime dump - MBFileManagerDelegate
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate>
{
    id _shouldCopyItemAtPathToPath;
}

@property (copy, nonatomic) id shouldCopyItemAtPathToPath;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)fileManager:(TSPDistributableFileManager *)arg0 shouldCopyItemAtPath:(NSString *)arg1 toPath:(NSString *)arg2;
- (NSString *)shouldCopyItemAtPathToPath;
- (void)setShouldCopyItemAtPathToPath:(NSString *)arg0;

@end
