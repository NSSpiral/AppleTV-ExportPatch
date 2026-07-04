/* Runtime dump - TSCHPresetImagerInfoBased
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImagerInfoBased : TSCHPresetImager
{
    TSCHChartType * mChartType;
}

+ (NSObject *)presetImagerForChartType:(NSObject *)arg0;

- (TSCHPresetImagerInfoBased *)initWithChartType:(NSObject *)arg0;
- (NSSet *)imageWithPreset:(NSSet *)arg0 target:(int)arg1 imageSize:(struct CGSize)arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(struct CGSize)arg5 shouldCache:(char *)arg6;
- (struct UIEdgeInsets)swatchImageEdgeInsetsForSize:(struct CGSize)arg0;
- (NSObject *)p_chartType;
- (id)p_imageRectAdjustments;
- (NSObject *)p_rectAdjustmentForChartType:(NSObject *)arg0;
- (void)dealloc;

@end
