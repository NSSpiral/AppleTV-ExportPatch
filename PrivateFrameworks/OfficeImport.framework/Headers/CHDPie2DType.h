/* Runtime dump - CHDPie2DType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDPie2DType : CHDChartType
{
    int mFirstSliceAngle;
    BOOL mDoughnutType;
    BOOL mPieOfPieType;
    BOOL mBarOfPieType;
}

- (EDContentFormat *)contentFormat;
- (BOOL)isDoughnutType;
- (CHDPie2DType *)initWithChart:(GQHChart *)arg0;
- (void)setFirstSliceAngle:(int)arg0;
- (void)setDoughnutType:(BOOL)arg0;
- (void)setPieOfPieType:(BOOL)arg0;
- (void)setBarOfPieType:(BOOL)arg0;
- (int)defaultLabelPosition;
- (int)firstSliceAngle;
- (BOOL)isPieOfPieType;
- (BOOL)isBarOfPieType;
- (BOOL)hasExplosion;

@end
