/* Runtime dump - SBKTaskAssertion
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKTaskAssertion : NSObject
{
    id _expireHandler;
    NSString * _debugInfo;
    SBKProcessAssertion * _processAssertion;
}

+ (SBKTaskAssertion *)newBackgroundTaskWithExpirationHandler:(NSDate *)arg0 debugInfo:(/* block */ id)arg1;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (void).cxx_destruct;
- (SBKTaskAssertion *)initWithExpirationHandler:(NSDate *)arg0 debugInfo:(/* block */ id)arg1;
- (void)performExpirationHandler;

@end
