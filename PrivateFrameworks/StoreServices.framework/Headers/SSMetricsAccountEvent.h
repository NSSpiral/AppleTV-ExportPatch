/* Runtime dump - SSMetricsAccountEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsAccountEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString * accountEventType;

- (SSMetricsAccountEvent *)init;
- (void)setAccountEventType:(NSString *)arg0;
- (NSString *)accountEventType;
- (void)setAccountEventTypeWithEventIdentifier:(int)arg0;

@end
