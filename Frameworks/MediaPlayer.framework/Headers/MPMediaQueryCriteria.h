/* Runtime dump - MPMediaQueryCriteria
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryCriteria : NSObject <NSCopying>
{
    NSMutableSet * _filterPredicates;
    unsigned int _entityOrder;
    int _groupingType;
    unsigned int _entityLimit;
    NSArray * _orderingProperties;
    NSSet * _itemPropertiesToFetch;
    NSSet * _collectionPropertiesToFetch;
    char _useSections;
    char _ignoreSystemFilterPredicates;
    char _includeNonLibraryEntities;
    char _includeEntitiesWithBlankNames;
    NSDictionary * _orderingDirectionMappings;
}

@property (readonly, nonatomic) char specifiesPlaylistItems;
@property (readonly, nonatomic) char excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSSet * filterPredicates;
@property (copy, nonatomic) NSSet * itemPropertiesToFetch;
@property (copy, nonatomic) NSSet * collectionPropertiesToFetch;
@property (nonatomic) int groupingType;
@property (nonatomic) unsigned int entityLimit;
@property (nonatomic) unsigned int entityOrder;
@property (copy, nonatomic) NSArray * orderingProperties;
@property (nonatomic) char ignoreSystemFilterPredicates;
@property (nonatomic) char includeNonLibraryEntities;
@property (nonatomic) char includeEntitiesWithBlankNames;
@property (copy, nonatomic) NSDictionary * orderingDirectionMappings;

- (void)addFilterPredicate:(NSPredicate *)arg0;
- (void)setFilterPredicates:(NSSet *)arg0;
- (int)groupingType;
- (NSSet *)filterPredicates;
- (unsigned int)entityOrder;
- (void)addFilterPredicates:(id)arg0;
- (void)setGroupingType:(int)arg0;
- (void)setEntityOrder:(unsigned int)arg0;
- (NSObject *)predicateForProperty:(NSString *)arg0;
- (char)excludesEntitiesWithBlankNames;
- (char)specifiesPlaylistItems;
- (void)setEntityLimit:(unsigned int)arg0;
- (void)removeFilterPredicate:(NSPredicate *)arg0;
- (char)includeEntitiesWithBlankNames;
- (void)setIncludeEntitiesWithBlankNames:(char)arg0;
- (NSSet *)itemPropertiesToFetch;
- (void)setItemPropertiesToFetch:(NSSet *)arg0;
- (NSSet *)collectionPropertiesToFetch;
- (void)setCollectionPropertiesToFetch:(NSSet *)arg0;
- (void)setOrderingProperties:(NSArray *)arg0;
- (NSObject *)ML3ItemsQueryInLibrary:(NSObject *)arg0;
- (NSObject *)ML3CollectionsQueryInLibrary:(NSObject *)arg0;
- (NSArray *)orderingProperties;
- (NSDictionary *)orderingDirectionMappings;
- (NSDictionary *)ML3OrderingTermsForMPOrderingProperties:(NSDictionary *)arg0 directionalityMapping:(id)arg1 entityClass:(Class)arg2;
- (NSObject *)ML3ItemsQueryInLibrary:(NSObject *)arg0 orderingTerms:(NSArray *)arg1 nameBlankProperty:(NSObject *)arg2;
- (NSObject *)ML3OrderingTermsForGroupingType:(int)arg0;
- (char)includeNonLibraryEntities;
- (void)removePredicatesForProperty:(NSString *)arg0;
- (void)setIncludeNonLibraryEntities:(char)arg0;
- (void)setOrderingDirectionMappings:(NSDictionary *)arg0;
- (MPMediaQueryCriteria *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPMediaQueryCriteria *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (char)ignoreSystemFilterPredicates;
- (void)setIgnoreSystemFilterPredicates:(char)arg0;
- (unsigned int)entityLimit;

@end
