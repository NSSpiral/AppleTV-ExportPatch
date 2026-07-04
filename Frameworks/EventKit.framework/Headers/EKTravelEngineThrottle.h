/* Runtime dump - EKTravelEngineThrottle
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngineThrottle : NSObject
{
    char _running;
    id _adviceBlock;
    NSDate * _nextEmissionDate;
    NSMutableOrderedSet * _throttledAdviceQueue;
    PCPersistentTimer * _emissionTimer;
    NSObject<OS_dispatch_queue> * _throttleQueue;
    unsigned int _numberOfThrottleAdviceObjectsToEmitLater;
}

@property (copy, nonatomic) id adviceBlock;
@property (retain, nonatomic) NSDate * nextEmissionDate;
@property (retain, nonatomic) NSMutableOrderedSet * throttledAdviceQueue;
@property (retain, nonatomic) PCPersistentTimer * emissionTimer;
@property (nonatomic) NSObject<OS_dispatch_queue> * throttleQueue;
@property (nonatomic) unsigned int numberOfThrottleAdviceObjectsToEmitLater;
@property (nonatomic) char running;

+ (NSString *)_throttleIdentifier;
+ (double)_throttlePeriodInSeconds;

- (void)setAdviceBlock:(id /* block */)arg0;
- (void)_unregisterForNotificationObservation;
- (void)_registerForNotificationObservation;
- (void)removeThrottledAdviceForEventWithExternalURL:(NSURL *)arg0;
- (id /* block */)adviceBlock;
- (void)injectAdvice:(id)arg0 forEventWithExternalURL:(NSURL *)arg1;
- (void)removeAllThrottledAdvice;
- (void)_significantTimeChangeNotificationReceived;
- (void)_uninstallEmissionTimer;
- (NSDate *)nextEmissionDate;
- (NSMutableOrderedSet *)throttledAdviceQueue;
- (PCPersistentTimer *)emissionTimer;
- (NSObject<OS_dispatch_queue> *)throttleQueue;
- (unsigned int)numberOfThrottleAdviceObjectsToEmitLater;
- (void)_analyzeQueueAndPrepareForEmission;
- (void)setNumberOfThrottleAdviceObjectsToEmitLater:(unsigned int)arg0;
- (void)_emitAdviceObjects:(NSArray *)arg0;
- (void)_updateEmissionTimerWithEmissionDate:(SCNMaterialProperty *)arg0;
- (void)setNextEmissionDate:(NSDate *)arg0;
- (void)_emissionTimerFired:(id)arg0;
- (void)setEmissionTimer:(PCPersistentTimer *)arg0;
- (void)setThrottledAdviceQueue:(NSMutableOrderedSet *)arg0;
- (void)setThrottleQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)dealloc;
- (EKTravelEngineThrottle *)init;
- (NSString *)description;
- (void)stop;
- (void)start;
- (void)setRunning:(char)arg0;
- (char)running;

@end
