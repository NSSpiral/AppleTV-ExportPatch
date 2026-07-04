/* Runtime dump - GKList
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKList : NSObject
{
    unsigned int * _items;
    unsigned long _count;
    unsigned long _size;
    struct _opaque_pthread_mutex_t _lock;
}

@property (readonly) unsigned long count;

- (void)dealloc;
- (unsigned long)count;
- (GKList *)init;
- (void)lock;
- (void)unlock;
- (GKList *)initWithSize:(unsigned long)arg0;
- (void)addID:(unsigned int)arg0;
- (void)copyItemsInto:(id)arg0;
- (char)hasID:(unsigned int)arg0;
- (void)addIDsFromList:(NSArray *)arg0;
- (void)removeID:(unsigned int)arg0;
- (void)removeAllIDs;
- (id)allMatchingObjectsFromTable:(id)arg0;
- (void)print;

@end
