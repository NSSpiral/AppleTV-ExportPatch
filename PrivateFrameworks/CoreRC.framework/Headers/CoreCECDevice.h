/* Runtime dump - CoreCECDevice
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECDevice : CoreRCDevice
{
    unsigned char _logicalAddress;
    char _isActiveSource;
    char _systemAudioControlEnabled;
    unsigned char _deckStatusInternal;
    unsigned int _physicalAddress;
    unsigned int _deviceType;
    unsigned int _cecVersion;
    unsigned int _vendorID;
    unsigned int _powerStatus;
}

@property (nonatomic) unsigned char logicalAddress;
@property (nonatomic) unsigned int physicalAddress;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) unsigned int cecVersion;
@property (nonatomic) unsigned int vendorID;
@property (nonatomic) unsigned int powerStatus;
@property (nonatomic) char isActiveSource;
@property (readonly, nonatomic) char systemAudioControlEnabled;
@property (readonly, nonatomic) unsigned int deckStatus;
@property (nonatomic) unsigned char deckStatusInternal;

+ (char)supportsSecureCoding;

- (CoreCECDevice *)initWithDevice:(NSObject *)arg0;
- (CoreCECDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<CoreRCDeviceDelegate> *)arg0;
- (CoreCECDevice *)init;
- (NSString *)description;
- (<CoreRCDeviceDelegate> *)delegate;
- (unsigned int)powerStatus;
- (void)deckControlPlayHasBeenReceived:(unsigned int)arg0 fromDevice:(NSObject *)arg1;
- (void)deckControlCommandHasBeenReceived:(unsigned int)arg0 fromDevice:(NSObject *)arg1;
- (void)deckControlStatusHasBeenUpdated:(unsigned int)arg0 fromDevice:(NSObject *)arg1;
- (void)featureAbort:(NSError *)arg0;
- (void)standbyRequestHasBeenReceived:(CoreCECDevice *)arg0;
- (unsigned int)physicalAddress;
- (char)isActiveSource;
- (CoreCECDevice *)initWithDeviceType:(unsigned int)arg0 logicalAddress:(unsigned char)arg1 onBus:(id)arg2 physicalAddress:(unsigned int)arg3;
- (unsigned char)logicalAddress;
- (void)setPhysicalAddress:(unsigned int)arg0;
- (void)setLogicalAddress:(unsigned char)arg0;
- (void)setVendorID:(unsigned int)arg0;
- (unsigned int)cecVersion;
- (unsigned char)deckStatusInternal;
- (char)systemAudioControlEnabled;
- (unsigned int)deckStatus;
- (char)isLocalDevice;
- (char)refreshProperties:(NSDictionary *)arg0 ofDevice:(NSObject *)arg1 error:(id *)arg2;
- (void)notifyDelegateDeckControlCommandHasBeenReceived:(id)arg0 command:(unsigned int)arg1;
- (void)notifyDelegateDeckControlPlayHasBeenReceived:(id)arg0 playMode:(unsigned int)arg1;
- (void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)arg0 deckInfo:(unsigned int)arg1;
- (void)notifyDelegateFeatureAbort:(id)arg0;
- (void)notifyDelegateStandbyRequestHasBeenReceived:(id)arg0;
- (NSDictionary *)mergeProperties;
- (char)deckControlSetDeckStatus:(unsigned int)arg0 error:(id *)arg1;
- (char)deckControlCommandWithMode:(unsigned int)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlPlayWithMode:(unsigned int)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlRefreshStatus:(id)arg0 requestType:(unsigned int)arg1 error:(id *)arg2;
- (char)makeActiveSourceWithTVMenus:(char)arg0 error:(id *)arg1;
- (char)performStandbyWithTargetDevice:(NSObject *)arg0 error:(id *)arg1;
- (char)refreshDevices:(id *)arg0;
- (char)refreshPropertiesOfDevice:(NSObject *)arg0 error:(id *)arg1;
- (char)requestActiveSource:(id *)arg0;
- (char)resignActiveSource:(id *)arg0;
- (char)setSystemAudioControlEnabled:(char)arg0 error:(id *)arg1;
- (char)systemAudioModeRequest:(unsigned int)arg0 error:(id *)arg1;
- (void)notifyDelegateActiveSourceStatusHasChanged;
- (void)setDeviceType:(unsigned int)arg0;
- (void)setCecVersion:(unsigned int)arg0;
- (void)setPowerStatus:(unsigned int)arg0;
- (void)setIsActiveSource:(char)arg0;
- (void)setDeckStatusInternal:(unsigned char)arg0;
- (unsigned int)vendorID;
- (unsigned int)deviceType;

@end
