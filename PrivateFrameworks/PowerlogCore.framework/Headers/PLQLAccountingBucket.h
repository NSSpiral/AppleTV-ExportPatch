/* Runtime dump - PLQLAccountingBucket
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLAccountingBucket : NSObject
{
    NSMutableArray * _accountingEvents;
    NSMutableDictionary * _accountedEnergy;
    double _energy;
    struct _PLTimeIntervalRange _range;
}

@property (readonly, retain) NSMutableArray * accountingEvents;
@property (readonly) struct _PLTimeIntervalRange range;
@property (readonly) NSMutableDictionary * accountedEnergy;
@property double energy;

- (NSString *)description;
- (struct _PLTimeIntervalRange)range;
- (void).cxx_destruct;
- (NSMutableArray *)accountingEvents;
- (double)totalWeight;
- (double)energy;
- (void)setEnergy:(double)arg0;
- (unsigned int)numberOfAccountingEvents;
- (double)getEnergy;
- (void)addAccountingEvent:(NSObject *)arg0;
- (NSMutableDictionary *)accountedEnergy;
- (double)energyForAccountingIdentifier:(NSString *)arg0;
- (PLQLAccountingBucket *)initWithRange:(struct _PLTimeIntervalRange)arg0;
- (void)performBucketEnergyAccounting:(double)arg0;
- (void)addEnergyForIdentifier:(NSString *)arg0 withEnergy:(double)arg1;

@end
