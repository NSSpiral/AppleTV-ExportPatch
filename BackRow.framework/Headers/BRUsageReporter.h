/* Runtime dump - BRUsageReporter
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRUsageReporter : NSObject

+ (void)decrementScalarKey:(NSString *)arg0;
+ (void)setValue:(long long)arg0 forScalarKey:(NSString *)arg1;
+ (void)clearDistributionKey:(NSString *)arg0;
+ (void)incrementScalarKey:(NSString *)arg0;
+ (void)pushValue:(double)arg0 forDistributionKey:(NSString *)arg1;
+ (void)clearScalarKey:(NSString *)arg0;

@end
