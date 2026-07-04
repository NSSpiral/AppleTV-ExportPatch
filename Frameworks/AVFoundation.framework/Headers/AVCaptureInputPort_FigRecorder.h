/* Runtime dump - AVCaptureInputPort_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputPort_FigRecorder : NSObject
{
    AVCaptureInputPortInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) AVCaptureInput_FigRecorder * input;
@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * formatDescription;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) struct OpaqueCMClock * clock;

+ (NSObject *)portWithInput:(AVCaptureInput_FigRecorder *)arg0 mediaType:(NSString *)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 enabled:(char)arg3;
+ (char)automaticallyNotifiesObserversOfClock;

- (struct opaqueCMFormatDescription *)formatDescription;
- (void)_setClock:(struct OpaqueCMClock *)arg0;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription *)arg0;
- (AVCaptureInputPort_FigRecorder *)initWithInput:(AVCaptureInput_FigRecorder *)arg0 mediaType:(NSString *)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 enabled:(char)arg3;
- (void)dealloc;
- (AVCaptureInputPort_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)description;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (AVCaptureInput_FigRecorder *)input;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSString *)mediaType;
- (struct OpaqueCMClock *)clock;
- (void)setOwner:(NSObject *)arg0;

@end
