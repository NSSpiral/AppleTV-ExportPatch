/* Runtime dump - PHChangeRequestHelper
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeRequestHelper : NSObject
{
    char _isMutated;
    char _isNew;
    char _didRequestUUID;
    NSMutableDictionary * _mutations;
    id _changeRequest;
    NSString * _uuid;
    NSString * _uuidSaveToken;
    NSManagedObjectID * _objectID;
}

@property (weak, nonatomic) id changeRequest;
@property (readonly, nonatomic) NSString * uuid;
@property (readonly, nonatomic) NSString * uuidSaveToken;
@property (retain, nonatomic) NSManagedObjectID * objectID;
@property (readonly, nonatomic) NSMutableDictionary * mutations;
@property (nonatomic) char new;
@property (nonatomic) char mutated;

+ (NSObject *)changeRequestForObject:(NSObject *)arg0;
+ (PHChangeRequestHelper *)changeRequestWithXPCDict:(id)arg0 entitled:(char)arg1 clientName:(NSString *)arg2 clientBundleID:(NSString *)arg3 clientProcessID:(int)arg4;

- (char)isNew;
- (char)validateMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg0;
- (PHChangeRequestHelper *)initForNewObjectWithUUID:(id)arg0 changeRequest:(NSURLRequest *)arg1;
- (PHChangeRequestHelper *)initWithUUID:(NSString *)arg0 objectID:(NSManagedObjectID *)arg1 changeRequest:(NSURLRequest *)arg2;
- (NSURLRequest *)changeRequest;
- (char)allowMutationToManagedObject:(NSManagedObject *)arg0 propertyKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)uuidSaveToken;
- (NSMutableDictionary *)mutations;
- (PHChangeRequestHelper *)initForNewObjectWithChangeRequest:(NSURLRequest *)arg0;
- (PHChangeRequestHelper *)initWithXPCDict:(NSObject<OS_xpc_object> *)arg0 changeRequest:(NSURLRequest *)arg1;
- (void)generateUUIDIfNecessary;
- (void)didMutate;
- (char)isMutated;
- (void)setMutated:(char)arg0;
- (void)setNew:(char)arg0;
- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg0 error:(id *)arg1;
- (char)applyMutationsToManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (void)setChangeRequest:(NSURLRequest *)arg0;
- (PHChangeRequestHelper *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)uuid;
- (NSManagedObjectID *)objectID;
- (void)setObjectID:(NSManagedObjectID *)arg0;

@end
