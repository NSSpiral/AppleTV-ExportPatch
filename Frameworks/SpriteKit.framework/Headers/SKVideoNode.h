/* Runtime dump - SKVideoNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKVideoNode : SKNode
{
    char _isLoaded;
    NSString * _videoFileName;
    NSURL * _videoFileURL;
    AVPlayer * _player;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGPoint anchorPoint;
@property (retain, nonatomic) AVPlayer * _player;

+ (SKVideoNode *)videoNodeWithVideoFileNamed:(id)arg0;
+ (SKVideoNode *)videoNodeWithVideoURL:(NSURL *)arg0;
+ (SKVideoNode *)videoNodeWithAVPlayer:(id)arg0;

- (AVPlayer *)_player;
- (void)play;
- (SKVideoNode *)initWithAVPlayer:(AVPlayer *)arg0;
- (char)isEqualToNode:(NSObject *)arg0;
- (SKVideoNode *)initWithVideoFileNamed:(id)arg0;
- (void)set_player:(AVPlayer *)arg0;
- (struct CGSize)size;
- (SKVideoNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKVideoNode *)init;
- (NSString *)description;
- (void)setSize:(struct CGSize)arg0;
- (struct CGPoint)anchorPoint;
- (void)setAnchorPoint:(struct CGPoint)arg0;
- (void)setPaused:(char)arg0;
- (void).cxx_destruct;
- (void)pause;
- (SKVideoNode *)initWithVideoURL:(NSURL *)arg0;
- (char)isPaused;

@end
