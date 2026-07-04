/* Runtime dump - NSSaveChangesRequest
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSaveChangesRequest : NSPersistentStoreRequest
{
    NSSet * _insertedObjects;
    NSSet * _updatedObjects;
    NSSet * _deletedObjects;
    NSSet * _optimisticallyLockedObjects;
    unsigned long _flags;
    void * _reserved1;
}

@property (readonly) NSSet * insertedObjects;
@property (readonly) NSSet * updatedObjects;
@property (readonly) NSSet * deletedObjects;
@property (readonly) NSSet * lockedObjects;

+ (void)initialize;

- (NSSaveChangesRequest *)initWithInsertedObjects:(NSSet *)arg0 updatedObjects:(NSSet *)arg1 deletedObjects:(NSSet *)arg2 lockedObjects:(NSSet *)arg3;
- (int)_retryHandlerCount;
- (void)_setRetryHandlerCount:(int)arg0;
- (NSSet *)lockedObjects;
- (void)setDeletedObjects:(NSSet *)arg0;
- (void)dealloc;
- (NSSaveChangesRequest *)init;
- (NSString *)description;
- (char)hasChanges;
- (NSSet *)insertedObjects;
- (NSSet *)updatedObjects;
- (NSSet *)deletedObjects;
- (unsigned int)requestType;

@end
