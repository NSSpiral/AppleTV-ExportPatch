/* Runtime dump - SSOperationProgress
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying>
{
    char _canPause;
    double _changeRate;
    long long _currentValue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    int _operationType;
    NSMutableArray * _snapshotTimes;
    NSMutableArray * _snapshotValues;
    int _units;
}

@property char canPause;
@property int operationType;
@property double changeRate;
@property long long currentValue;
@property double estimatedTimeRemaining;
@property long long maxValue;
@property int units;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSOperationProgress *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSOperationProgress *)init;
- (NSString *)description;
- (SSOperationProgress *)copyWithZone:(struct _NSZone *)arg0;
- (void)snapshot;
- (void)setMaxValue:(long long)arg0;
- (long long)maxValue;
- (int)units;
- (void)setUnits:(int)arg0;
- (void)setOperationType:(int)arg0;
- (int)operationType;
- (void)setNormalizedCurrentValue:(long long)arg0;
- (void)setNormalizedMaxValue:(long long)arg0;
- (long long)normalizedCurrentValue;
- (long long)normalizedMaxValue;
- (double)estimatedTimeRemaining;
- (double)changeRate;
- (void)_updateStatisticsFromSnapshots;
- (void)resetSnapshots;
- (void)setChangeRate:(double)arg0;
- (void)setCurrentValue:(long long)arg0;
- (void)setEstimatedTimeRemaining:(double)arg0;
- (void)setCanPause:(char)arg0;
- (long long)currentValue;
- (char)canPause;

@end
