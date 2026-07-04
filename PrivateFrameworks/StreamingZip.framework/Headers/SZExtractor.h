/* Runtime dump - SZExtractor
 * Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface SZExtractor : NSObject
{
    NSXPCConnection * _unzipServiceConnection;
    StreamingUnzipper * _inProcessUnzipper;
    NSObject<OS_dispatch_queue> * _inProcessUnzipQueue;
    char _errorOccurred;
}

+ (void)enableDebugLogging;

- (void).cxx_destruct;
- (SZExtractor *)initWithPath:(NSString *)arg0 md5Hashes:(id)arg1 hashedChunkSize:(unsigned long long)arg2 resumptionOffset:(unsigned long long *)arg3;
- (void)_errorOccurred;
- (void)_invalidateObject;
- (SZExtractor *)initForLocalExtractionWithPath:(NSString *)arg0 options:(NSDictionary *)arg1 resumptionOffset:(unsigned long long *)arg2;
- (SZExtractor *)initForRemoteExtractionWithPath:(NSString *)arg0 options:(NSDictionary *)arg1 resumptionOffset:(unsigned long long *)arg2;
- (SZExtractor *)initWithPath:(NSString *)arg0 options:(NSDictionary *)arg1 resumptionOffset:(unsigned long long *)arg2;
- (SZExtractor *)initWithPath:(NSString *)arg0 resumptionOffset:(unsigned long long *)arg1;
- (void)supplyBytes:(NSData *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)supplyDispatchData:(NSData *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)arg0;
- (void)finishStreamWithCompletionBlock:(id /* block */)arg0;

@end
