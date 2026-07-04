/* Runtime dump - VKLabelDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelDrawStyle : VKRenderStyle

+ (int)renderStyleID;

- (unsigned int)layer;
- (int)genericShieldStyle;
- (unsigned int)minVisibleZoom;
- (unsigned int)maxVisibleZoom;
- (char)areTextBoxesEverVisible;
- (char)isPOITextEverVisible;
- (unsigned int)minArrowZoom;
- (unsigned char)dedupeRank;
- (void)getLabelStyle:(struct VKLabelStyle *)arg0 atZoom:(struct Matrix<float, 4, 1>)arg1 updateOnlyContinuousValues:(unsigned int)arg2 contentScale:(float)arg3 scaleFactor:(float)arg4;
- (double)mapWidthInEmsForZoom:(int)arg0 scaleFactor:(int)arg1;
- (double)minimumRoadArrowSpacingForZoom:(int)arg0;
- (double)minimumRoadLabelSpacingForZoom:(int)arg0 scaleFactor:(int)arg1;
- (double)minimumShieldSpacingForZoom:(int)arg0;
- (double)minimumMultiShieldGapForZoom:(int)arg0;
- (void)getRoadSignStyle:(struct ? *)arg0 atZoom:(float)arg1 contentScale:(float)arg2 scaleFactor:(int)arg3;
- (void)getNavShieldStyle:(struct ? *)arg0 atZoom:(float)arg1 contentScale:(float)arg2 scaleFactor:(int)arg3;
- (char)areNavSignsVisible;
- (char)areNavShieldsVisible;
- (void)getFontOptions:(struct FontOptions *)arg0 atZoom:(struct _retain_cf<const __CFString *>)arg1 contentScale:(struct _release_cf)arg2 scaleFactor:(id)arg3;
- (char)arrowVisibleAtZoom:(float)arg0;
- (char)showShieldTextAsLabelAtZoom:(float)arg0;
- (unsigned int)arrowLayer;
- (char)visibleAtMaxZoom:(float)arg0;
- (char)areShieldsEverVisible;

@end
