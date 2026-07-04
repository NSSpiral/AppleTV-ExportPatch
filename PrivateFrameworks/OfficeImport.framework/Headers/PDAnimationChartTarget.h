/* Runtime dump - PDAnimationChartTarget
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationChartTarget : PDAnimationShapeTarget
{
    int mCatagoryIndex;
    int mSeriesIndex;
    int mBuildStep;
}

- (PDAnimationChartTarget *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)catagoryIndex;
- (int)seriesIndex;
- (int)buildStep;
- (void)setCatagoryIndex:(int)arg0;
- (void)setSeriesIndex:(int)arg0;
- (void)setBuildStep:(int)arg0;

@end
