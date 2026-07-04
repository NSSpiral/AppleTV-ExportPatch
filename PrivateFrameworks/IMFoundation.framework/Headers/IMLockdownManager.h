/* Runtime dump - IMLockdownManager
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLockdownManager : NSObject
{
    char _settingUpActivationState;
    char _isInternalInstall;
    char _isCarrierInstall;
    char _isNonUIInstall;
    char _isVendorInstall;
    char _hasShownMismatchedSIM;
    char _hasShownWaitingAlertThisSession;
    unsigned int _state;
}

@property (readonly, nonatomic) char isNonUIInstall;
@property (readonly, nonatomic) char isVendorInstall;
@property (readonly, nonatomic) char isInternalInstall;
@property (readonly, nonatomic) char isCarrierInstall;
@property (readonly, nonatomic) char isActivated;
@property (readonly, nonatomic) char isExpired;
@property (readonly, nonatomic) NSString * uniqueDeviceIdentifier;
@property (nonatomic) unsigned int _state;
@property (nonatomic) char _settingUpActivationState;
@property (nonatomic) char _isVendorInstall;
@property (nonatomic) char _isInternalInstall;
@property (nonatomic) char _isNonUIInstall;
@property (nonatomic) char _isCarrierInstall;
@property (nonatomic) char _hasShownWaitingAlertThisSession;
@property (nonatomic) char _hasShownMismatchedSIM;

+ (IMLockdownManager *)sharedInstance;

- (void)dealloc;
- (IMLockdownManager *)init;
- (NSString *)description;
- (unsigned int)_state;
- (void)_setState:(unsigned int)arg0;
- (char)_isInternalInstall;
- (char)isActivated;
- (NSString *)uniqueDeviceIdentifier;
- (char)isExpired;
- (char)isNonUIInstall;
- (char)isVendorInstall;
- (void)_calculateInstallType;
- (void)_setupActivationState;
- (int)lockdownState;
- (void)_resetActivationState;
- (char)isCarrierInstall;
- (char)_settingUpActivationState;
- (void)set_settingUpActivationState:(char)arg0;
- (void)set_isInternalInstall:(char)arg0;
- (char)_isCarrierInstall;
- (void)set_isCarrierInstall:(char)arg0;
- (char)_isNonUIInstall;
- (void)set_isNonUIInstall:(char)arg0;
- (char)_isVendorInstall;
- (void)set_isVendorInstall:(char)arg0;
- (char)_hasShownMismatchedSIM;
- (void)set_hasShownMismatchedSIM:(char)arg0;
- (char)_hasShownWaitingAlertThisSession;
- (void)set_hasShownWaitingAlertThisSession:(char)arg0;
- (char)isInternalInstall;

@end
