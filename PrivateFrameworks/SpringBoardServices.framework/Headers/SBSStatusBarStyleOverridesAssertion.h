/* Runtime dump - SBSStatusBarStyleOverridesAssertion
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertion : NSObject
{
    SBSStatusBarStyleOverridesAssertionData * _assertionData;
    id _invalidationHandler;
    NSObject<OS_dispatch_queue> * _invalidationQueue;
    NSRecursiveLock * _invalidationLock;
}

@property (readonly, nonatomic) int statusBarStyleOverrides;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) char isExclusive;
@property (readonly, copy, nonatomic) NSString * uniqueIdentifier;
@property (copy, nonatomic) id invalidationHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * invalidationQueue;
@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertionData * assertionData;
@property (retain, nonatomic) NSRecursiveLock * invalidationLock;

+ (SBSStatusBarStyleOverridesAssertion *)assertionWithStatusBarStyleOverrides:(int)arg0 forPID:(int)arg1 exclusive:(char)arg2;
+ (SBSStatusBarStyleOverridesAssertion *)backgroundLocationAssertionForPID:(int)arg0;

- (id /* block */)invalidationHandler;
- (char)isExclusive;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)invalidate;
- (NSString *)uniqueIdentifier;
- (void)setInvalidationHandler:(id /* block */)arg0;
- (int)pid;
- (SBSStatusBarStyleOverridesAssertion *)initWithStatusBarStyleOverrides:(int)arg0 forPID:(int)arg1 exclusive:(char)arg2;
- (SBSStatusBarStyleOverridesAssertion *)initWithStatusBarStyleOverridesAssertionData:(NSData *)arg0;
- (int)statusBarStyleOverrides;
- (void)_callInvalidationHandler;
- (SBSStatusBarStyleOverridesAssertionData *)assertionData;
- (void)acquireWithHandler:(id /* block */)arg0 onQueue:(/* block */ id)arg1;
- (NSObject<OS_dispatch_queue> *)invalidationQueue;
- (void)setInvalidationQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)invalidateFromServer;
- (void)setAssertionData:(SBSStatusBarStyleOverridesAssertionData *)arg0;
- (NSRecursiveLock *)invalidationLock;
- (void)setInvalidationLock:(NSRecursiveLock *)arg0;

@end
