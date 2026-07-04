/* Runtime dump - PLCameraImportQueue
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportQueue : NSObject
{
    NSMutableArray * _items;
    unsigned int _index;
}

- (void)_removeItem:(NSObject *)arg0;
- (char)isCompleted;
- (void)dealloc;
- (NSString *)description;
- (NSMutableArray *)items;
- (void)setItems:(NSMutableArray *)arg0;
- (PLCameraImportQueue *)initWithItems:(NSMutableArray *)arg0;
- (NSObject *)currentItem;
- (id)itemsNotCompleted;
- (NSArray *)completedItems;
- (void)didCompleteItem:(NSObject *)arg0;

@end
