/* Runtime dump - UIKeyboardSliceStore
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSliceStore : NSObject
{
    NSMutableDictionary * _store;
}

+ (UIKeyboardSliceStore *)sharedStore;
+ (NSObject *)sliceSetForID:(NSObject *)arg0;
+ (NSString *)sliceSetIDForKeyplaneName:(NSString *)arg0 type:(int)arg1 orientation:(int)arg2;
+ (void)archiveSet:(NSSet *)arg0;

- (void)dealloc;
- (UIKeyboardSliceStore *)init;
- (NSObject *)sliceSetForID:(NSObject *)arg0;
- (void)addSet:(NSSet *)arg0;

@end
