/* Runtime dump - ATVITunesStoreDataItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVITunesStoreDataItem : ATVDataItem
{
    unsigned int _1080pResolutionIndex;
    unsigned int _720pResolutionIndex;
    unsigned int _480pResolutionIndex;
    ATVBookmark * _bookmark;
    char _ignoreLeaseAgentStateChanges;
    NSDictionary * _storeDict;
    ATVDataType * _mediaType;
    NSDate * _expirationDate;
    ATVLeaseAgent * _leaseAgent;
}

@property (readonly, nonatomic) ATVBookmark * bookmark;
@property (retain, nonatomic) NSDictionary * storeDict;
@property (retain, nonatomic) ATVDataType * mediaType;
@property (retain, nonatomic) NSDate * expirationDate;
@property (retain, nonatomic) ATVLeaseAgent * leaseAgent;
@property (nonatomic) char ignoreLeaseAgentStateChanges;

+ (NSObject *)storeFlavorKeyForATVDataProperty:(NSObject *)arg0;
+ (NSObject *)storeKeyForATVDataProperty:(NSObject *)arg0;

- (void)dealloc;
- (unsigned int)hash;
- (void).cxx_destruct;
- (char)ignoreLeaseAgentStateChanges;
- (void)setIgnoreLeaseAgentStateChanges:(char)arg0;
- (ATVLeaseAgent *)leaseAgent;
- (void)setLeaseAgent:(ATVLeaseAgent *)arg0;
- (NSString *)_dateFromString:(NSString *)arg0;
- (void)_bookmarkServiceUpdatedNotification:(NSNotification *)arg0;
- (void)updateBookmark:(id)arg0;
- (char)_useHLSInsteadOfSpecificFlavor;
- (id)_flavoredDict;
- (NSString *)_hlsPlaylistURLString;
- (unsigned int)_bestResolutionIndex;
- (ATVITunesStoreDataItem *)initWithDataClient:(ATVDataClient *)arg0 storeDict:(NSDictionary *)arg1;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (NSDictionary *)storeDict;
- (void)setStoreDict:(NSDictionary *)arg0;
- (void)setExpirationDate:(NSDate *)arg0;
- (ATVBookmark *)bookmark;
- (ATVDataType *)mediaType;
- (NSDate *)expirationDate;
- (void)setMediaType:(ATVDataType *)arg0;

@end
