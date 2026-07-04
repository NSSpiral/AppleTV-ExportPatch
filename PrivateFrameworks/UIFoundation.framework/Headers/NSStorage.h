/* Runtime dump - NSStorage
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSStorage : NSObject
{
    id _storage;
    long _hintCapacity;
    id _reserved;
}

+ (void)initialize;

- (void)dealloc;
- (unsigned int)count;
- (NSStorage *)init;
- (NSString *)description;
- (void)addElement:(void *)arg0;
- (void *)elementAtIndex:(unsigned int)arg0;
- (NSStorage *)initWithElementSize:(unsigned int)arg0 capacity:(unsigned int)arg1;
- (void)insertElements:(void *)arg0 count:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)removeElementAtIndex:(unsigned int)arg0;
- (unsigned int)elementSize;
- (void)setHintCapacity:(unsigned int)arg0;
- (unsigned int)hintCapacity;
- (void)replaceElementAtIndex:(unsigned int)arg0 withElement:(void *)arg1;
- (void)removeElementsInRange:(struct _NSRange)arg0;
- (void *)pointerToElement:(unsigned int)arg0 directlyAccessibleElements:(struct _NSRange *)arg1;
- (void)insertElement:(void *)arg0 atIndex:(unsigned int)arg1;
- (void)enumerateElementsUsingBlock:(id /* block */)arg0;
- (unsigned int)capacity;

@end
