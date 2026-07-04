/* Runtime dump - SKSoundContext
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSoundContext : NSObject
{
    struct ALCdevice_struct * _device;
    struct ALCcontext_struct * _context;
    char _suspended;
}

@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint listenerPosition;
@property (nonatomic) char suspended;

+ (struct ALCcontext_struct *)context;
+ (SKSoundContext *)currentContext;

- (char)suspended;
- (void)makeCurrentContext;
- (struct CGPoint)listenerPosition;
- (void)setListenerPosition:(struct CGPoint)arg0;
- (double)gain;
- (void)setGain:(double)arg0;
- (void)dealloc;
- (SKSoundContext *)init;
- (void)setSuspended:(char)arg0;

@end
