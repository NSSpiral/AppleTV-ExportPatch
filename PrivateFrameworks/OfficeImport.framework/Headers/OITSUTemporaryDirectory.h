/* Runtime dump - OITSUTemporaryDirectory
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUTemporaryDirectory : NSObject
{
    NSString * _path;
    char _leak;
}

- (void)dealloc;
- (OITSUTemporaryDirectory *)init;
- (NSString *)path;
- (NSURL *)URL;
- (OITSUTemporaryDirectory *)initWithSignature:(NSObject *)arg0 subdirectory:(NSString *)arg1;
- (void)_createDirectoryWithSignature:(NSObject *)arg0 subdirectory:(NSString *)arg1;
- (OITSUTemporaryDirectory *)initWithSignature:(NSObject *)arg0;
- (void)leakTemporaryDirectory;

@end
