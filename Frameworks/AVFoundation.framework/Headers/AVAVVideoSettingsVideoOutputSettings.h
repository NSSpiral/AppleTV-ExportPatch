/* Runtime dump - AVAVVideoSettingsVideoOutputSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig>
{
    NSDictionary * _adaptedVideoCompressionProperties;
    NSDictionary * _VTPixelAspectRatioDictionary;
    NSDictionary * _VTCleanApertureDictionary;
}

@property (readonly, nonatomic) unsigned long videoCodecType;
@property (readonly, nonatomic) NSDictionary * videoEncoderSpecification;
@property (readonly, nonatomic) NSDictionary * videoCompressionProperties;

+ (NSDictionary *)_videoOutputSettingsWithVideoSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (NSArray *)eligibleOutputSettingsDictionaryKeys;
+ (char)_validateVideoCompressionProperties:(NSDictionary *)arg0 againstSupportedPropertyDictionary:(NSDictionary *)arg1 forCodecType:(NSObject *)arg2 exceptionReason:(id *)arg3;

- (char)willYieldCompressedSamples;
- (unsigned long)videoCodecType;
- (NSDictionary *)videoEncoderSpecification;
- (NSDictionary *)videoCompressionProperties;
- (char)canFullySpecifyOutputFormatReturningReason:(id *)arg0;
- (char)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg0;
- (AVAVVideoSettingsVideoOutputSettings *)initWithTrustedAVVideoSettingsDictionary:(NSDictionary *)arg0;
- (NSDictionary *)pixelAspectRatioDictionary;
- (NSDictionary *)cleanApertureDictionary;
- (AVAVVideoSettingsVideoOutputSettings *)initWithAVVideoSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
- (void)dealloc;
- (int)width;
- (int)height;

@end
