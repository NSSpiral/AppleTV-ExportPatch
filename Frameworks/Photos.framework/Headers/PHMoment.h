/* Runtime dump - PHMoment
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMoment : PHAssetCollection
{
    NSData * _approximateLocationData;
    NSData * _reverseLocationData;
    char _reverseLocationDataIsValid;
    short _generationType;
    NSDate * _representativeDate;
}

@property (readonly, nonatomic) NSDate * representativeDate;
@property (readonly, nonatomic) short generationType;

+ (NSString *)managedEntityName;
+ (NSPredicate *)fetchPredicateFromComparisonPredicate:(NSPredicate *)arg0;
+ (NSString *)entityKeyForPropertyKey:(NSString *)arg0;
+ (NSObject *)_transformValueExpression:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
+ (PHMoment *)propertiesToFetchWithHint:(unsigned int)arg0;
+ (char)managedObjectSupportsTrashedState;
+ (PHMoment *)identifierCode;

- (char)collectionHasFixedOrder;
- (PHMoment *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (Class)changeRequestClass;
- (void)_decodeTitlesIfNeeded;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)localizedTitle;
- (char)canPerformEditOperation:(int)arg0;
- (char)canShowAvalancheStacks;
- (NSArray *)localizedLocationNames;
- (short)generationType;
- (CLLocation *)approximateLocation;
- (NSDate *)representativeDate;
- (char)isMeaningful;

@end
