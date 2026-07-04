/* Runtime dump - PCMultiStageGrowthAlgorithm
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm>
{
    double _currentKeepAliveInterval;
    double _minimumKeepAliveInterval;
    double _maximumKeepAliveInterval;
    double _lastKeepAliveInterval;
    int _growthStage;
    double _highWatermark;
    double _initialGrowthStageHighWatermark;
    double _initialGrowthStageLastAttempt;
    NSDate * _leaveSteadyStateDate;
    NSString * _loggingIdentifier;
    NSString * _algorithmName;
    unsigned int _countOfGrowthActions;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * loggingIdentifier;
@property (readonly, nonatomic) double currentKeepAliveInterval;
@property (nonatomic) double minimumKeepAliveInterval;
@property (nonatomic) double maximumKeepAliveInterval;
@property (readonly, nonatomic) unsigned int countOfGrowthActions;
@property (readonly, copy, nonatomic) NSDictionary * cacheInfo;

+ (void)_loadDefaults;
+ (void)_loadDefaultValue:(double *)arg0 forKey:(struct __CFString *)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)loggingIdentifier;
- (void)_resetAlgorithmToInterval:(double)arg0 stage:(int)arg1;
- (void)_resetAlgorithmToInterval:(double)arg0;
- (double)minimumKeepAliveInterval;
- (void)setMinimumKeepAliveInterval:(double)arg0;
- (double)currentKeepAliveInterval;
- (void)_setCurrentKeepAliveInterval:(double)arg0;
- (double)maximumKeepAliveInterval;
- (void)setMaximumKeepAliveInterval:(double)arg0;
- (NSObject *)_stringForStage:(int)arg0;
- (NSObject *)_stringForAction:(int)arg0;
- (void)_processInitialGrowthAction:(int)arg0;
- (void)_processRefinedGrowthAction:(int)arg0;
- (void)_processSteadyStateAction:(int)arg0;
- (void)_processBackoffAction:(int)arg0;
- (void)processNextAction:(int)arg0;
- (double)_steadyStateTimeout;
- (PCMultiStageGrowthAlgorithm *)initWithCacheInfo:(NSDictionary *)arg0 loggingIdentifier:(NSString *)arg1 algorithmName:(NSString *)arg2;
- (char)useIntervalIfImprovement:(double)arg0;
- (unsigned int)countOfGrowthActions;
- (NSDictionary *)cacheInfo;

@end
