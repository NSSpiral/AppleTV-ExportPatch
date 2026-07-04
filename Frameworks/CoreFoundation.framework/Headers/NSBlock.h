/* Runtime dump - NSBlock
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSBlock : NSObject <NSCopying>

+ (NSBlock *)alloc;
+ (NSBlock *)allocWithZone:(struct _NSZone *)arg0;

- (void)performAfterDelay:(double)arg0;
- (NSBlock *)copy;
- (void)invoke;
- (NSBlock *)copyWithZone:(struct _NSZone *)arg0;

@end
