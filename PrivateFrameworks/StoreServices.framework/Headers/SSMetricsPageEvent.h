/* Runtime dump - SSMetricsPageEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (nonatomic) char cachedResponse;
@property (retain, nonatomic) NSString * navigationType;
@property (nonatomic) double pageRenderTime;
@property (retain, nonatomic) NSString * referringAppName;
@property (retain, nonatomic) NSString * referringURL;
@property (nonatomic) double requestEndTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSString * searchTerm;
@property (retain, nonatomic) NSString * serverApplicationInstance;
@property (retain, nonatomic) NSString * serverTiming;
@property (nonatomic) char ubered;
@property (retain, nonatomic) NSString * pageHistoryDescription;

- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (SSMetricsPageEvent *)init;
- (NSString *)description;
- (void)setResponseStartTime:(double)arg0;
- (void)setReferringAppName:(NSString *)arg0;
- (void)setReferringURL:(NSString *)arg0;
- (void)setResponseEndTime:(double)arg0;
- (void)setRequestStartTime:(double)arg0;
- (void)setServerApplicationInstance:(NSString *)arg0;
- (void)setServerTiming:(NSString *)arg0;
- (char)isCachedResponse;
- (void)setCachedResponse:(char)arg0;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (void)setPageHistoryDescription:(NSString *)arg0;
- (NSString *)serverApplicationInstance;
- (char)isUbered;
- (NSString *)navigationType;
- (NSString *)pageHistoryDescription;
- (double)pageRenderTime;
- (NSString *)referringAppName;
- (NSString *)referringURL;
- (double)requestEndTime;
- (NSString *)serverTiming;
- (void)setNavigationType:(NSString *)arg0;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg0;
- (void)setPageRenderTime:(double)arg0;
- (void)setRequestEndTime:(double)arg0;
- (void)setUbered:(char)arg0;

@end
