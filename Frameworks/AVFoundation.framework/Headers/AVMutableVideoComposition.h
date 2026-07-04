/* Runtime dump - AVMutableVideoComposition
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableVideoComposition : AVVideoComposition
{
    AVMutableVideoCompositionInternal * _mutableVideoComposition;
}

@property (retain, nonatomic) Class customVideoCompositorClass;
@property (nonatomic) struct ? frameDuration;
@property (nonatomic) struct CGSize renderSize;
@property (nonatomic) float renderScale;
@property (copy, nonatomic) NSArray * instructions;
@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool * animationTool;

+ (AVVideoComposition *)videoComposition;
+ (NSSet *)videoCompositionWithPropertiesOfAsset:(NSSet *)arg0;
+ (NSSet *)videoCompositionWithPropertiesOfAsset:(NSSet *)arg0 videoGravity:(NSString *)arg1;

- (struct CGSize)renderSize;
- (float)renderScale;
- (struct ?)frameDuration;
- (AVVideoCompositionCoreAnimationTool *)animationTool;
- (NSString *)builtInCompositorName;
- (void)setBuiltInCompositorName:(NSString *)arg0;
- (Class)customVideoCompositorClass;
- (void)setCustomVideoCompositorClass:(Class)arg0;
- (void)setFrameDuration:(struct ?)arg0;
- (void)setRenderSize:(struct CGSize)arg0;
- (void)setRenderScale:(float)arg0;
- (void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg0;
- (void)setInstructions:(NSArray *)arg0;
- (NSArray *)instructions;

@end
