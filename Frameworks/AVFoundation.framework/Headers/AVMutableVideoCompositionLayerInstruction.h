/* Runtime dump - AVMutableVideoCompositionLayerInstruction
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction
{
    AVMutableVideoCompositionLayerInstructionInternal * _mutableLayerInstruction;
}

@property (nonatomic) int trackID;

+ (NSObject *)videoCompositionLayerInstructionWithAssetTrack:(AVAssetTrack *)arg0;
+ (AVMutableVideoCompositionLayerInstruction *)videoCompositionLayerInstruction;

- (void)setTrackID:(int)arg0;
- (void)setTransform:(struct CGAffineTransform)arg0 atTime:(struct ?)arg1;
- (void)setOpacity:(float)arg0 atTime:(struct ?)arg1;
- (void)setCropRectangle:(struct CGRect)arg0 atTime:(struct CGSize)arg1;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform)arg0 toEndTransform:(struct CGAffineTransform)arg1 timeRange:(struct ?)arg2;
- (void)setOpacityRampFromStartOpacity:(float)arg0 toEndOpacity:(float)arg1 timeRange:(struct ?)arg2;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg0 toEndCropRectangle:(struct CGSize)arg1 timeRange:(struct ?)arg2;
- (int)trackID;

@end
