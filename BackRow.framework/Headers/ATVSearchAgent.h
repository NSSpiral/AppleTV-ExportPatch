/* Runtime dump - ATVSearchAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVSearchTerm;
@interface ATVSearchAgent : NSObject
{
    NSMutableDictionary * _resultsCache;
    NSMutableArray * _resultsCacheTerms;
    NSArray * _providerPriorityOrder;
}

@property (copy, nonatomic) NSArray * providerPriorityOrder;

+ (NSCache *)_searchTermCache;

- (char)isNetworkDependent;
- (void)search:(NSString *)arg0 ignoringCache:(char)arg1;
- (char)showRecentSearches;
- (char)handlePlayForObject:(NSObject *)arg0;
- (id)savedSearchTerms;
- (void)saveSearchTerm:(id)arg0;
- (id)cachedResultsForSearchTerm:(id)arg0;
- (id)contextMenuUtility;
- (NSArray *)providerPriorityOrder;
- (void)cacheResults:(NSArray *)arg0 forSearchTerm:(ATVSearchTerm *)arg1;
- (void)clearSavedSearchTerms;
- (void)setProviderPriorityOrder:(NSArray *)arg0;
- (void)purgeCache;
- (void)dealloc;
- (ATVSearchAgent *)init;
- (void)search:(NSString *)arg0;
- (long)cacheSize;

@end
