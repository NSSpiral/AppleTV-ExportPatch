/* Runtime dump - MTLResourceList
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLResourceList : NSObject
{
    struct ? _listPriv;
}

- (void)releaseAllObjectsAndReset;
- (void)dealloc;
- (MTLResourceList *)initWithCapacity:(int)arg0;

@end
