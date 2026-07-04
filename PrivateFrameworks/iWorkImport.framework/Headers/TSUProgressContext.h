/* Runtime dump - TSUProgressContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUProgressContext : NSObject
{
    TSUProgressStage * m_currentStage;
    NSDate * m_lastReportTime;
    double m_lastProgressReport;
    double m_lastOverallProgress;
}

- (void)dealloc;
- (TSUProgressContext *)init;
- (void)reset;
- (void)setProgress:(double)arg0;
- (void)setMessage:(NSString *)arg0;
- (void)createStageWithSteps:(double)arg0 takingSteps:(double)arg1;
- (unsigned int)currentStage;
- (void)advanceProgress:(double)arg0;
- (double)currentPosition;
- (id)addProgressObserverBlock:(id /* block */)arg0;
- (void)createStageWithSteps:(double)arg0;
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg0;
- (void)endStage;
- (void)setPercentageProgressFromTCProgressContext:(double)arg0;
- (void)reportProgress:(double)arg0 overallProgress:(double)arg1;
- (void)removeProgressObserver:(NSObject *)arg0;
- (double)overallProgress;
- (void)addProgressObserver:(NSObject *)arg0 selector:(SEL)arg1;

@end
