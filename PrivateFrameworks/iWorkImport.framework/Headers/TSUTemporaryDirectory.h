/* Runtime dump - TSUTemporaryDirectory
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUTemporaryDirectory : NSObject
{
    NSString * _path;
    char _leak;
}

- (void)dealloc;
- (TSUTemporaryDirectory *)init;
- (NSString *)path;
- (NSURL *)URL;
- (TSUTemporaryDirectory *)initWithSignature:(NSObject *)arg0 subdirectory:(NSString *)arg1;
- (void)_createDirectoryWithSignature:(NSObject *)arg0 subdirectory:(NSString *)arg1;
- (TSUTemporaryDirectory *)initWithSignature:(NSObject *)arg0;
- (void)leakTemporaryDirectory;

@end
