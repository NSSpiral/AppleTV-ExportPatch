/* Runtime dump - SSMetricsCustomEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsCustomEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString * topic;

- (NSString *)topic;
- (char)isFieldBlacklistEnabled;
- (void)setTopic:(NSString *)arg0;
- (NSURL *)decorateReportingURL:(NSURL *)arg0;

@end
