/* Runtime dump - TSCHPresetImager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImager : NSObject

+ (NSObject *)presetImagerForChartType:(NSObject *)arg0;
+ (void)drawGenericImageIntoContext:(struct CGContext *)arg0 size:(struct CGSize)arg1 preset:(NSSet *)arg2 usingRepresentativeSpecificSeriesFillProperties:(NSDictionary *)arg3 outShouldCache:(char *)arg4;

- (TSCHPresetImager *)initWithChartType:(NSObject *)arg0;
- (NSSet *)imageWithPreset:(NSSet *)arg0 target:(int)arg1 imageSize:(struct CGSize)arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(struct CGSize)arg5 shouldCache:(char *)arg6;
- (struct UIEdgeInsets)swatchImageEdgeInsetsForSize:(struct CGSize)arg0;
- (id)p_init;
- (struct CGContext *)p_newContextOfSize:(struct CGSize)arg0;
- (char)p_preserveAspectRatio;
- (struct CGSize)p_nativeSize;
- (id)p_shadow;
- (void)p_drawShadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize)arg1 contentsScale:(float)arg2 preset:(NSSet *)arg3 shouldCache:(char *)arg4;
- (void)p_drawUnshadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize)arg1 contentsScale:(float)arg2 preset:(NSSet *)arg3 shouldCache:(char *)arg4;
- (NSObject *)p_objectFromStyle:(NSObject *)arg0 specific:(int)arg1 default:(int)arg2;
- (struct CGSize)p_drawAndOffsetMultiDataSliderIntoContext:(struct CGContext *)arg0 size:(struct CGSize)arg1 contentsScale:(float)arg2;
- (NSObject *)p_chartType;
- (void)p_fillPath:(struct CGPath *)arg0 withFill:(id)arg1 inContext:(struct CGContext *)arg2;
- (NSObject *)p_strokeFromStyle:(NSObject *)arg0 specific:(int)arg1 default:(int)arg2;
- (TSCHPresetImager *)init;

@end
