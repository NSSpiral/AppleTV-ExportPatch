/* Runtime dump - TSCH3DChartAddBoundsSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAddBoundsSceneObject : TSCH3DSceneObject

+ (NSObject *)p_setBoundsModeClass:(Class)arg0 forScene:(NSObject *)arg1;
+ (NSObject *)p_rotationBoundsModeForScene:(NSObject *)arg0;
+ (void)setDepthBoundsForScene:(NSObject *)arg0;
+ (void)setYRotationBoundsForScene:(NSObject *)arg0;
+ (void)setXYRotationBoundsForScene:(NSObject *)arg0;
+ (void)setRadialBoundsFactor:(float)arg0 forScene:(NSObject *)arg1;

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (void)rayPick:(id)arg0;
- (void)render:(id)arg0;

@end
