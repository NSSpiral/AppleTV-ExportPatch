/* Runtime dump - MPMediaEntityCache
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntityCache : NSObject
{
    <MPMediaLibraryDataProviderPrivate> * _mediaLibraryDataProvider;
    char _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct _opaque_pthread_rwlock_t _rwlock;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFDictionary * _concreteEntitiesByDataProviderEntityClass;
    NSMutableArray * _entityTemporaryReferences;
}

- (NSString *)itemWithIdentifier:(long long)arg0 loadEntityBlock:(id /* block */)arg1;
- (void)removeEntityWithIdentifier:(long long)arg0 dataProviderEntityClass:(Class)arg1;
- (NSString *)collectionWithIdentifier:(long long)arg0 grouping:(int)arg1 loadEntityBlock:(id /* block */)arg2;
- (MPMediaEntityCache *)initWithMediaLibraryDataProvider:(<MPMediaLibraryDataProviderPrivate> *)arg0;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)arg0 dataProviderEntityClass:(Class)arg1 deleted:(char)arg2;
- (struct /* ? */ *)_entityMapForDataProviderEntityClass:(NSObject *)arg0;
- (void)_performWithSharedAccess:(id)arg0;
- (NSString *)_entityWithIdentifier:(long long)arg0 mediaEntityType:(int)arg1 collectionGroupingType:(int)arg2 loadEntityBlock:(id /* block */)arg3;
- (void)_performWithExclusiveAccess:(char)arg0;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (NSString *)itemWithIdentifier:(long long)arg0;
- (MPMediaEntityCache *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
