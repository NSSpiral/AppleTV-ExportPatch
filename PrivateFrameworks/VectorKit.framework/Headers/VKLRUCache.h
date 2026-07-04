/* Runtime dump - VKLRUCache
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLRUCache : NSObject <NSFastEnumeration>
{
    unsigned int _reservedCapacity;
    unsigned int _maximumCapacity;
    unsigned int _count;
    void * _table;
    id _head;
    id _tail;
    <VKLRUCacheDelegate> * _delegate;
}

@property (readonly, nonatomic) unsigned int reservedCapacity;
@property (readonly, nonatomic) unsigned int maximumCapacity;
@property (readonly, nonatomic) unsigned int count;
@property (nonatomic) <VKLRUCacheDelegate> * delegate;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(struct VKCacheKey *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(struct VKCacheKey *)arg1;
- (void)dealloc;
- (void)setDelegate:(<VKLRUCacheDelegate> *)arg0;
- (unsigned int)count;
- (VKLRUCache *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (<VKLRUCacheDelegate> *)delegate;
- (void)purge;
- (VKLRUCache *)initWithReservedCapacity:(unsigned int)arg0 maximumCapacity:(unsigned int)arg1;
- (void)setReservedCapacity:(unsigned int)arg0 maximumCapacity:(unsigned int)arg1;
- (void)removeNode:(NSObject *)arg0;
- (void)dropTail;
- (void)evictIfNecessary;
- (void)insertNodeAtHead:(id)arg0;
- (void)consistencyCheck;
- (NSString *)contentsDescription;
- (NSString *)objectWithoutPromotingForKey:(struct VKCacheKey *)arg0;
- (void)removeObjectsMatchingPredicate:(NSPredicate *)arg0;
- (unsigned int)reservedCapacity;
- (unsigned int)maximumCapacity;

@end
