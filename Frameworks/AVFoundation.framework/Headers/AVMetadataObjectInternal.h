/* Runtime dump - AVMetadataObjectInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataObjectInternal : NSObject
{
    struct ? _time;
    struct ? _duration;
    struct CGRect _bounds;
    NSString * _type;
    AVCaptureInput * _input;
    AVMetadataObject * _originalMetadataObject;
}

@property struct ? time;
@property struct ? duration;
@property struct CGRect bounds;
@property (retain) NSString * type;
@property (retain) AVCaptureInput * input;
@property (retain) AVMetadataObject * originalMetadataObject;

- (AVMetadataObject *)originalMetadataObject;
- (void)setInput:(AVCaptureInput *)arg0;
- (void)setOriginalMetadataObject:(AVMetadataObject *)arg0;
- (void)dealloc;
- (struct CGRect)bounds;
- (AVMetadataObjectInternal *)init;
- (void)setBounds:(struct CGRect)arg0;
- (struct ?)duration;
- (void)setDuration:(struct ?)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (AVCaptureInput *)input;
- (void)setTime:(struct ?)arg0;
- (struct ?)time;

@end
