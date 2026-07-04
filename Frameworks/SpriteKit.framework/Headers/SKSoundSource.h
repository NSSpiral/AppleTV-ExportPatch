/* Runtime dump - SKSoundSource
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSoundSource : NSObject
{
    unsigned int _sourceId;
    NSMutableArray * _buffers;
}

@property (nonatomic) char shouldLoop;
@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint position;
@property (readonly, nonatomic) char isPlaying;
@property (readonly, nonatomic) int completedBufferCount;
@property (readonly, nonatomic) int queuedBufferCount;

+ (NSObject *)sourceWithBuffer:(TSCH3DDataBuffer *)arg0;
+ (void *)source;

- (void)play;
- (double)gain;
- (void)setGain:(double)arg0;
- (void)queueBuffer:(NSObject *)arg0;
- (int)completedBufferCount;
- (int)queuedBufferCount;
- (void)purgeCompletedBuffers;
- (char)shouldLoop;
- (void)setShouldLoop:(char)arg0;
- (void)dealloc;
- (SKSoundSource *)init;
- (NSString *)description;
- (void)stop;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (void).cxx_destruct;
- (void)pause;
- (char)isPlaying;

@end
