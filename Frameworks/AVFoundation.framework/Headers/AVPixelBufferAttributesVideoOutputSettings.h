/* Runtime dump - AVPixelBufferAttributesVideoOutputSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig>
{
    NSDictionary * _VTPixelAspectRatioDictionary;
    NSDictionary * _VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary * pixelBufferAttributes;

+ (NSDictionary *)_videoOutputSettingsWithVideoSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (NSArray *)eligibleOutputSettingsDictionaryKeys;

- (NSDictionary *)pixelBufferAttributes;
- (char)willYieldCompressedSamples;
- (char)canFullySpecifyOutputFormatReturningReason:(id *)arg0;
- (char)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg0;
- (AVPixelBufferAttributesVideoOutputSettings *)initWithTrustedPixelBufferAttributes:(NSDictionary *)arg0;
- (NSDictionary *)pixelAspectRatioDictionary;
- (NSDictionary *)cleanApertureDictionary;
- (AVPixelBufferAttributesVideoOutputSettings *)initWithPixelBufferAttributes:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
- (void)dealloc;
- (int)width;
- (int)height;

@end
