/* Runtime dump - AVAudioDevice
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVAudioDevice : NSObject
{
    NSString * _deviceName;
    NSNumber * _deviceID;
    char _inputAvailable;
    char _outputAvailable;
    char _isLineIn;
}

@property (readonly, nonatomic) NSString * deviceName;
@property (readonly, nonatomic) NSNumber * deviceID;
@property (readonly, nonatomic) char inputAvailable;
@property (readonly, nonatomic) char outputAvailable;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSNumber *)deviceID;
- (void)createName;
- (NSString *)deviceName;
- (char)isSomethingConnectedToJack;
- (AVAudioDevice *)initWithDeviceID:(NSNumber *)arg0;
- (void)createNameForScope:(unsigned long)arg0;
- (char)isValidDevice;
- (char)isValidInputDevice;
- (char)isStreamAvailableForScope:(unsigned long)arg0;
- (char)inputAvailable;
- (char)outputAvailable;

@end
