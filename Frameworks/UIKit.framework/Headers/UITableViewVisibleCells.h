/* Runtime dump - UITableViewVisibleCells
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewVisibleCells : NSMutableArray
{
    NSMutableArray * _array;
}

- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (NSArray *)_array;

@end
