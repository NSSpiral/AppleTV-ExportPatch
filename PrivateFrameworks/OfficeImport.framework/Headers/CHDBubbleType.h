/* Runtime dump - CHDBubbleType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDBubbleType : CHDChartType
{
    BOOL mShowNegativeBubbles;
    BOOL mSizeRepresentsRadius;
    int mBubbleScale;
}

- (CHDBubbleType *)initWithChart:(GQHChart *)arg0;
- (BOOL)is3DType;
- (int)defaultLabelPosition;
- (void)setBubbleScale:(int)arg0;
- (void)setShowNegBubbles:(BOOL)arg0;
- (void)setSizeRepresentsRadius:(BOOL)arg0;
- (int)bubbleScale;
- (BOOL)isSizeRepresentingRadius;
- (BOOL)isShowNegBubbles;

@end
