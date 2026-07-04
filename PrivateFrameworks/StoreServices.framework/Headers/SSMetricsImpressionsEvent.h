/* Runtime dump - SSMetricsImpressionsEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSArray * impressionIdentifiers;

- (SSMetricsImpressionsEvent *)init;
- (NSString *)description;
- (NSArray *)impressionIdentifiers;
- (void)setImpressionIdentifiers:(NSArray *)arg0;

@end
