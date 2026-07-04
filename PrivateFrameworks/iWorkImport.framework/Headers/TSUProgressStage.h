/* Runtime dump - TSUProgressStage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    TSUProgressStage * m_parentStage;
    TSUProgressContext * m_context;
}

- (void)dealloc;
- (NSString *)description;
- (void)setProgress:(double)arg0;
- (void)end;
- (TSUProgressStage *)initRootStageInContext:(NSObject *)arg0;
- (TSUProgressStage *)initWithSteps:(double)arg0 takingSteps:(double)arg1 inContext:(NSObject *)arg2;
- (double)nextSubStageParentSize;
- (void)setNextSubStageParentSize:(double)arg0;
- (NSObject *)parentStage;
- (void)advanceProgress:(double)arg0;
- (void)setProgressPercentage:(double)arg0;
- (double)currentPosition;
- (double)overallProgress;

@end
