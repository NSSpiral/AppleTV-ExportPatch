/* Runtime dump - BRCMinHeap
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCMinHeap : NSObject <NSFastEnumeration>
{
    id * _array;
    unsigned int _size;
    id _comparator;
    unsigned long _mutation;
    NSMapTable * _objects;
    unsigned int _count;
}

@property (readonly, nonatomic) unsigned int count;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (NSObject *)firstObject;
- (NSString *)description;
- (char)containsObject:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)_moveDown:(id)arg0 index:(unsigned int)arg1;
- (void)_moveUp:(id)arg0 index:(unsigned int)arg1;
- (void)_moveUpOrDown:(id)arg0 index:(unsigned int)arg1;
- (void)_shrink;
- (BRCMinHeap *)initWithComparator:(id /* block */)arg0;
- (char)check;
- (void)removeFirstObject;
- (void)firstObjectWeightChanged;
- (void)objectWeightChanged:(NSNotification *)arg0;

@end
