/* Runtime dump - AVCaptureInputPort
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputPort : NSObject
{
    AVCaptureInputPortInternal * _internal;
}

@property (readonly, nonatomic) AVCaptureInput * input;
@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * formatDescription;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) struct OpaqueCMClock * clock;

+ (NSObject *)portWithInput:(AVCaptureInput *)arg0 mediaType:(NSString *)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 enabled:(char)arg3;
+ (char)automaticallyNotifiesObserversOfClock;
+ (AVCaptureInputPort *)alloc;

- (struct opaqueCMFormatDescription *)formatDescription;
- (int)changeSeed;
- (void)bumpChangeSeed;
- (NSString *)sourceID;
- (NSSet *)figCaptureSourceConfigurationForSessionPreset:(NSSet *)arg0;
- (void)_setClock:(struct OpaqueCMClock *)arg0;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription *)arg0;
- (AVCaptureInputPort *)initWithInput:(AVCaptureInput *)arg0 mediaType:(NSString *)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 enabled:(char)arg3;
- (void)dealloc;
- (AVCaptureInputPort *)init;
- (NSString *)description;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (AVCaptureInput *)input;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSString *)mediaType;
- (struct OpaqueCMClock *)clock;
- (void)setOwner:(NSObject *)arg0;

@end
