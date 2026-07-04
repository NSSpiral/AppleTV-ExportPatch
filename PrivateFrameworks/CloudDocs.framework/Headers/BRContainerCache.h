/* Runtime dump - BRContainerCache
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainerCache : NSObject
{
    NSMutableDictionary * _containersByID;
    char _didFetchAllContainers;
    <NSObject> * _containerStatusObserver;
    struct br_pacer_t * _invalidationPacer;
}

+ (BRContainerCache *)containerCache;

- (void)dealloc;
- (BRContainerCache *)init;
- (void)invalidate;
- (id)documentContainers;
- (NSObject *)containerByID:(NSObject *)arg0 forURL:(NSURL *)arg1;
- (NSObject *)allContainersByID;
- (id)allContainers;
- (void)subscribeToContainerStatusUpdate;
- (void)containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (id)_allContainersByIDUnsafe;

@end
