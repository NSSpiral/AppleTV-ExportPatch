/* Runtime dump - PHCollectionChangeRequestHelper
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionChangeRequestHelper : NSObject
{
    char _allowsInsert;
    char _allowsMove;
    char _allowsRemove;
    NSString * _relationshipName;
    NSString * _destinationEntityName;
    NSArray * _originalObjectIDs;
    NSMutableArray * _mutableObjectIDsAndUUIDs;
    id _isDestinationObjectValid;
    PHChangeRequestHelper * _changeRequestHelper;
}

@property (readonly, nonatomic) NSString * relationshipName;
@property (retain, nonatomic) NSString * destinationEntityName;
@property (nonatomic) char allowsInsert;
@property (nonatomic) char allowsMove;
@property (nonatomic) char allowsRemove;
@property (retain, nonatomic) NSArray * originalObjectIDs;
@property (retain, nonatomic) NSMutableArray * mutableObjectIDsAndUUIDs;
@property (copy, nonatomic) id isDestinationObjectValid;
@property (retain, nonatomic) PHChangeRequestHelper * changeRequestHelper;

+ (PHCollectionChangeRequestHelper *)_offsetsFromSourceOIDs:(id)arg0 toManagedObjects:(NSArray *)arg1;

- (NSString *)destinationEntityName;
- (void)setDestinationEntityName:(NSString *)arg0;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg0;
- (PHCollectionChangeRequestHelper *)initWithRelationshipName:(NSString *)arg0 changeRequestHelper:(PHChangeRequestHelper *)arg1;
- (char)allowsRemove;
- (char)allowsInsert;
- (char)allowsMove;
- (id)isDestinationObjectValid;
- (PHCollectionChangeRequestHelper *)initWithRelationshipName:(NSString *)arg0 xpcDict:(id)arg1 changeRequestHelper:(PHChangeRequestHelper *)arg2;
- (char)applyMutationsToManagedObject:(NSManagedObject *)arg0 mutableChildren:(NSMutableArray *)arg1 error:(id *)arg2;
- (NSString *)relationshipName;
- (void)setAllowsInsert:(char)arg0;
- (void)setAllowsMove:(char)arg0;
- (void)setAllowsRemove:(char)arg0;
- (NSArray *)originalObjectIDs;
- (void)setOriginalObjectIDs:(NSArray *)arg0;
- (NSMutableArray *)mutableObjectIDsAndUUIDs;
- (void)setMutableObjectIDsAndUUIDs:(NSMutableArray *)arg0;
- (void)setIsDestinationObjectValid:(id)arg0;
- (PHChangeRequestHelper *)changeRequestHelper;
- (void)setChangeRequestHelper:(PHChangeRequestHelper *)arg0;
- (void).cxx_destruct;

@end
