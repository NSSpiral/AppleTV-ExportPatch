/* Runtime dump - AVCaptureMetadataInput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataInput : AVCaptureInput
{
    AVCaptureMetadataInputInternal * _internal;
}

+ (NSString *)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 clock:(struct OpaqueCMClock *)arg1;

- (NSString *)sourceID;
- (NSArray *)ports;
- (AVCaptureMetadataInput *)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 clock:(struct OpaqueCMClock *)arg1;
- (char)appendTimedMetadataGroup:(NSObject *)arg0 error:(id *)arg1;
- (void)dealloc;
- (AVCaptureMetadataInput *)init;
- (struct OpaqueCMClock *)clock;

@end
