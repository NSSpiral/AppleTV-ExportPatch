/* Runtime dump - SBKProcessAssertion
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKProcessAssertion : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    id _expirationBlock;
    unsigned int _identifier;
    BKSProcessAssertion * _bkProcessAssertion;
    id _expirationObserver;
}

@property (readonly) unsigned int identifier;
@property (retain) BKSProcessAssertion * bkProcessAssertion;
@property (retain) id expirationObserver;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (unsigned int)identifier;
- (void).cxx_destruct;
- (void)setBkProcessAssertion:(BKSProcessAssertion *)arg0;
- (void)setExpirationObserver:(NSObject *)arg0;
- (void)_onQueueSetBkProcessAssertion:(id)arg0;
- (SBKProcessAssertion *)initWithExpirationBlock:(id /* block */)arg0 debugDescription:(/* block */ id)arg1;
- (BKSProcessAssertion *)bkProcessAssertion;
- (NSObject *)expirationObserver;
- (void)_expireBackgroundTask;

@end
