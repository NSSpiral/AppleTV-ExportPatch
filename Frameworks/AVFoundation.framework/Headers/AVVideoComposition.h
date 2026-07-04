/* Runtime dump - AVVideoComposition
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying>
{
    AVVideoCompositionInternal * _videoComposition;
}

@property (readonly, nonatomic) Class customVideoCompositorClass;
@property (readonly, nonatomic) struct ? frameDuration;
@property (readonly, nonatomic) struct CGSize renderSize;
@property (readonly, nonatomic) float renderScale;
@property (readonly, copy, nonatomic) NSArray * instructions;
@property (readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool * animationTool;

+ (AVVideoComposition *)videoCompositionWithPropertiesOfAsset:(NSSet *)arg0;
+ (AVVideoComposition *)videoCompositionWithPropertiesOfAsset:(NSSet *)arg0 videoGravity:(NSString *)arg1;
+ (void)initialize;

- (struct CGSize)renderSize;
- (char)_isValidReturningExceptionReason:(id *)arg0;
- (float)renderScale;
- (char)_copyFigVideoCompositor:(void * *)arg0 andSession:(void *)arg1 recyclingSession:(id *)arg2 forFigRemaker:(id)arg3 error:(char)arg4;
- (struct ?)frameDuration;
- (NSString *)_serializableInstructions;
- (AVVideoCompositionCoreAnimationTool *)animationTool;
- (unsigned int)_changeSeed;
- (char)isValidForAsset:(NSSet *)arg0 timeRange:(struct ?)arg1 validationDelegate:(struct ?)arg2;
- (char)_hasLayerAsAuxiliaryTrack;
- (CALayer *)_auxiliaryTrackLayer;
- (char)_hasPostProcessingLayers;
- (CALayer *)_postProcessingRootLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingVideoLayers;
- (NSString *)builtInCompositorName;
- (void)setBuiltInCompositorName:(NSString *)arg0;
- (Class)customVideoCompositorClass;
- (void)setCustomVideoCompositorClass:(Class)arg0;
- (void)setFrameDuration:(struct ?)arg0;
- (void)setRenderSize:(struct CGSize)arg0;
- (void)setRenderScale:(float)arg0;
- (void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg0;
- (void)_bumpChangeSeed;
- (CALayer *)_postProcessingVideoLayer;
- (id)instructionForFigInstruction:(void *)arg0;
- (void)dealloc;
- (AVVideoComposition *)init;
- (AVVideoComposition *)copyWithZone:(struct _NSZone *)arg0;
- (AVVideoComposition *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)setInstructions:(NSArray *)arg0;
- (NSArray *)instructions;
- (void)finalize;

@end
