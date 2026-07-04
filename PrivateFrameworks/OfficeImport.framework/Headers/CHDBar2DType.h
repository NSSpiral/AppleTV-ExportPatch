/* Runtime dump - CHDBar2DType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDBar2DType : CHDChartTypeWithGrouping
{
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (BOOL)isColumn;
- (BOOL)isHorizontal;
- (CHDBar2DType *)initWithChart:(GQHChart *)arg0;
- (void)setOverlap:(int)arg0;
- (void)setGapWidth:(int)arg0;
- (void)setColumn:(BOOL)arg0;
- (int)gapWidth;
- (int)overlap;
- (int)defaultLabelPosition;

@end
