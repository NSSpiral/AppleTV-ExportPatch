/* Runtime dump - NSPersistentStoreCache
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreCache : NSObject
{
    id _externalData;
    unsigned int _capacity;
}

+ (void)initialize;

- (void)_createExternalDataDictWithValueCallbacks:(void *)arg0;
- (NSPersistentStoreCache *)_initWithValueCallbacks:(void *)arg0;
- (void)_doForgetAllExternalData:(void *)arg0;
- (void)forgetExternalDataForObjectID:(NSObject *)arg0;
- (void)_growRegistrationCollectionTo:(unsigned int)arg0;
- (void)forgetAllExternalData;
- (void)decrementRefCountForObjectID:(NSObject *)arg0;
- (void)incrementRefCountForObjectID:(NSObject *)arg0;
- (int)refCountForObjectID:(NSObject *)arg0;
- (void)registerExternalData:(NSData *)arg0 forObjectID:(NSObject *)arg1 options:(unsigned int)arg2;
- (NSObject *)externalDataForObjectID:(NSObject *)arg0 timestamp:(double)arg1;
- (unsigned int)optionsForObjectID:(NSObject *)arg0;
- (void)registerExternalData:(NSData *)arg0 forSourceObjectID:(NSObject *)arg1 forProperty:(NSString *)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (NSObject *)externalDataForSourceObjectID:(NSObject *)arg0 forProperty:(NSString *)arg1 timestamp:(double)arg2;
- (void)registerAncillaryOrderKeys:(NSArray *)arg0 forSourceObjectID:(NSObject *)arg1 forProperty:(NSString *)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (NSObject *)ancillaryOrderKeysForSourceObjectID:(NSObject *)arg0 forProperty:(NSString *)arg1 timestamp:(double)arg2;
- (void)dealloc;
- (NSPersistentStoreCache *)init;

@end
