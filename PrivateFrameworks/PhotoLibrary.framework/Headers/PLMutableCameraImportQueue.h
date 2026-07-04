/* Runtime dump - PLMutableCameraImportQueue
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMutableCameraImportQueue : NSObject
{
    NSMutableArray * _items;
}

- (void)dealloc;
- (PLMutableCameraImportQueue *)init;
- (NSString *)description;
- (NSObject *)currentItem;
- (void)enqueueImportItem:(NSObject *)arg0;
- (void)dequeueImportItem;

@end
