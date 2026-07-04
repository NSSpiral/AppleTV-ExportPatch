/* Runtime dump - MFPowerController
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPowerController : NSObject <MFDiagnosticsGenerator>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _powerQueue;
    int _pluggedIn;
    int _powerToken;
    unsigned int _appState;
    NSCountedSet * _identifiers;
    struct IONotificationPort * _pmPort;
    unsigned int _pmNotifier;
    CDSession * _duetSession;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFPowerController *)sharedInstance;
+ (void)powerlog:(id)arg0 eventData:(NSMutableData *)arg1;

- (void)dealloc;
- (MFPowerController *)init;
- (void)retainAssertionWithIdentifier:(NSString *)arg0 withAccount:(NSObject *)arg1;
- (void)releaseAssertionWithIdentifier:(NSString *)arg0;
- (NSDictionary *)copyDiagnosticInformation;
- (char)isPluggedIn;
- (void)_initDuet;
- (void)_setPluggedIn:(unsigned int)arg0;
- (void)_releaseAssertion_nts;
- (void)_setupAssertionTimer:(double)arg0;
- (void)_retainAssertion_nts;
- (void)retainAssertionWithIdentifier:(NSString *)arg0;
- (NSObject *)_duetAttributeForAccountWithUniqueId:(NSObject *)arg0 discretionary:(char)arg1;
- (void)_deleteDuetAttributesForAccountWithUniqueId:(NSObject *)arg0;
- (char)_createBudgetWithName:(NSString *)arg0 parentBudgetName:(NSString *)arg1 attribute:(NSObject *)arg2 error:(id *)arg3;
- (char)_deleteBudgetWithName:(NSString *)arg0;
- (NSString *)duetIdentifier;
- (void)recordDuetEventForAccount:(NSObject *)arg0 event:(NSObject *)arg1;
- (void)_applicationStateChanged:(NSNotification *)arg0;

@end
