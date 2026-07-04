/* Runtime dump - AVOutputSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputSettings : NSObject <NSCopying>
{
    NSDictionary * _outputSettingsDictionary;
}

@property (readonly, nonatomic) NSSet * compatibleMediaTypes;
@property (readonly, nonatomic) char willYieldCompressedSamples;
@property (readonly, nonatomic) NSDictionary * outputSettingsDictionary;

+ (NSDictionary *)_outputSettingsWithOutputSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (NSArray *)registeredOutputSettingsClasses;
+ (NSArray *)eligibleOutputSettingsDictionaryKeys;
+ (unsigned int)_validateOutputSettingsDictionary:(NSDictionary *)arg0 compatibilityDescription:(id *)arg1;
+ (unsigned int)validateOutputSettingsDictionary:(NSDictionary *)arg0;
+ (AVOutputSettings *)outputSettingsWithOutputSettingsDictionary:(NSDictionary *)arg0;
+ (AVOutputSettings *)defaultOutputSettingsForMediaType:(NSObject *)arg0;

- (NSSet *)compatibleMediaTypes;
- (char)willYieldCompressedSamples;
- (NSDictionary *)outputSettingsDictionary;
- (char)canFullySpecifyOutputFormatReturningReason:(id *)arg0;
- (char)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg0;
- (AVOutputSettings *)initWithOutputSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
- (char)validateUsingOutputSettingsValidator:(NSObject *)arg0 reason:(id *)arg1;
- (void)dealloc;
- (AVOutputSettings *)init;
- (NSString *)description;
- (AVOutputSettings *)copyWithZone:(struct _NSZone *)arg0;

@end
