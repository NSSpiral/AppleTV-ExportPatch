/* Runtime dump - AVExternalDeviceHID
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceHID : NSObject
{
    AVExternalDeviceHIDInternal * _externalDeviceHID;
}

@property (readonly, nonatomic) NSString * UUID;
@property (readonly, nonatomic) NSString * screenID;
@property (nonatomic) int inputMode;

- (NSString *)screenID;
- (AVExternalDevice *)_externalDevice;
- (id)_figEndpointHIDInputMode;
- (AVExternalDeviceHID *)initWithExternalDeviceAndHIDDictionary:(NSDictionary *)arg0 hidDictionary:(NSDictionary *)arg1;
- (void)dealloc;
- (NSString *)UUID;
- (void)setInputMode:(int)arg0;
- (int)inputMode;
- (void)finalize;

@end
