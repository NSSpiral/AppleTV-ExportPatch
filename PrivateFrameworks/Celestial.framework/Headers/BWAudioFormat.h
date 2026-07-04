/* Runtime dump - BWAudioFormat
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioFormat : BWFormat
{
    struct opaqueCMFormatDescription * _audioFormatDescription;
    NSDictionary * _avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription * audioFormatDescription;
@property (readonly) NSDictionary * audioCompressionSBPOptions;

+ (void)initialize;
+ (NSString *)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription *)arg0;
+ (NSDictionary *)formatForAVAudioSettings:(NSDictionary *)arg0 inputFormat:(NSString *)arg1;

- (struct opaqueCMFormatDescription *)formatDescription;
- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)_initWithAudioFormatDescription:(struct opaqueCMFormatDescription *)arg0;
- (NSDictionary *)_initForAVAudioSettings:(NSDictionary *)arg0 inputFormat:(NSString *)arg1;
- (struct opaqueCMFormatDescription *)audioFormatDescription;
- (NSDictionary *)audioCompressionSBPOptions;
- (unsigned long)mediaType;

@end
