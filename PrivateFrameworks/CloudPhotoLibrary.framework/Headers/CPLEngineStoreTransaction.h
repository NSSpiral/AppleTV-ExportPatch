/* Runtime dump - CPLEngineStoreTransaction
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStoreTransaction : NSObject
{
    NSThread * _currentThread;
    char _forWrite;
    NSError * _error;
    NSString * _name;
}

@property (copy, nonatomic) NSError * error;
@property (copy, nonatomic) NSString * name;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (NSError *)error;
- (char)canWrite;
- (char)_forWrite;
- (CPLEngineStoreTransaction *)initForWrite:(char)arg0;
- (char)do:(id)arg0;
- (void)_transactionWillBeginOnThread:(NSObject *)arg0;
- (void)_transactionDidFinish;
- (char)canRead;
- (void)setError:(NSError *)arg0;

@end
