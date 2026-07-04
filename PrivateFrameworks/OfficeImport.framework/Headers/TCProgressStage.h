/* Runtime dump - TCProgressStage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString * m_name;
    TCProgressStage * m_parentStage;
    TCProgressContext * m_context;
}

- (void)dealloc;
- (void)setProgress:(double)arg0;
- (void)end;
- (TCProgressStage *)initRootStageInContext:(NSObject *)arg0;
- (NSObject *)parentStage;
- (void)advanceProgress:(double)arg0;
- (double)currentPosition;
- (TCProgressStage *)initWithSteps:(double)arg0 takingSteps:(double)arg1 name:(NSString *)arg2 inContext:(NSObject *)arg3;
- (TCProgressStage *)initBranchWithSteps:(double)arg0 takingSteps:(double)arg1 name:(NSString *)arg2 inContext:(NSObject *)arg3;

@end
