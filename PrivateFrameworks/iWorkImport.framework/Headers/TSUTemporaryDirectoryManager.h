/* Runtime dump - TSUTemporaryDirectoryManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUTemporaryDirectoryManager : NSObject
{
    NSURL * _baseDirectoryURL;
}

+ (NSURL *)baseDirectoryURL;
+ (TSUTemporaryDirectoryManager *)sharedManager;

- (id)_readDirectories;
- (void)_clearDirectories:(id)arg0;
- (id)newDirectory;
- (TSUTemporaryDirectoryManager *)init;
- (void).cxx_destruct;

@end
