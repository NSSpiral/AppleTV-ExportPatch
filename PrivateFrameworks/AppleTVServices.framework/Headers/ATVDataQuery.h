/* Runtime dump - ATVDataQuery
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataQuery : NSObject
{
    /* block */ id * callbackFn;
    int _status;
    int _queryType;
    NSString * _groupingProperty;
    int _groupingDirection;
    NSArray * _results;
    NSError * _error;
    NSMutableSet * _queryProperties;
    NSMutableArray * _queryFilters;
    NSMutableDictionary * _metadataDict;
    id _callbackContext;
    struct ? _range;
}

@property (nonatomic) int queryType;
@property (copy, nonatomic) NSString * groupingProperty;
@property (nonatomic) int groupingDirection;
@property (nonatomic) struct ? range;
@property int status;
@property (retain, nonatomic) NSArray * results;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) NSMutableSet * queryProperties;
@property (retain, nonatomic) NSMutableArray * queryFilters;
@property (retain, nonatomic) NSMutableDictionary * metadataDict;
@property (nonatomic) id callbackContext;

- (void)addProperties:(NSDictionary *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)description;
- (NSArray *)results;
- (struct ?)range;
- (void).cxx_destruct;
- (NSDictionary *)properties;
- (void)setResults:(NSArray *)arg0;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setRange:(struct ?)arg0;
- (ATVDataQuery *)initWithQueryType:(int)arg0;
- (void)cancelProcessing;
- (int)queryType;
- (void)addProperty:(NSObject *)arg0;
- (NSMutableDictionary *)metadataDict;
- (void)setMetadataDict:(NSMutableDictionary *)arg0;
- (id)dataQueryFilters;
- (NSString *)groupingProperty;
- (void)setCallbackContext:(NSObject *)arg0;
- (NSString *)callbackContext;
- (NSMutableArray *)queryFilters;
- (void)setCompletionFn:(/* block */ id *)arg0 context:(NSObject *)arg1;
- (/* block */ id *)completionFn;
- (NSString *)completionContext;
- (void)addDataQueryFilter:(NSObject *)arg0;
- (void)setQueryType:(int)arg0;
- (void)setGroupingProperty:(NSString *)arg0;
- (int)groupingDirection;
- (void)setGroupingDirection:(int)arg0;
- (NSMutableSet *)queryProperties;
- (void)setQueryProperties:(NSMutableSet *)arg0;
- (void)setQueryFilters:(NSMutableArray *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end
