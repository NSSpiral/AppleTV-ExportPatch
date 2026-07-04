/* Runtime dump - SSLookupResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupResponse : NSObject <SSXPCCoding>
{
    NSDate * _expirationDate;
    NSMutableArray * _itemOrder;
    SSMetricsPageEvent * _metricsPageEvent;
    NSDictionary * _response;
}

@property (readonly, nonatomic) char mpIsPersonalizedOffer;
@property (copy, nonatomic) NSDate * expirationDate;
@property (readonly, nonatomic) NSArray * allItems;
@property (readonly, nonatomic) SSMetricsConfiguration * metricsConfiguration;
@property (retain, nonatomic) SSMetricsPageEvent * metricsPageEvent;
@property (readonly, nonatomic) NSDictionary * responseDictionary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)mpShowBuysWithNoCompletionOffer;
+ (char)mpVerboseCMCLogging;
+ (NSObject *)mpLoadDebugCompletionsResponseWithStoreLookupID:(NSNumber *)arg0;
+ (char)mpFakeCompletionDataForBuys;

- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg0;
- (void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(NSObject *)arg0;
- (char)mpIsPersonalizedOffer;
- (SSLookupResponse *)initWithResponseDictionary:(NSDictionary *)arg0;
- (NSString *)itemForKey:(NSString *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSLookupResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (void *)valueForProperty:(NSString *)arg0;
- (void)setExpirationDate:(NSDate *)arg0;
- (NSArray *)allItems;
- (NSDictionary *)responseDictionary;
- (NSDate *)expirationDate;
- (SSMetricsPageEvent *)metricsPageEvent;
- (void)_setMetricsPageEvent:(NSObject *)arg0;
- (SSLookupResponse *)initWithLocationResponseDictionary:(NSDictionary *)arg0;
- (void)_enumerateItemsWithBlock:(id /* block */)arg0;
- (NSString *)appStoreURLWithReason:(int)arg0 initialIndex:(int)arg1;
- (SSMetricsConfiguration *)metricsConfiguration;

@end
