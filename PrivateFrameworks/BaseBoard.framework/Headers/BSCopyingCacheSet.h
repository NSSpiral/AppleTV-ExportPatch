/* Runtime dump - BSCopyingCacheSet
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSCopyingCacheSet : NSObject
{
    NSMutableSet * _mutable;
    NSSet * _immutable;
}

@property (readonly) unsigned int count;

- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (void)addObject:(struct objc_method *)arg0;
- (NSString *)description;
- (char)containsObject:(NSObject *)arg0;
- (NSSet *)immutableSet;

@end
