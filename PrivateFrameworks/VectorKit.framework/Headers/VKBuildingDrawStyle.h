/* Runtime dump - VKBuildingDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingDrawStyle : VKRenderStyle

+ (int)renderStyleID;

- (struct Matrix<float, 4, 1>)topColorAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)flatColorAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)footprintStrokeColorAtZoom:(float)arg0;
- (float)footprintStrokeWidthAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)facadeColorAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)strokeColor3DAtZoom:(float)arg0;
- (float)strokeWidth3DAtZoom:(float)arg0;
- (char)visibleAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)landmarkColorAtZoom:(float)arg0;
- (struct Matrix<float, 4, 1>)outlineColorAtZoom:(float)arg0;
- (char)outlineAtZoom:(float)arg0;
- (int)roofStyle;
- (char)hasStrokeColor3D;
- (char)hasStrokeWidth3D;

@end
