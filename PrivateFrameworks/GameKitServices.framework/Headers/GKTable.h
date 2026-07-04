/* Runtime dump - GKTable
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKTable : NSObject
{
    struct _gktableitem * _items;
    unsigned long _count;
    unsigned long _size;
    struct _opaque_pthread_mutex_t _lock;
}

@property (readonly) unsigned long count;

- (NSString *)objectForKey:(unsigned int)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(unsigned int)arg1;
- (void)dealloc;
- (unsigned long)count;
- (GKTable *)init;
- (void)removeAllObjects;
- (void)makeObjectsPerformSelector:(SEL)arg0;
- (void)removeObjectForKey:(unsigned int)arg0;
- (NSArray *)allObjects;
- (void)lock;
- (void)unlock;
- (void)makeObjectsPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (GKTable *)initWithSize:(unsigned long)arg0;
- (void)print;
- (void)touchObject:(NSObject *)arg0;
- (void)touchObjectForKey:(unsigned int)arg0;

@end
