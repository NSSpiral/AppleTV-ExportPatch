/* Runtime dump - CASlotProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CASlotProxy : NSObject
{
    struct Proxy * _proxy;
}

- (struct Object *)CA_copyRenderValue;
- (void)dealloc;
- (CASlotProxy *)initWithName:(unsigned int)arg0;

@end
