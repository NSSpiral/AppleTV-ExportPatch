/* Runtime dump - VKTileCache
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileCache : VKLRUCache

- (NSString *)objectForKey:(struct VKTileKey *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(struct VKTileKey *)arg1;
- (NSString *)objectWithoutPromotingForKey:(struct VKTileKey *)arg0;
- (NSString *)tileWithoutTouchingForKey:(struct VKTileKey *)arg0;

@end
