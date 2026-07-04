/* Runtime dump - SSMetricsExitEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString * exitType;
@property (retain, nonatomic) NSString * exitURL;

- (SSMetricsExitEvent *)init;
- (NSString *)description;
- (void)setExitType:(NSString *)arg0;
- (NSString *)exitType;
- (NSString *)exitURL;
- (void)setExitTypeWithSuspendReason:(int)arg0;
- (void)setExitURL:(NSString *)arg0;

@end
