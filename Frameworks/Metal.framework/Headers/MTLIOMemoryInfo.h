/* Runtime dump - MTLIOMemoryInfo
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOMemoryInfo : NSObject
{
    void * memlist_key;
    struct _opaque_pthread_mutex_t ak_memlist_mutex;
    id ak_memlist_data_sources;
    int ak_memlist_notify_token;
    NSObject<OS_xpc_object> * ak_memlist_connection;
    struct MemInfoResourceListEntry * fResourceListHead;
}

+ (void)addResourceToList:(NSArray *)arg0;
+ (void)removeResourceFromList:(NSArray *)arg0;
+ (void)initialize;
+ (void)shutdown;

- (struct __CFArray *)annotationList;
- (void *)addDataSource:(NSObject *)arg0;
- (void)removeDataSource:(void *)arg0;
- (void)launchMemlistConnection;
- (void)dealloc;
- (MTLIOMemoryInfo *)init;

@end
