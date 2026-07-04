/* Runtime dump - TSCHChartPieBodyLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieBodyLayoutItem : TSCHChartBodyLayoutItem
{
    TSCHPieBodyLayoutItemPathCache * mPathCache;
}

@property (retain) TSCHPieBodyLayoutItemPathCache * p_pathCache;

- (struct CGRect)calcDrawingRect;
- (void)setLayoutSize:(struct CGSize)arg0;
- (struct CGAffineTransform)transformForRenderingLabelForSeries:(unsigned int)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (struct CGRect)calcOverhangRect;
- (struct CGSize)bodySizeForOverhangSize:(struct CGSize)arg0;
- (void)p_collectMaxRatio:(float *)arg0 maxLabelOverhang:(float *)arg1 maxWedgeExplosion:(float *)arg2 maxComboExplosion:(float *)arg3;
- (struct CGSize)overhangSizeForBodySize:(struct CGSize)arg0;
- (id)pathCacheForSeries:(unsigned int)arg0;
- (TSCHPieBodyLayoutItemPathCache *)p_pathCache;
- (void)setP_pathCache:(TSCHPieBodyLayoutItemPathCache *)arg0;
- (struct CGAffineTransform)transformForRenderingElementForSeries:(unsigned int)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (struct CGPath *)pathOfElementForSeries:(unsigned int)arg0 outWedgeCenterPoint:(struct CGPoint *)arg1;
- (id)knobsOfElementForSeries:(unsigned int)arg0;
- (void)dealloc;

@end
