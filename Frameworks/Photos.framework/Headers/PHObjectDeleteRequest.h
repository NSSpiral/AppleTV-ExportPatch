/* Runtime dump - PHObjectDeleteRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObjectDeleteRequest : NSObject <PHDeleteChangeRequest>
{
    NSString * _uuid;
    NSManagedObjectID * _objectID;
    char _entitled;
    NSString * _clientName;
    int _clientProcessID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * managedEntityName;
@property (readonly, nonatomic) NSString * uuid;
@property (readonly, nonatomic) NSManagedObjectID * objectID;
@property (readonly, nonatomic) char entitled;
@property (readonly, nonatomic) NSString * clientName;
@property (readonly, nonatomic) int clientProcessID;

+ (NSObject *)deleteRequestForObject:(NSObject *)arg0;

- (NSString *)managedEntityName;
- (char)validateForDeleteManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (void)deleteManagedObject:(NSManagedObject *)arg0 photoLibrary:(PLPhotoLibrary *)arg1;
- (char)isEntitled;
- (int)clientProcessID;
- (PHObjectDeleteRequest *)initWithUUID:(NSString *)arg0 objectID:(NSManagedObjectID *)arg1;
- (PHObjectDeleteRequest *)initWithXPCDict:(NSObject<OS_xpc_object> *)arg0 entitled:(char)arg1 clientName:(NSString *)arg2 clientBundleID:(NSString *)arg3 clientProcessID:(int)arg4;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg0;
- (PHObjectDeleteRequest *)initForNewObject;
- (PHObjectDeleteRequest *)init;
- (void).cxx_destruct;
- (NSString *)uuid;
- (NSString *)clientName;
- (NSManagedObjectID *)objectID;

@end
