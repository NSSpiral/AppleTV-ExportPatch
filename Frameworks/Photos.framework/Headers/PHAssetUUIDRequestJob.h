/* Runtime dump - PHAssetUUIDRequestJob
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetUUIDRequestJob : PLDaemonJob
{
    NSString * _uuid;
    id _completionHandler;
}

@property (copy, nonatomic) NSString * uuid;
@property (copy, nonatomic) id completionHandler;

+ (void)requestUUIDWithCustomUUID:(id)arg0 completionHandler:(id /* block */)arg1;

- (id /* block */)completionHandler;
- (void)run;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (NSString *)uuid;
- (void)setUuid:(NSString *)arg0;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PHAssetUUIDRequestJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (void)handleReply;

@end
