/* Runtime dump - TSCH3DGetSelectionKnobsPositionsPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent>
{
    TSCH3DChartRep * mRep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate * mSceneObjectDelegate;
    NSArray * mSelection;
    NSMutableArray * mProjectedPoints;
    float mNormalizedKnobRadius;
}

@property (readonly, nonatomic) NSArray * projectedPoints;

+ (NSObject *)pipelineWithRep:(NSObject *)arg0 scene:(NSObject *)arg1 selection:(struct _NSRange *)arg2 normalizedKnobRadius:(float)arg3;

- (void)clearParent;
- (void)getSelectionKnobsPositions:(id)arg0;
- (NSObject *)makeDelegateWithScene:(NSObject *)arg0;
- (NSObject *)makeDelegateWithSceneObject:(TSCH3DSceneObject *)arg0 scene:(NSObject *)arg1;
- (TSCH3DGetSelectionKnobsPositionsPipeline *)initWithRep:(NSObject *)arg0 scene:(NSObject *)arg1 selection:(struct _NSRange *)arg2 normalizedKnobRadius:(float)arg3;
- (NSArray *)projectedPoints;
- (Class)labelsMeshRendererClassForLabelsRenderer:(NSObject *)arg0;
- (char)render;
- (void)dealloc;

@end
