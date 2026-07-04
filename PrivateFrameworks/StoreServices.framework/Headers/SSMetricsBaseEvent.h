/* Runtime dump - SSMetricsBaseEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString * eventType;
@property (retain, nonatomic) NSNumber * baseVersion;
@property (retain, nonatomic) NSNumber * eventVersion;
@property double originalTime;
@property (retain, nonatomic) NSNumber * pixelRatio;
@property (retain, nonatomic) NSNumber * screenHeight;
@property (retain, nonatomic) NSNumber * screenWidth;
@property (retain, nonatomic) NSNumber * windowHeight;
@property (retain, nonatomic) NSString * windowOrientation;
@property (retain, nonatomic) NSNumber * windowWidth;
@property (retain, nonatomic) NSString * applicationIdentifier;
@property (retain, nonatomic) NSNumber * clientVersion;
@property (retain, nonatomic) NSString * hostApplicationIdentifier;
@property (retain, nonatomic) NSNumber * previousClientVersion;
@property (retain, nonatomic) NSString * topic;
@property (retain, nonatomic) NSString * userAgent;
@property (retain, nonatomic) NSString * pageContext;
@property (retain, nonatomic) NSString * pageDescription;
@property (nonatomic) unsigned long long pageID;
@property (retain, nonatomic) NSString * pageType;
@property (retain, nonatomic) NSString * pageURL;
@property (retain, nonatomic) NSNumber * accountIdentifier;
@property (retain, nonatomic) NSString * connection;

- (NSString *)eventType;
- (void)setAccountIdentifier:(NSNumber *)arg0;
- (SSMetricsBaseEvent *)init;
- (NSString *)description;
- (NSString *)applicationIdentifier;
- (void)setPageURL:(NSString *)arg0;
- (NSString *)pageURL;
- (NSString *)connection;
- (void)setConnection:(NSString *)arg0;
- (NSNumber *)clientVersion;
- (NSString *)topic;
- (NSNumber *)accountIdentifier;
- (void)setUserAgent:(NSString *)arg0;
- (NSString *)userAgent;
- (void)setApplicationIdentifier:(NSString *)arg0;
- (void)setEventType:(NSString *)arg0;
- (void)setTopic:(NSString *)arg0;
- (NSURL *)decorateReportingURL:(NSURL *)arg0;
- (char)isBlacklistedByConfiguration:(NSDictionary *)arg0;
- (void)setOriginalTimeUsingDate:(NSDate *)arg0;
- (NSNumber *)eventVersion;
- (NSNumber *)baseVersion;
- (NSString *)hostApplicationIdentifier;
- (double)originalTime;
- (NSString *)pageContext;
- (NSString *)pageDescription;
- (unsigned long long)pageID;
- (NSString *)pageType;
- (NSNumber *)pixelRatio;
- (NSNumber *)previousClientVersion;
- (NSNumber *)screenHeight;
- (NSNumber *)screenWidth;
- (void)setBaseVersion:(NSNumber *)arg0;
- (void)setClientVersion:(NSNumber *)arg0;
- (void)setEventVersion:(NSNumber *)arg0;
- (void)setHostApplicationIdentifier:(NSString *)arg0;
- (void)setOriginalTime:(double)arg0;
- (void)setPageContext:(NSString *)arg0;
- (void)setPageDescription:(NSString *)arg0;
- (void)setPageID:(unsigned long long)arg0;
- (void)setPageType:(NSString *)arg0;
- (void)setPixelRatio:(NSNumber *)arg0;
- (void)setPreviousClientVersion:(NSNumber *)arg0;
- (void)setScreenHeight:(NSNumber *)arg0;
- (void)setScreenWidth:(NSNumber *)arg0;
- (void)setWindowHeight:(NSNumber *)arg0;
- (void)setWindowOrientation:(NSString *)arg0;
- (void)setWindowWidth:(NSNumber *)arg0;
- (NSNumber *)windowHeight;
- (NSString *)windowOrientation;
- (NSNumber *)windowWidth;

@end
