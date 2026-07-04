/* Runtime dump - TSCH3DChartSelectedElementHighlightSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSelectedElementHighlightSceneObject : TSCH3DSceneObject <TSCH3DSceneObjectDelegator>

+ (NSObject *)propertiesForScene:(NSObject *)arg0;
+ (void)setSelectedSeriesIndex:(unsigned int)arg0 scene:(NSObject *)arg1;
+ (void)setHighlightColor:(UIColor *)arg0 scene:(NSObject *)arg1;

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (NSObject *)makeDelegateWithScene:(NSObject *)arg0;
- (NSObject *)makeDelegateWithSceneObject:(TSCH3DSceneObject *)arg0 scene:(NSObject *)arg1;
- (NSObject *)p_calculateEdgeVerticesForPipeline:(NSObject *)arg0;
- (void)render:(id)arg0;

@end
