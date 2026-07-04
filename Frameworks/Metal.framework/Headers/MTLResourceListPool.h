/* Runtime dump - MTLResourceListPool
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLResourceListPool : NSObject
{
    struct _MTLResourceListPoolPrivate _priv;
    int _resourceListCapacity;
}

- (int)availableCount;
- (MTLResourceListPool *)initWithResourceListCapacity:(int)arg0;
- (void)dealloc;

@end
