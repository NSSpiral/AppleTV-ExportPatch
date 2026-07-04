/* Runtime dump - UsageAnalytics
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface UsageAnalytics : ObjectAnalytics

- (UsageAnalytics *)init;
- (UsageAnalytics *)initWithWorkspace:(FBWorkspace *)arg0 withCache:(char)arg1;
- (NSString *)allUsageMarkersWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1;
- (NSString *)usageMarkersWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1 fromDate:(NSDate *)arg2 untilDate:(NSDate *)arg3;
- (NSString *)lastHappenedWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1;
- (NSString *)usageMarkersWithTag:(unsigned int)arg0 fromDate:(NSDate *)arg1 untilDate:(NSDate *)arg2;
- (NSString *)allUsageMarkersWithTag:(unsigned int)arg0;
- (NSString *)lastHappenedWithTag:(unsigned int)arg0;

@end
