/* Runtime dump - TCProgressContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCProgressContext : NSObject
{
    OITSUProgressContext * m_parentProgressContext;
    TCProgressStage * m_currentStage;
    NSDate * m_lastReportTime;
    NSMutableArray * m_stackOfBranches;
}

+ (void)setProgress:(double)arg0;
+ (void)setMessage:(NSString *)arg0;
+ (void)createStageWithSteps:(double)arg0 takingSteps:(double)arg1;
+ (void)advanceProgress:(double)arg0;
+ (double)currentPosition;
+ (void)endStage;
+ (void)removeProgressObserver:(NSObject *)arg0;
+ (void)addProgressObserver:(NSObject *)arg0 selector:(SEL)arg1;
+ (void)removeContextForCurrentThread;
+ (NSObject *)contextForCurrentThread;
+ (NSObject *)stageForCurrentThread;
+ (void)createContextForCurrentThreadWithParentContext:(NSManagedObjectContext *)arg0;
+ (TCProgressContext *)createBranchWithSteps:(double)arg0 takingSteps:(double)arg1 name:(NSString *)arg2;
+ (void)endBranch:(id)arg0;
+ (void)pushBranch:(id)arg0;
+ (void)popBranch;
+ (void)advanceProgressInContext:(NSObject *)arg0 progress:(double)arg1;
+ (void)createStageWithSteps:(double)arg0 takingSteps:(double)arg1 name:(NSString *)arg2;

- (void)dealloc;
- (unsigned int)currentStage;
- (TCProgressContext *)initWithParentContext:(NSManagedObjectContext *)arg0;
- (NSObject *)rootStage;
- (void)reportProgress:(double)arg0;

@end
