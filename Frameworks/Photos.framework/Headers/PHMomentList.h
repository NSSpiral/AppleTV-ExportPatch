/* Runtime dump - PHMomentList
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentList : PHCollectionList
{
    short _granularityLevel;
    short _generationType;
    NSDate * _representativeDate;
    int _sortIndex;
}

@property (readonly, nonatomic) short granularityLevel;
@property (readonly, nonatomic) NSDate * representativeDate;
@property (readonly, nonatomic) int sortIndex;
@property (readonly, nonatomic) short generationType;

+ (NSString *)managedEntityName;
+ (NSPredicate *)fetchPredicateFromComparisonPredicate:(NSPredicate *)arg0;
+ (NSString *)entityKeyForPropertyKey:(NSString *)arg0;
+ (NSObject *)_transformValueExpression:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
+ (PHMomentList *)propertiesToFetchWithHint:(unsigned int)arg0;
+ (char)managedObjectSupportsTrashedState;
+ (PHMomentList *)identifierCode;

- (char)collectionHasFixedOrder;
- (PHMomentList *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (Class)changeRequestClass;
- (int)collectionListType;
- (NSString *)description;
- (void).cxx_destruct;
- (short)generationType;
- (short)granularityLevel;
- (int)sortIndex;
- (NSDate *)representativeDate;
- (char)isMeaningful;

@end
