/* Runtime dump - QLPreviewItemAVState
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewItemAVState : NSObject <NSSecureCoding>
{
    char playing;
    double position;
    double duration;
}

@property double position;
@property double duration;
@property char playing;

+ (NSObject *)avStateWithPosition:(double)arg0 duration:(double)arg1 playing:(char)arg2;
+ (char)supportsSecureCoding;

- (QLPreviewItemAVState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setPosition:(double)arg0;
- (double)position;
- (char)isPlaying;
- (void)setPlaying:(char)arg0;

@end
