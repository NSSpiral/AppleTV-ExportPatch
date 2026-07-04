/* Runtime dump - AVVideoCompositionCoreAnimationTool
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionCoreAnimationTool : NSObject
{
    AVVideoCompositionCoreAnimationToolInternal * _videoCompositionTool;
}

+ (AVVideoCompositionCoreAnimationTool *)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg0 asTrackID:(int)arg1;
+ (AVVideoCompositionCoreAnimationTool *)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg0 inLayer:(CALayer *)arg1;
+ (AVVideoCompositionCoreAnimationTool *)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg0 inLayer:(CALayer *)arg1;

- (char)_hasLayerAsAuxiliaryTrack;
- (CALayer *)_auxiliaryTrackLayer;
- (char)_hasPostProcessingLayers;
- (CALayer *)_postProcessingRootLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingVideoLayers;
- (AVVideoCompositionCoreAnimationTool *)initWithMagicTrackID:(int)arg0 animationLayer:(CALayer *)arg1 videoLayers:(struct __CFDictionary *)arg2;
- (void)dealloc;
- (void)finalize;

@end
