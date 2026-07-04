/* Runtime dump - AVFormatSpecification
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFormatSpecification : NSObject
{
    AVOutputSettings * _outputSettings;
    struct opaqueCMFormatDescription * _sourceFormatDescription;
}

+ (AVFormatSpecification *)formatSpecificationWithOutputSettings:(AVOutputSettings *)arg0 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg1;

- (struct opaqueCMFormatDescription *)sourceFormatDescription;
- (AVFormatSpecification *)initWithOutputSettings:(AVOutputSettings *)arg0 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (void)dealloc;
- (AVOutputSettings *)outputSettings;

@end
