/* Runtime dump - SSMetricsEnterEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString * enterType;
@property (retain, nonatomic) NSString * referringAppName;
@property (retain, nonatomic) NSString * referringURL;

- (SSMetricsEnterEvent *)init;
- (NSString *)description;
- (void)setReferringAppName:(NSString *)arg0;
- (void)setReferringURL:(NSString *)arg0;
- (NSString *)referringAppName;
- (NSString *)referringURL;
- (void)setEnterType:(NSString *)arg0;
- (NSString *)enterType;
- (void)setEnterTypeWithLaunchReason:(int)arg0;

@end
