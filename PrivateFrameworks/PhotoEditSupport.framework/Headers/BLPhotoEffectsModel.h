/* Runtime dump - BLPhotoEffectsModel
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPhotoEffectsModel : NSObject
{
    int _effectGroupIndex;
    float _effectValue;
    char _hasAdjustments;
    NSMutableDictionary * _adjustments;
    NSDictionary * _analysis;
    BLPEModel * _model;
}

- (void)dealloc;
- (BLPhotoEffectsModel *)initWithAdjustmentsDictionary:(NSMutableDictionary *)arg0 andAnalysisDictionary:(NSDictionary *)arg1;
- (BLPhotoEffectsModel *)initWithAdjustmentsDictionary:(NSMutableDictionary *)arg0 andAnalysisDictionary:(NSDictionary *)arg1 ignoreEdgeEffects:(char)arg2;
- (char)hasPhotoEffects;
- (char)hasInkEffects;
- (char)hasEdgeEffects;
- (char)hasFastDownstreamEffects;
- (char)needsPadding;
- (float)paddingForSize:(struct CGSize)arg0;
- (NSObject *)imageWithPhotoEffectsForImageBuffer:(NSObject *)arg0 inDestRect:(struct CGRect)arg1 withPadding:(struct CGSize)arg2;
- (char)canRenderCI;
- (UIImage *)imageWithPhotoEffectsForImage:(UIImage *)arg0 inDestRect:(struct CGRect)arg1 withPadding:(struct CGSize)arg2;
- (NSObject *)ciImageWithPhotoEffectsForImageBuffer:(NSObject *)arg0 inDestRect:(struct CGRect)arg1 withPadding:(struct CGSize)arg2;
- (UIImage *)ciImageWithPhotoEffectsForCIImage:(UIImage *)arg0 inDestRect:(struct CGRect)arg1 withPadding:(struct CGSize)arg2;

@end
