/* Runtime dump - VKCacheNode
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCacheNode : NSObject
{
    struct VKCacheKey _key;
    id _value;
    VKCacheNode * _next;
    VKCacheNode * _previous;
}

@property (nonatomic) struct VKCacheKey key;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) VKCacheNode * next;
@property (nonatomic) VKCacheNode * previous;

- (VKCacheNode *)next;
- (VKCacheNode *)previous;
- (void)dealloc;
- (struct VKCacheKey)key;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_construct;
- (void)setKey:(struct VKCacheKey)arg0;
- (void)setNext:(VKCacheNode *)arg0;
- (void)setPrevious:(VKCacheNode *)arg0;

@end
