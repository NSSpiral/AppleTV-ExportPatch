/* Runtime dump - ASAssetQuery
 * Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface ASAssetQuery : NSObject
{
    char _queriesLocalAssetInformationOnly;
    NSPredicate * _predicate;
    NSArray * _results;
    NSString * _assetType;
    double _networkTimeout;
}

@property (retain, nonatomic) NSPredicate * predicate;
@property (nonatomic) char queriesLocalAssetInformationOnly;
@property (retain, nonatomic) NSArray * results;
@property (nonatomic) double networkTimeout;
@property (copy, nonatomic) NSString * assetType;

+ (NSDictionary *)queryPredicateForProperties:(NSDictionary *)arg0;

- (void)dealloc;
- (void)setPredicate:(NSPredicate *)arg0;
- (void)stopQuery;
- (NSPredicate *)predicate;
- (NSArray *)results;
- (ASAssetQuery *)initWithAssetType:(NSString *)arg0;
- (void)setQueriesLocalAssetInformationOnly:(char)arg0;
- (NSError *)runQueryAndReturnError:(id *)arg0;
- (void)setResults:(NSArray *)arg0;
- (void)startQuery:(NSObject *)arg0;
- (char)queriesLocalAssetInformationOnly;
- (double)networkTimeout;
- (void)setNetworkTimeout:(double)arg0;
- (NSString *)assetType;
- (void)setAssetType:(NSString *)arg0;

@end
