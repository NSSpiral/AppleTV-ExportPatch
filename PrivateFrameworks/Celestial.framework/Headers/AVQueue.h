/* Runtime dump - AVQueue
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVQueue : NSObject
{
    NSRecursiveLock * _mutex;
    NSMutableArray * _items;
    void * _reserved;
    int _isBeingModifiedCount;
}

+ (NSOperationQueue *)avQueue;
+ (AVQueue *)queueWithArray:(NSArray *)arg0 error:(id *)arg1;

- (void)removeAllItems;
- (void)dealloc;
- (AVQueue *)init;
- (char)removeItem:(void *)arg0;
- (AVQueue *)initWithArray:(NSArray *)arg0 error:(id *)arg1;
- (char)removeItemAtIndex:(unsigned int)arg0;
- (int)_instantiateItem;
- (char)appendItemsFromArray:(NSArray *)arg0 error:(id *)arg1;
- (char)appendItem:(NSObject *)arg0 error:(id *)arg1;
- (char)insertItem:(NSObject *)arg0 atIndex:(unsigned int)arg1 error:(id *)arg2;
- (void)itemWasAdded:(id)arg0 atIndex:(int)arg1;
- (void)itemWillBeRemoved:(id)arg0 atIndex:(int)arg1;
- (unsigned int)indexOfItem:(NSObject *)arg0;
- (NSObject *)itemAfterItem:(NSObject *)arg0;
- (char)insertItem:(NSObject *)arg0 afterItem:(NSObject *)arg1 error:(id *)arg2;
- (void)removeItemsInRange:(struct _NSRange)arg0;
- (char)isBeingModified;
- (unsigned int)itemCount;
- (BRControl *)itemAtIndex:(unsigned int)arg0;
- (AVQueue *)initWithError:(id *)arg0;

@end
