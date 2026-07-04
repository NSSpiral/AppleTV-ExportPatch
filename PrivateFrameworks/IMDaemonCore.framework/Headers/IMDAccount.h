/* Runtime dump - IMDAccount
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAccount : NSObject <IMSystemMonitorListener>
{
    NSMutableDictionary * _accountDefaults;
    NSString * _account;
    IMDService * _service;
    IMDServiceSession * _session;
    NSMutableDictionary * _myStatus;
    NSDictionary * _lastPostedStatus;
    char _isLoading;
    char _isManaged;
}

@property (readonly, retain, nonatomic) NSDictionary * accountDefaults;
@property (readonly, retain, nonatomic) NSString * accountID;
@property (readonly, retain, nonatomic) NSString * loginID;
@property (readonly, retain, nonatomic) IMDService * service;
@property (readonly, retain, nonatomic) IMDServiceSession * session;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) char isDisabled;
@property (nonatomic) char isManaged;
@property (readonly, retain, nonatomic) NSDictionary * status;
@property (nonatomic) char isLoading;
@property (nonatomic) char wasDisabledAutomatically;
@property (readonly, nonatomic) char shouldPublishNowPlaying;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) int registrationError;
@property (readonly, retain, nonatomic) NSDictionary * registrationAlertInfo;
@property (readonly, retain, nonatomic) NSDictionary * statusToSave;
@property (readonly, retain, nonatomic) NSDictionary * statusToPost;
@property (readonly, retain, nonatomic) NSDictionary * accountInfoToPost;

- (void)dealloc;
- (char)isActive;
- (char)isLoading;
- (NSDictionary *)status;
- (IMDServiceSession *)session;
- (NSString *)accountID;
- (IMDService *)service;
- (void)setIsLoading:(char)arg0;
- (void)writeAccountDefaults:(id)arg0;
- (NSDictionary *)accountDefaults;
- (char)isManaged;
- (void)postAccountCapabilitiesToListener:(id)arg0;
- (NSDictionary *)statusToPost;
- (char)wasDisabledAutomatically;
- (void)setWasDisabledAutomatically:(char)arg0;
- (char)shouldPublishNowPlaying;
- (void)changeStatus:(id)arg0;
- (void)_updateIdle;
- (NSDictionary *)_registrationInfo;
- (IMDAccount *)initWithAccountID:(NSString *)arg0 defaults:(SBFWallpaperDefaults *)arg1 service:(IMDService *)arg2;
- (void)setIsManaged:(char)arg0;
- (void)postAccountCapabilities;
- (NSDictionary *)accountInfoToPost;
- (void)createSessionIfNecessary;
- (void)releaseSession;
- (NSDictionary *)statusToSave;
- (void)tunesController:(BRController *)arg0 playerInfoChanged:(id)arg1;
- (void)setRegistrationStatus:(int)arg0 error:(int)arg1 alertInfo:(NSDictionary *)arg2;
- (NSString *)loginID;
- (NSDictionary *)registrationAlertInfo;
- (void)systemDidBecomeIdle;
- (void)systemDidBecomeUnidle;
- (int)registrationStatus;
- (char)isDisabled;
- (int)registrationError;

@end
