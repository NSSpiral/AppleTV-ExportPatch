/* Runtime dump - TSCHChartDrawableLayoutLegendResizer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartDrawableLayoutLegendResizer : NSObject
{
    id mAnchoringStates;
    id mAnchoringPosition;
    char mShouldUpdateConfinedPushableAnchoring;
    NSArray * mLegendConfinementBounds;
}

@property (nonatomic) char p_shouldUpdateConfinedPushableAnchoring;
@property (copy, nonatomic) NSArray * p_legendConfinementBounds;

+ (float)p_sideIntersectionLengthForChartAreaRange:(struct TSCHLegendAnchorRange)arg0;
+ (float)p_sideIntersectionLengthForChartAreaFrame:(struct CGRect)arg0;
+ (struct CGRect)innerAnchoringFrameFromChartAreaFrame:(NSObject *)arg0;
+ (struct CGRect)outerAnchoringFrameFromChartAreaFrame:(NSObject *)arg0;
+ (struct CGRect)snappedLegendFrame:(NSObject *)arg0 forChartAreaFrame:(SEL)arg1;
+ (TSCHChartDrawableLayoutLegendResizer *)legendResizerWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg0;

- (TSCHChartDrawableLayoutLegendResizer *)initWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg0;
- (void)p_initializeAnchoringStateForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg0;
- (int)p_anchoringStateForLegendFrame:(struct CGRect)arg0 chartAreaFrame:(struct CGSize)arg1 dimension:(struct DataBuffer2DDimension)arg2 returningAnchoringPosition:(struct CGRect)arg3;
- (char)p_isInFrontOfLine:(struct TSCHLegendAnchorLine)arg0 forRect:(float)arg1;
- (void)setP_legendConfinementBounds:(NSArray *)arg0;
- (char)p_shouldUpdateConfinedPushableAnchoring;
- (void)setP_shouldUpdateConfinedPushableAnchoring:(char)arg0;
- (void)p_updateLegendConfinementBoundsForChartAreaFrame:(struct CGRect)arg0 legendFrame:(struct CGSize)arg1;
- (NSArray *)p_legendConfinementBounds;
- (void)p_updateLegendConfinementBoundsForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg0;
- (char)p_isLegendAnchoredForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg0 dimension:(struct CGSize)arg1 returningLegendLocation:(NSObject *)arg2;
- (char)p_hasConfinedLocationWithinConfinementBoundsForLocation:(float)arg0 dimension:(int)arg1 returningConfinedLocation:(float *)arg2;
- (void)p_updateStateForIsIndirectResizing:(char)arg0;
- (struct TSCHLegendAnchorRange)p_pushedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg0 dimension:(struct CGSize)arg1 returningIsConfined:(id)arg2;
- (struct TSCHLegendAnchorRange)p_resizedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg0 dimension:(struct CGSize)arg1;
- (char)p_isConfinedPushableAnchoring;
- (NSObject *)resizedLegendGeometry:(NSObject *)arg0 forLastChartAreaFrame:(struct CGRect)arg1 newChartAreaFrame:(struct CGSize)arg2 isIndirectResizing:(id)arg3;
- (void)dealloc;

@end
