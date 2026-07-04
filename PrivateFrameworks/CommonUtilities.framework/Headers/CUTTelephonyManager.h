/* Runtime dump - CUTTelephonyManager
 * Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTTelephonyManager : NSObject
{
    char _registered;
    NSRecursiveLock * _lock;
    NSMutableSet * _disableFastDormancyTokens;
    void * _suspendDormancyAssertion;
    struct __CTServerConnection * _serverConnection;
}

@property (nonatomic) struct __CTServerConnection * _serverConnection;
@property (nonatomic) char registered;
@property (nonatomic) void * _suspendDormancyAssertion;
@property (retain, nonatomic) NSRecursiveLock * lock;
@property (retain, nonatomic) NSMutableSet * disableFastDormancyTokens;

+ (CUTTelephonyManager *)sharedInstance;

- (char)registered;
- (void)setRegistered:(char)arg0;
- (void)dealloc;
- (CUTTelephonyManager *)init;
- (NSRecursiveLock *)lock;
- (void)setLock:(NSRecursiveLock *)arg0;
- (void)_adjustFastDormancyTokens;
- (char)disableFastDormancy;
- (void)_setFastDormancySuspended:(char)arg0;
- (void)__adjustFastDormancyTokens;
- (void)addFastDormancyDisableToken:(NSString *)arg0;
- (void)removeFastDormancyDisableToken:(NSString *)arg0;
- (NSMutableSet *)disableFastDormancyTokens;
- (void)setDisableFastDormancyTokens:(NSMutableSet *)arg0;
- (struct __CTServerConnection *)_serverConnection;
- (void)set_serverConnection:(struct __CTServerConnection *)arg0;
- (void *)_suspendDormancyAssertion;
- (void)set_suspendDormancyAssertion:(void *)arg0;

@end
