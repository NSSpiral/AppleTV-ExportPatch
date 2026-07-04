/* Runtime dump - BRCCountedSet
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCountedSet : NSCountedSet
{
    unsigned int _totalCount;
}

- (void)removeObject:(struct objc_method *)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (unsigned int)totalCount;

@end
