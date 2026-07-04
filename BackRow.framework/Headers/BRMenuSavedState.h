/* Runtime dump - BRMenuSavedState
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRMenuSavedState : BRSingleton
{
    NSMutableDictionary * _cachedMenuState;
    char _enabled;
}

+ (BRMenuSavedState *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (NSString *)selectionInfoForOwnerKey:(NSString *)arg0;
+ (void)saveSelection:(id)arg0 atIndex:(NSObject *)arg1 forOwnerKey:(NSString *)arg2;
+ (void)clearSavedSelectionForOwnerKey:(NSString *)arg0;
+ (void)saveSelection:(id)arg0 atIndexPath:(NSIndexPath *)arg1 forOwnerKey:(NSString *)arg2 metadata:(NSData *)arg3;
+ (void)saveSelection:(id)arg0 atIndex:(NSObject *)arg1 forOwnerKey:(NSString *)arg2 metadata:(NSData *)arg3;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(id /* <NSCopying> */)arg1;
- (void)dealloc;
- (BRMenuSavedState *)init;
- (void)removeObjectForKey:(NSString *)arg0;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (void)purge;

@end
