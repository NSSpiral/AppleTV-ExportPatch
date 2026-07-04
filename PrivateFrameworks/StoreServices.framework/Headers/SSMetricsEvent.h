/* Runtime dump - SSMetricsEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEvent : NSObject

- (char)isFieldBlacklistEnabled;
- (NSURL *)decorateReportingURL:(NSURL *)arg0;
- (char)isBlacklistedByConfiguration:(NSDictionary *)arg0;
- (NSDictionary *)allTableEntityPropertiesPermittedByConfiguration:(NSDictionary *)arg0 externalValues:(NSArray *)arg1;
- (NSObject *)_dictionaryRepresentationOfBody;
- (void)appendPropertiesToBody:(NSObject *)arg0;
- (NSDictionary *)allTableEntityPropertiesPermittedByConfiguration:(NSDictionary *)arg0;
- (id)millisecondsFromTimeInterval:(double)arg0;
- (double)timeIntervalFromMilliseconds:(id)arg0;

@end
