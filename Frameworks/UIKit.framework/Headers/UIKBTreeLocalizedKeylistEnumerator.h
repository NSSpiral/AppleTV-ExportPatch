/* Runtime dump - UIKBTreeLocalizedKeylistEnumerator
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator
{
    NSDictionary * _keyplaneCache;
    NSEnumerator * _nameEnum;
}

- (void)dealloc;
- (NSObject *)nextObject;
- (UIKBTreeLocalizedKeylistEnumerator *)initWithKeyplaneCache:(NSDictionary *)arg0;

@end
