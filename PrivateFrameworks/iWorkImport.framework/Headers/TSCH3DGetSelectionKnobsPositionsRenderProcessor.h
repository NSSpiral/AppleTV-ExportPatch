/* Runtime dump - TSCH3DGetSelectionKnobsPositionsRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    NSMutableArray * mProjectedPoints;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate * mSceneObjectDelegate;
    float mNormalizedKnobRadius;
}

@property (retain, nonatomic) TSCH3DGetSelectionKnobsPositionsPipelineDelegate * sceneObjectDelegate;
@property (retain, nonatomic) NSMutableArray * projectedPoints;
@property (nonatomic) float normalizedKnobRadius;

- (void)submit:(struct PrimitiveInfo *)arg0;
- (struct tmat4x4<float>)modelViewNormalizedProjection;
- (void)setNormalizedKnobRadius:(float)arg0;
- (void)setProjectedPoints:(NSMutableArray *)arg0;
- (void)setSceneObjectDelegate:(TSCH3DGetSelectionKnobsPositionsPipelineDelegate *)arg0;
- (NSMutableArray *)projectedPoints;
- (TSCH3DGetSelectionKnobsPositionsPipelineDelegate *)sceneObjectDelegate;
- (float)normalizedKnobRadius;
- (void)dealloc;

@end
