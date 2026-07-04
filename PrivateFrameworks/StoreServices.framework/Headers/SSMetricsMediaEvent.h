/* Runtime dump - SSMetricsMediaEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSNumber * itemIdentifier;
@property (retain, nonatomic) NSString * locationDescription;
@property (retain, nonatomic) NSString * mediaEventType;
@property (retain, nonatomic) NSString * mediaURL;

- (void)setItemIdentifier:(NSNumber *)arg0;
- (SSMetricsMediaEvent *)init;
- (NSNumber *)itemIdentifier;
- (NSString *)mediaURL;
- (void)setMediaURL:(NSString *)arg0;
- (NSString *)locationDescription;
- (void)setLocationDescription:(NSString *)arg0;
- (void)setLocationWithEventLocations:(NSString *)arg0;
- (NSString *)mediaEventType;
- (void)setMediaEventType:(NSString *)arg0;

@end
