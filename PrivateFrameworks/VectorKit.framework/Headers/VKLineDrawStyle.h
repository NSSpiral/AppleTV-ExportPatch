/* Runtime dump - VKLineDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLineDrawStyle : VKRenderStyle

+ (int)renderStyleID;

- (float)insetShadowHeightAtZoom:(float)arg0;
- (float)insetShadowAngleAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)insetShadowColorAtZoom:(float)arg0;
- (char)hasDashAtAnyZ;
- (unsigned long long)fillDashPatternAtZoom:(float)arg0;
- (unsigned long long)strokeDashPatternAtZoom:(float)arg0;
- (char)hasFillDashAtZoom:(int)arg0;
- (char)hasStrokeDashAtZoom:(int)arg0;
- (char)hasDropShadowAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)dropShadowColorAtZoom:(float)arg0;
- (struct Matrix<float, 2, 1>)dropShadowOffsetAtZoom:(float)arg0;
- (float)dropShadowWidthAtZoom:(float)arg0;
- (float)innerGlowRadiusAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)innerGlowColorAtZoom:(float)arg0;
- (float)outerGlowRadiusAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)outerGlowColorAtZoom:(float)arg0;

@end
