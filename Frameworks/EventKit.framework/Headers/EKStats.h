/* Runtime dump - EKStats
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKStats : NSObject
{
    int _domain;
    NSMutableDictionary * _scalarOperations;
    NSMutableDictionary * _distributionOperations;
}

+ (void)addToScalar:(MCMotionTriggerScalar *)arg0 value:(long long)arg1 domain:(int)arg2;
+ (unsigned long long)getCurrentTime;
+ (double)pushTimeIntervalForDistribution:(id)arg0 domain:(int)arg1 sinceStartTime:(unsigned long long)arg2;
+ (void)clearScalar:(id)arg0 domain:(int)arg1;
+ (void)setScalar:(float)arg0 value:(long long)arg1 domain:(int)arg2;
+ (void)clearDistribution:(id)arg0 domain:(int)arg1;
+ (void)setDistribution:(PLCloudLibraryLayoutDistribution *)arg0 value:(double)arg1 domain:(int)arg2;
+ (void)pushToDistribution:(id)arg0 value:(double)arg1 domain:(int)arg2;
+ (double)pushTimeIntervalForDistribution:(id)arg0 domain:(int)arg1 timingBlock:(id /* block */)arg2;
+ (char)enabled;

- (EKStats *)initWithDomain:(int)arg0;
- (void)clearDistribution:(id)arg0;
- (void)pushToDistribution:(id)arg0 value:(double)arg1;
- (void)clearScalar:(id)arg0;
- (void)setScalar:(float)arg0 value:(long long)arg1;
- (void)addToScalar:(MCMotionTriggerScalar *)arg0 value:(long long)arg1;
- (void)setDistribution:(PLCloudLibraryLayoutDistribution *)arg0 value:(double)arg1;
- (void)dealloc;
- (void)commit;

@end
