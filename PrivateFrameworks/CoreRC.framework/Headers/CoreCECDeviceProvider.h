/* Runtime dump - CoreCECDeviceProvider
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECDeviceProvider : CoreCECDevice
{
    struct ? _userControlInitiatorState;
    struct ? _userControlFollowerState;
    unsigned int _userControlInitiatorRepetitionTimeoutGeneration;
    unsigned int _userControlFollowerSafetyTimeoutGeneration;
    unsigned char _sendFromAddress;
    unsigned short _deckStatusRequestMask;
}

@property (nonatomic) unsigned char sendFromAddress;
@property (readonly, nonatomic) unsigned short deckStatusRequestMask;

+ (char)supportsSecureCoding;

- (CoreCECDeviceProvider *)initWithDevice:(NSObject *)arg0;
- (void)dealloc;
- (CoreCECDeviceProvider *)initWithCoder:(NSCoder *)arg0;
- (CoreCECDeviceProvider *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CoreCECDeviceProvider *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (char)giveDeviceVendorIDTo:(unsigned char)arg0 error:(id *)arg1;
- (void)didNotHandleMessage:(NSString *)arg0 unsupportedOperand:(char)arg1;
- (NSString *)filterMessage:(NSString *)arg0 toDevice:(NSObject *)arg1;
- (char)refreshProperties:(NSDictionary *)arg0 ofDevice:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlSetDeckStatus:(unsigned int)arg0 error:(id *)arg1;
- (char)deckControlCommandWithMode:(unsigned int)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlPlayWithMode:(unsigned int)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlRefreshStatus:(id)arg0 requestType:(unsigned int)arg1 error:(id *)arg2;
- (char)makeActiveSourceWithTVMenus:(char)arg0 error:(id *)arg1;
- (char)performStandbyWithTargetDevice:(NSObject *)arg0 error:(id *)arg1;
- (char)requestActiveSource:(id *)arg0;
- (char)resignActiveSource:(id *)arg0;
- (char)setSystemAudioControlEnabled:(char)arg0 error:(id *)arg1;
- (char)systemAudioModeRequest:(unsigned int)arg0 error:(id *)arg1;
- (CoreCECDeviceProvider *)initWithBus:(id)arg0 logicalAddress:(unsigned char)arg1 physicalAddress:(unsigned int)arg2 deviceType:(unsigned int)arg3;
- (char)sendHIDEvent:(NSObject *)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (void)setSendFromAddress:(unsigned char)arg0;
- (char)reportPhysicalAddress:(id *)arg0;
- (char)updateActiveSourceStatus:(char)arg0 error:(id *)arg1;
- (NSString *)filterMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (char)sendMessage:(NSString *)arg0 withRetryCount:(unsigned char)arg1 error:(id *)arg2;
- (void)didReceiveMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1 broadcast:(char)arg2;
- (void)trackMessage:(NSString *)arg0 toDevice:(NSObject *)arg1;
- (void)trackMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (char)sendMessage:(NSString *)arg0 error:(id *)arg1;
- (char)getCECVersionTo:(unsigned char)arg0 error:(id *)arg1;
- (unsigned char)sendFromAddress;
- (void)sendDeckStatusToDevice:(NSObject *)arg0;
- (char)deckControlWithMode:(unsigned int)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (char)playWithMode:(unsigned int)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (char)giveDeckStatusWithRequest:(unsigned char)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (char)oneTouchPlayWithMenu:(char)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (char)standbyTo:(unsigned char)arg0 error:(id *)arg1;
- (char)givePhysicalAddressTo:(unsigned char)arg0 error:(id *)arg1;
- (char)giveDevicePowerStatusTo:(unsigned char)arg0 error:(id *)arg1;
- (char)getRemoteControlDestination:(id *)arg0 logicalAddress:(unsigned char *)arg1 forTargetDevice:(NSObject *)arg2 command:(unsigned char)arg3 error:(id *)arg4;
- (void)userControlScheduleInitiatorRepetitionTimeout;
- (char)userControlPressed:(struct CECUserControl)arg0 to:(unsigned char)arg1 error:(unsigned char)arg2;
- (void)userControlCancelInitiatorRepetitionTimeout;
- (char)userControlReleasedTo:(unsigned char)arg0 error:(id *)arg1;
- (char)sendActiveSourceStatus:(char)arg0 error:(id *)arg1;
- (char)giveSystemAudioModeStatusTo:(unsigned char)arg0 error:(id *)arg1;
- (NSObject *)busProvider;
- (char)systemAudioModeRequest:(unsigned char)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (void)userControlInitiatorRepetitionTimeoutExpired;
- (void)userControlFollowerSafetyTimeoutExpired;
- (void)userControlFollowerSynthesizeRelease;
- (char)handleUserControl:(struct CECUserControl)arg0 pressed:(unsigned char)arg1 fromDevice:(unsigned char)arg2 abortReason:(unsigned char)arg3;
- (void)handleCECVersionMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleGetCECVersionMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (char)setMenuLanguage:(struct CECLanguage)arg0 error:(id *)arg1;
- (char)setOSDName:(NSString *)arg0 to:(unsigned char)arg1 error:(NSError *)arg2;
- (void)sendFeatureAbort:(unsigned char)arg0 forMessage:(NSString *)arg1;
- (void)handleSetSystemAudioModeMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleReportPowerStatusMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleGiveDevicePowerStatusMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleGiveDeckStatusMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleUserControlPressedMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleUserControlReleasedMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleDeviceVendorIDMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleGiveDeviceVendorIDMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)handleSystemAudioModeStatusMessage:(NSString *)arg0 fromDevice:(NSObject *)arg1;
- (void)error:(NSError *)arg0 handlingMessage:(NSString *)arg1 fromDevice:(NSObject *)arg2;
- (char)deviceVendorID:(unsigned int)arg0 error:(id *)arg1;
- (char)cecVersion:(unsigned char)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (char)reportPowerStatus:(unsigned char)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (void)userControlScheduleFollowerSafetyTimeout;
- (void)userControlCancelFollowerSafetyTimeout;
- (char)activeSource:(id *)arg0;
- (char)inactiveSourceTo:(unsigned char)arg0 error:(id *)arg1;
- (char)deckStatusWithInfo:(unsigned int)arg0 to:(unsigned char)arg1 error:(id *)arg2;
- (char)featureAbort:(unsigned char)arg0 reason:(unsigned char)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (char)imageViewOnTo:(unsigned char)arg0 error:(id *)arg1;
- (char)textViewOnTo:(unsigned char)arg0 error:(id *)arg1;
- (char)routingChangeOriginalAddress:(unsigned int)arg0 newAddress:(unsigned int)arg1 error:(id *)arg2;
- (char)routingInformationPhysicalAddress:(unsigned int)arg0 error:(id *)arg1;
- (char)setStreamPathPhysicalAddress:(unsigned int)arg0 error:(id *)arg1;
- (char)getMenuLanguageTo:(unsigned char)arg0 error:(id *)arg1;
- (char)pollTo:(unsigned char)arg0 error:(id *)arg1;
- (char)giveOSDNameTo:(unsigned char)arg0 error:(id *)arg1;
- (char)abortTo:(unsigned char)arg0 error:(id *)arg1;
- (unsigned short)deckStatusRequestMask;

@end
