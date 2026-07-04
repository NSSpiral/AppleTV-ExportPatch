/* Runtime dump - AVMediaFileOutputSettingsValidator
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation>
{
    AVMediaFileType * _fileType;
}

@property (readonly, nonatomic) AVMediaFileType * fileType;

+ (AVMediaFileOutputSettingsValidator *)mediaFileOutputSettingsValidatorForFileType:(NSObject *)arg0;
+ (void)initialize;

- (AVMediaFileOutputSettingsValidator *)initWithFileType:(AVMediaFileType *)arg0;
- (char)validateAudioOutputSettings:(NSDictionary *)arg0 reason:(id *)arg1;
- (char)validateVideoOutputSettings:(NSDictionary *)arg0 reason:(id *)arg1;
- (void)dealloc;
- (AVMediaFileOutputSettingsValidator *)init;
- (AVMediaFileType *)fileType;

@end
