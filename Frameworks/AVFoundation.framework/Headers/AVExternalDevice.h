/* Runtime dump - AVExternalDevice
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDevice : NSObject
{
    AVExternalDeviceInternal * _externalDevice;
}

@property (nonatomic) <AVExternalDeviceDelegate> * delegate;
@property (readonly, nonatomic) NSArray * screenIDs;
@property (readonly, nonatomic) NSDictionary * screenInputCapabilities;
@property (readonly, nonatomic) NSData * OEMIcon;
@property (readonly, nonatomic) NSString * OEMIconLabel;
@property (readonly, nonatomic) char OEMIconVisible;
@property (readonly, nonatomic) NSData * settingsIcon;
@property (readonly, nonatomic) NSString * modelName;
@property (readonly, nonatomic) NSArray * externalDeviceHIDs;
@property (readonly, nonatomic) char nightMode;
@property (readonly, nonatomic) char nightModeSupported;
@property (readonly, nonatomic) char rightHandDrive;
@property (readonly, nonatomic) NSArray * limitedUIElements;
@property (readonly, nonatomic) char limitedUI;
@property (readonly, nonatomic) char ownsTurnByTurnNavigation;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * ID;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSData * MFiCertificateSerialNumber;

+ (AVExternalDevice *)sharedLocalDevice;
+ (char)setDiagnosticMode:(char)arg0 error:(id *)arg1;
+ (AVExternalDevice *)currentCarPlayExternalDevice;
+ (AVExternalDevice *)currentExternalDevice;

- (AVWeakReference *)_weakReference;
- (struct OpaqueFigEndpoint *)figEndpoint;
- (AVExternalDevice *)initWithCurrentCarPlayExternalDevice;
- (AVExternalDevice *)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg0;
- (NSString *)_figEndpointPropertyValueForKey:(struct __CFString *)arg0;
- (NSArray *)screenIDs;
- (NSString *)ID;
- (id)externalDeviceHIDWithUUID:(id)arg0;
- (NSData *)OEMIcon;
- (NSString *)OEMIconLabel;
- (char)OEMIconVisible;
- (NSData *)settingsIcon;
- (NSString *)modelName;
- (char)nightMode;
- (char)nightModeSupported;
- (char)ownsTurnByTurnNavigation;
- (NSData *)MFiCertificateSerialNumber;
- (void)requestCarUI;
- (id)requestTurnByTurnNavigationOwnership;
- (NSObject *)borrowScreenForClient:(NSObject *)arg0 reason:(NSString *)arg1;
- (void)takeScreenForClient:(NSObject *)arg0 reason:(NSString *)arg1;
- (void)_triggerFakeNotificationNamed:(id)arg0 withPayload:(NSData *)arg1;
- (char)limitedUI;
- (void)dealloc;
- (void)setDelegate:(<AVExternalDeviceDelegate> *)arg0;
- (AVExternalDevice *)init;
- (<AVExternalDeviceDelegate> *)delegate;
- (NSString *)name;
- (NSDictionary *)screenInputCapabilities;
- (NSArray *)externalDeviceHIDs;
- (NSArray *)limitedUIElements;
- (char)rightHandDrive;
- (int)transportType;
- (void)finalize;

@end
