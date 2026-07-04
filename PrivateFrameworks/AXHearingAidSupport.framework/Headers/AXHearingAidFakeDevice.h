/* Runtime dump - AXHearingAidFakeDevice
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingAidFakeDevice : AXHearingAidDevice
{
    NSMutableArray * _leftFakePrograms;
    NSMutableArray * _rightFakePrograms;
    char _isConnecting;
    char _connected;
    NSString * _name;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _leftUUID;
    NSString * _rightUUID;
    float _rightBatteryLevel;
    float _leftBatteryLevel;
    NSString * _leftFirmwareVersion;
    NSString * _rightFirmwareVersion;
    NSString * _leftHardwareVersion;
    NSString * _rightHardwareVersion;
    NSDate * _leftBatteryLowDate;
    NSDate * _rightBatteryLowDate;
    NSString * _deviceUUID;
    int _type;
}

@property (nonatomic) int type;
@property (nonatomic) char connected;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * manufacturer;
@property (retain, nonatomic) NSString * model;
@property (retain, nonatomic) NSString * leftUUID;
@property (retain, nonatomic) NSString * rightUUID;
@property (nonatomic) float rightBatteryLevel;
@property (nonatomic) float leftBatteryLevel;
@property (nonatomic) char isConnecting;
@property (retain, nonatomic) NSString * leftFirmwareVersion;
@property (retain, nonatomic) NSString * rightFirmwareVersion;
@property (retain, nonatomic) NSString * leftHardwareVersion;
@property (retain, nonatomic) NSString * rightHardwareVersion;
@property (retain, nonatomic) NSDate * leftBatteryLowDate;
@property (retain, nonatomic) NSDate * rightBatteryLowDate;
@property (retain, nonatomic) NSString * deviceUUID;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)model;
- (void)connect;
- (char)isPersistent;
- (void *)valueForProperty:(int)arg0;
- (void)disconnect;
- (void)setModel:(NSString *)arg0;
- (char)leftAvailable;
- (char)rightAvailable;
- (float)leftBatteryLevel;
- (float)rightBatteryLevel;
- (void)setDeviceUUID:(NSString *)arg0;
- (void)setLeftUUID:(NSString *)arg0;
- (void)setRightUUID:(NSString *)arg0;
- (NSString *)leftUUID;
- (NSString *)rightUUID;
- (void)setLeftFirmwareVersion:(NSString *)arg0;
- (void)setRightFirmwareVersion:(NSString *)arg0;
- (void)setLeftHardwareVersion:(NSString *)arg0;
- (void)setRightHardwareVersion:(NSString *)arg0;
- (NSString *)deviceUUID;
- (NSArray *)leftPrograms;
- (NSArray *)rightPrograms;
- (char)didLoadRequiredProperties;
- (void)setLeftBatteryLevel:(float)arg0;
- (void)setRightBatteryLevel:(float)arg0;
- (void)setLeftBatteryLowDate:(NSDate *)arg0;
- (void)setRightBatteryLowDate:(NSDate *)arg0;
- (NSString *)leftFirmwareVersion;
- (NSString *)rightFirmwareVersion;
- (NSString *)leftHardwareVersion;
- (NSString *)rightHardwareVersion;
- (NSDate *)leftBatteryLowDate;
- (NSDate *)rightBatteryLowDate;
- (char)hasConnection;
- (char)didLoadBasicProperties;
- (void)setIsConnecting:(char)arg0;
- (NSDictionary *)persistentRepresentation;
- (void)writeInt:(unsigned char)arg0 toPeripheral:(CBPeripheral *)arg1 forProperty:(int)arg2;
- (AXHearingAidFakeDevice *)initWithDeviceType:(int)arg0;
- (NSObject *)manufacturerForType;
- (NSObject *)modelForType;
- (void)createPrograms;
- (void)setConnected:(char)arg0;
- (char)isPaired;
- (void)setManufacturer:(NSString *)arg0;
- (NSString *)manufacturer;
- (void)setValue:(NSObject *)arg0 forProperty:(int)arg1;
- (void)persist;
- (char)isConnecting;
- (char)isConnected;
- (char)connected;

@end
