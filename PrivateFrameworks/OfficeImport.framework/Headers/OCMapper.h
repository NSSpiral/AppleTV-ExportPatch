/* Runtime dump - OCMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCMapper : NSObject
{
    OCCancel * mCancel;
    OITSUTemporaryDirectory * mTemporaryDirectoryObject;
}

+ (NSObject *)mapperForCurrentThread;

- (void)cancel;
- (void)dealloc;
- (OCMapper *)init;
- (char)isCancelled;
- (void)setup;
- (void)teardown;
- (void)quit;
- (NSString *)temporaryDirectoryPath;

@end
