/* Runtime dump - GSDaemonProxySync
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSDaemonProxySync : NSProxy <GSProtocol>
{
    NSObject<GSProtocol> * _proxy;
    NSObject<OS_dispatch_group> * _group;
    NSError * _error;
    id _result;
    int _recursive;
}

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError * error;

+ (NSObject<GSProtocol> *)proxy;

- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (CKDPResponseOperationResult *)result;
- (NSError *)error;
- (GSDaemonProxySync *)initWithXPCObject:(NSObject *)arg0;
- (void)setResult:(NSObject *)arg0;
- (void)handleObjResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)handleBoolResult:(char)arg0 error:(NSError *)arg1;
- (NSError *)waitForResultWithError:(id *)arg0;
- (NSError *)waitForResultWithCFError:(struct __CFError * *)arg0;
- (void)setError:(NSError *)arg0;
- (void)finalize;

@end
