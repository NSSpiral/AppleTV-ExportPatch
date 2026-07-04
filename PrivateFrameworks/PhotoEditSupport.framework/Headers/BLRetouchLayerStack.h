/* Runtime dump - BLRetouchLayerStack
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchLayerStack : BLBaseLayerStack
{
    struct CGContext * _labContextRef;
    struct ? _edgeAwareColor;
}

+ (BLRepairLayerStack *)layerStack;

- (void)dealloc;
- (BLRetouchLayerStack *)init;
- (double)timestamp;
- (void)buildEdgeDetectFromImage:(UIImage *)arg0;
- (void)setStrokesDataDictionary:(NSDictionary *)arg0;
- (NSDictionary *)strokesDataDictionary;
- (char)haveLayerMask;
- (char)readyToDraw;
- (void)updateLabColorsInRect:(struct CGRect)arg0;
- (void)sampleEdgeDetectColorFromRect:(struct CGRect)arg0;
- (void)findEdgesInRect:(struct CGRect)arg0 result:(struct CGSize)arg1;
- (int)maxEdgeSize;
- (int)disabledBrushTypes;
- (void)addLayer:(CALayer *)arg0;

@end
