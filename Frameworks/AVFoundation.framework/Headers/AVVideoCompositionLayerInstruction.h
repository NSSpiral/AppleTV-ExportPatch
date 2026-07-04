/* Runtime dump - AVVideoCompositionLayerInstruction
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    AVVideoCompositionLayerInstructionInternal * _layerInstruction;
}

@property (readonly, nonatomic) int trackID;

+ (void)initialize;
+ (char)supportsSecureCoding;

- (void)setTrackID:(int)arg0;
- (NSObject *)dictionaryRepresentationWithTimeRange:(struct ?)arg0;
- (void)_setValuesFromDictionary:(NSDictionary *)arg0 timeRange:(struct ?)arg1;
- (void)_setTransformRamps:(id)arg0;
- (void)_setOpacityRamps:(id)arg0;
- (void)_setCropRectangleRamps:(id)arg0;
- (void)_setTransformRampFromStartTransform:(struct CGAffineTransform)arg0 toEndTransform:(struct CGAffineTransform)arg1 timeRange:(struct ?)arg2 selector:(struct ?)arg3;
- (void)_setOpacityRampFromStartOpacity:(float)arg0 toEndOpacity:(float)arg1 timeRange:(struct ?)arg2 selector:(struct ?)arg3;
- (void)_setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg0 toEndCropRectangle:(struct CGSize)arg1 timeRange:(struct ?)arg2 selector:(struct CGRect)arg3;
- (void)setTransform:(struct CGAffineTransform)arg0 atTime:(struct ?)arg1;
- (void)setOpacity:(float)arg0 atTime:(struct ?)arg1;
- (void)setCropRectangle:(struct CGRect)arg0 atTime:(struct CGSize)arg1;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform)arg0 toEndTransform:(struct CGAffineTransform)arg1 timeRange:(struct ?)arg2;
- (void)setOpacityRampFromStartOpacity:(float)arg0 toEndOpacity:(float)arg1 timeRange:(struct ?)arg2;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg0 toEndCropRectangle:(struct CGSize)arg1 timeRange:(struct ?)arg2;
- (char)getTransformRampForTime:(struct ?)arg0 startTransform:(struct CGAffineTransform *)arg1 endTransform:(struct CGAffineTransform *)arg2 timeRange:(struct ? *)arg3;
- (char)getOpacityRampForTime:(struct ?)arg0 startOpacity:(float *)arg1 endOpacity:(float *)arg2 timeRange:(struct ? *)arg3;
- (char)getCropRectangleRampForTime:(struct ?)arg0 startCropRectangle:(struct CGRect *)arg1 endCropRectangle:(struct CGSize)arg2 timeRange:(struct ?)arg3;
- (void)dealloc;
- (AVVideoCompositionLayerInstruction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AVVideoCompositionLayerInstruction *)init;
- (char)isEqual:(NSObject *)arg0;
- (AVVideoCompositionLayerInstruction *)copyWithZone:(struct _NSZone *)arg0;
- (AVVideoCompositionLayerInstruction *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)trackID;
- (void)finalize;

@end
