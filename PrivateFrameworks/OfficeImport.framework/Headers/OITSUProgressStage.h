/* Runtime dump - OITSUProgressStage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    OITSUProgressStage * m_parentStage;
    OITSUProgressContext * m_context;
}

- (void)dealloc;
- (NSString *)description;
- (void)setProgress:(double)arg0;
- (void)end;
- (OITSUProgressStage *)initRootStageInContext:(NSObject *)arg0;
- (OITSUProgressStage *)initWithSteps:(double)arg0 takingSteps:(double)arg1 inContext:(NSObject *)arg2;
- (double)nextSubStageParentSize;
- (void)setNextSubStageParentSize:(double)arg0;
- (NSObject *)parentStage;
- (void)advanceProgress:(double)arg0;
- (void)setProgressPercentage:(double)arg0;
- (double)currentPosition;
- (double)overallProgress;

@end
