/* Runtime dump - TSCH3DAbstractLimitingSeriesUpgrader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject
{
    TSCHChartInfo * mChartInfo;
    id mWillModifyBlock;
}

@property (copy, nonatomic) id willModifyBlock;

+ (float)depthFactorForAdjustingNumberOfSeries:(unsigned int)arg0 chartType:(NSObject *)arg1 fromOldLimitingSeries:(unsigned int)arg2 toNewLimitingSeries:(unsigned int)arg3;
+ (char)chartTypeUsesSeriesLimiting:(id)arg0;
+ (NSDictionary *)upgraderWithChartInfo:(NSDictionary *)arg0;

- (unsigned int)numberOfSeries;
- (TSCH3DAbstractLimitingSeriesUpgrader *)initWithChartInfo:(NSDictionary *)arg0;
- (void)configureScene:(NSObject *)arg0;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg0;
- (void)mutateInfoWithMutations:(id)arg0;
- (NSDictionary *)adjustedScaleFromLayoutSettings:(struct ? *)arg0 toLayoutSettings:(struct ?)arg1;
- (struct ?)oldLayoutSettings;
- (struct ?)upgradedLayoutSettings;
- (NSDictionary *)configuredSceneWithLayoutSettings:(struct ?)arg0;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(struct ? *)arg0 toLayoutSettings:(struct ?)arg1;
- (void)mutateInfoWithContainingViewport:(id)arg0 scene:(NSObject *)arg1;
- (void)upgrade;
- (id /* block */)willModifyBlock;
- (void)setWillModifyBlock:(id /* block */)arg0;
- (void)dealloc;

@end
