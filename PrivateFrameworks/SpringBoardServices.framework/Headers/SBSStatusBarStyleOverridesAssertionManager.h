/* Runtime dump - SBSStatusBarStyleOverridesAssertionManager
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient>
{
    NSHashTable * _assertions;
    NSXPCConnection * _sbXPCConnection;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (retain, nonatomic) NSHashTable * assertions;
@property (retain, nonatomic) NSXPCConnection * sbXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * internalQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SBSStatusBarStyleOverridesAssertionManager *)sharedInstance;

- (void)dealloc;
- (SBSStatusBarStyleOverridesAssertionManager *)init;
- (void)removeStatusBarStyleOverridesAssertion:(SBSStatusBarStyleOverridesAssertion *)arg0;
- (void)addStatusBarStyleOverridesAssertion:(SBSStatusBarStyleOverridesAssertion *)arg0 withHandler:(id /* block */)arg1 onQueue:(/* block */ id)arg2;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg0;
- (void)_reactivateAssertions;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionMatchingData:(NSData *)arg0 invalidate:(char)arg1;
- (void)_invalidateStatusBarStyleOverridesAssertionsWithData:(NSData *)arg0;
- (NSHashTable *)assertions;
- (void)setAssertions:(NSHashTable *)arg0;
- (NSXPCConnection *)sbXPCConnection;
- (void)setSbXPCConnection:(NSXPCConnection *)arg0;
- (NSObject<OS_dispatch_queue> *)internalQueue;
- (void)setInternalQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_tearDownXPCConnection;

@end
