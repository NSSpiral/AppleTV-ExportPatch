/* Runtime dump - AVVideoOutputSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoOutputSettings : AVOutputSettings

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) NSDictionary * cleanApertureDictionary;
@property (readonly, nonatomic) NSDictionary * pixelAspectRatioDictionary;
@property (readonly, nonatomic) NSDictionary * pixelTransferProperties;
@property (readonly, nonatomic) NSDictionary * videoScalingProperties;
@property (readonly, nonatomic) NSDictionary * videoCompositionProcessorProperties;
@property (readonly, nonatomic) char dimensionsAreBoundingBox;
@property (readonly, nonatomic) NSDictionary * videoSettingsDictionary;

+ (NSDictionary *)_outputSettingsWithOutputSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (NSDictionary *)_videoOutputSettingsWithVideoSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (AVVideoOutputSettings *)videoOutputSettingsWithVideoSettingsDictionary:(NSDictionary *)arg0;
+ (NSArray *)registeredOutputSettingsClasses;
+ (AVVideoOutputSettings *)defaultVideoOutputSettings;
+ (AVVideoOutputSettings *)_validValuesForScalingMode;
+ (AVVideoOutputSettings *)videoOutputSettingsWithTrustedVideoSettingsDictionary:(NSDictionary *)arg0;

- (NSSet *)compatibleMediaTypes;
- (NSDictionary *)pixelTransferProperties;
- (NSDictionary *)videoScalingProperties;
- (NSDictionary *)videoSettingsDictionary;
- (NSDictionary *)videoCompositionProcessorProperties;
- (char)validateUsingOutputSettingsValidator:(NSObject *)arg0 reason:(id *)arg1;
- (AVVideoOutputSettings *)initWithVideoSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
- (NSDictionary *)pixelAspectRatioDictionary;
- (NSDictionary *)cleanApertureDictionary;
- (char)dimensionsAreBoundingBox;
- (int)width;
- (int)height;

@end
