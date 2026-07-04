/* Runtime dump - TSUFakeProgress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFakeProgress : TSUBasicProgress
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned int _currentStage;
    unsigned int _numberOfStages;
    char _stopped;
}

- (void)p_slowlyAdvanceToNextStage;
- (TSUFakeProgress *)initWithMaxValue:(double)arg0 numberOfStages:(unsigned int)arg1;
- (void)advanceToStage:(unsigned int)arg0;
- (void)dealloc;
- (void)stop;
- (void)start;

@end
