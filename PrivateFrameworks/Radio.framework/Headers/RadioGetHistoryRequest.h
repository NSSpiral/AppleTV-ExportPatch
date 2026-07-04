/* Runtime dump - RadioGetHistoryRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetHistoryRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    char _fetchForAccount;
    char _includesAds;
    char _aggregateSessions;
    char _shouldProcessCategories;
    NSNumber * _accountUniqueIdentifier;
    unsigned int _maxNumberOfTracks;
    NSString * _stationHash;
    RadioPlayEventCollection * _playEventCollection;
    NSArray * _playActivityFeedEvents;
    long long _stationID;
}

@property (readonly, copy, nonatomic) NSNumber * accountUniqueIdentifier;
@property (nonatomic) unsigned int maxNumberOfTracks;
@property (nonatomic) char fetchForAccount;
@property (nonatomic) char includesAds;
@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString * stationHash;
@property (nonatomic) char aggregateSessions;
@property (copy, nonatomic) RadioPlayEventCollection * playEventCollection;
@property (copy, nonatomic) NSArray * playActivityFeedEvents;
@property (nonatomic) char shouldProcessCategories;

- (NSString *)stationHash;
- (long long)stationID;
- (void)cancel;
- (RadioGetHistoryRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (void)setStationID:(long long)arg0;
- (void)setStationHash:(NSString *)arg0;
- (RadioPlayEventCollection *)playEventCollection;
- (void)setPlayEventCollection:(RadioPlayEventCollection *)arg0;
- (NSArray *)playActivityFeedEvents;
- (void)setPlayActivityFeedEvents:(NSArray *)arg0;
- (char)shouldProcessCategories;
- (void)setShouldProcessCategories:(char)arg0;
- (unsigned int)maxNumberOfTracks;
- (void)setMaxNumberOfTracks:(unsigned int)arg0;
- (NSDictionary *)_newHistoryCategoryWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_newHistoryItemWithDictionary:(NSDictionary *)arg0;
- (void)startWithHistoryCompletionHandler:(id /* block */)arg0;
- (char)fetchForAccount;
- (void)setFetchForAccount:(char)arg0;
- (char)includesAds;
- (void)setIncludesAds:(char)arg0;
- (char)aggregateSessions;
- (void)setAggregateSessions:(char)arg0;
- (NSNumber *)accountUniqueIdentifier;

@end
