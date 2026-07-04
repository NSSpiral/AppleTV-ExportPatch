/* Runtime dump - CoreCECBus
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBus : CoreRCBus
{
    char _hasLink;
    struct CECLanguage _tvLanguageCodeASCII;
    unsigned int _physicalAddress;
    unsigned int _systemAudioModeStatus;
    id _osdNameASCII;
}

@property (nonatomic) unsigned int physicalAddress;
@property (nonatomic) char hasLink;
@property (readonly, nonatomic) CoreCECDevice * activeSource;
@property (readonly, nonatomic) NSString * osdName;
@property (readonly, nonatomic) NSString * tvLanguageCode;
@property (nonatomic) unsigned int systemAudioModeStatus;
@property (nonatomic) id osdNameASCII;
@property (nonatomic) struct CECLanguage tvLanguageCodeASCII;

+ (char)supportsSecureCoding;

- (CoreCECBus *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<CoreRCBusDelegate> *)arg0;
- (CoreCECBus *)init;
- (NSString *)description;
- (<CoreRCBusDelegate> *)delegate;
- (CoreCECBus *)initWithBus:(id)arg0;
- (char)hasLink;
- (NSString *)osdNameASCII;
- (unsigned int)physicalAddress;
- (struct CECLanguage)tvLanguageCodeASCII;
- (unsigned int)systemAudioModeStatus;
- (NSString *)osdName;
- (NSString *)tvLanguageCode;
- (CoreCECDevice *)activeSource;
- (void)setOsdNameASCII:(NSString *)arg0;
- (void)setTvLanguageCodeASCII:(struct CECLanguage)arg0;
- (CoreCECBus *)initWithPhysicalAddress:(unsigned int)arg0;
- (NSObject *)addDeviceWithType:(unsigned int)arg0 error:(id *)arg1;
- (NSObject *)rootPhysicalDevice;
- (char)setOSDName:(NSString *)arg0 error:(id *)arg1;
- (char)setTvLanguageCode:(NSString *)arg0 error:(id *)arg1;
- (NSString *)deviceOnBusWithLogicalAddress:(unsigned char)arg0;
- (void)notifyDelegateActiveSourceChangedFrom:(NSObject *)arg0 newActiveSource:(NSObject *)arg1;
- (void)notifyDelegateLinkStateUpdated;
- (void)setPhysicalAddress:(unsigned int)arg0;
- (void)setHasLink:(char)arg0;
- (void)setSystemAudioModeStatus:(unsigned int)arg0;

@end
