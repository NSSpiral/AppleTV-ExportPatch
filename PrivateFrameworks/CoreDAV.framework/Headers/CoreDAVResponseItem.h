/* Runtime dump - CoreDAVResponseItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVResponseItem : CoreDAVItem
{
    NSMutableArray * _hrefs;
    CoreDAVLeafItem * _status;
    NSMutableSet * _propStats;
    CoreDAVErrorItem * _errorItem;
    CoreDAVLeafItem * _responseDescription;
    CoreDAVItemWithHrefChildItem * _location;
    CoreDAVLeafItem * _serverUID;
    CoreDAVMatchResultsItem * _matchResults;
}

@property (retain, nonatomic) NSMutableArray * hrefs;
@property (retain, nonatomic) CoreDAVLeafItem * status;
@property (retain, nonatomic) NSMutableSet * propStats;
@property (retain, nonatomic) CoreDAVErrorItem * errorItem;
@property (retain, nonatomic) CoreDAVLeafItem * responseDescription;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem * location;
@property (retain, nonatomic) CoreDAVLeafItem * serverUID;
@property (retain, nonatomic) CoreDAVMatchResultsItem * matchResults;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVResponseItem *)init;
- (NSString *)description;
- (CoreDAVItemWithHrefChildItem *)location;
- (CoreDAVLeafItem *)status;
- (void)setStatus:(CoreDAVLeafItem *)arg0;
- (NSArray *)successfulPropertiesToValues;
- (NSMutableArray *)hrefs;
- (id)firstHref;
- (CoreDAVErrorItem *)errorItem;
- (NSMutableSet *)propStats;
- (CoreDAVLeafItem *)responseDescription;
- (CoreDAVLeafItem *)serverUID;
- (CoreDAVMatchResultsItem *)matchResults;
- (void)addHref:(id)arg0;
- (void)addPropStat:(id)arg0;
- (void)setErrorItem:(CoreDAVErrorItem *)arg0;
- (void)setResponseDescription:(CoreDAVLeafItem *)arg0;
- (void)setServerUID:(CoreDAVLeafItem *)arg0;
- (void)setMatchResults:(CoreDAVMatchResultsItem *)arg0;
- (void)setPropStats:(NSMutableSet *)arg0;
- (void)setHrefs:(NSMutableArray *)arg0;
- (char)hasPropertyError;
- (void)setLocation:(CoreDAVItemWithHrefChildItem *)arg0;

@end
