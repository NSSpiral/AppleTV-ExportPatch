/* Runtime dump - BRXPCSyncProxy
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRXPCSyncProxy : NSProxy
{
    NSObject * _target;
    NSObject<OS_dispatch_group> * _group;
    NSError * _error;
    id _result;
    int _nested;
}

@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) id result;

- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (CKDPResponseOperationResult *)result;
- (void)setObjResult:(NSObject *)arg0 error:(NSError *)arg1;
- (id)resultWithTimeout:(int)arg0;
- (NSError *)error;
- (BRXPCSyncProxy *)initWithXPCObject:(NSObject *)arg0;
- (void)setBoolResult:(char)arg0 error:(NSError *)arg1;
- (void)setResult:(NSObject *)arg0;
- (void)setError:(NSError *)arg0;
- (void)finalize;

@end
