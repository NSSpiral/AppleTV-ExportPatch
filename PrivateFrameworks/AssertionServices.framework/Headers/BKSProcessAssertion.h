/* Runtime dump - BKSProcessAssertion
 * Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertion : NSObject <BKSProcessAssertionClientHandler>
{
    BSSignal * _invalidationSignal;
    char _acquiring;
    char _acquired;
    int _pid;
    NSString * _identifier;
    NSString * _bundleIdentifier;
    NSString * _name;
    unsigned int _flags;
    unsigned int _reason;
    id _invalidationHandler;
    id _acquisitionHandler;
    BKSProcessAssertionClient * _client;
    NSObject<OS_dispatch_queue> * _clientQueue;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned int reason;
@property (readonly, nonatomic) char valid;
@property (copy, nonatomic) id invalidationHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)NameForReason:(unsigned int)arg0;

- (void)setFlags:(unsigned int)arg0;
- (id /* block */)invalidationHandler;
- (void)dealloc;
- (BKSProcessAssertion *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)invalidate;
- (unsigned int)reason;
- (BKSProcessAssertion *)initWithPID:(int)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(NSString *)arg3 withHandler:(id /* block */)arg4;
- (char)valid;
- (void)setInvalidationHandler:(id /* block */)arg0;
- (void)_clientQueue_setAcquisitionHandler:(id /* block */)arg0;
- (void)_clientQueue_acquireAssertion;
- (void)_clientQueue_updateAssertion;
- (void)_clientQueue_invalidate:(char)arg0;
- (void)_clientQueue_notifyAssertionAcquired:(char)arg0;
- (void)assertionDidInvalidate;
- (id /* block */)acquisitionHandler;
- (void)setAcquisitionHandler:(id /* block */)arg0;
- (BKSProcessAssertion *)initWithBundleIdentifier:(NSString *)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(NSString *)arg3 withHandler:(id /* block */)arg4;
- (unsigned int)flags;
- (void)setReason:(unsigned int)arg0;

@end
