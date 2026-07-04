/* Runtime dump - TSCH3DFramebuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebuffer : NSObject
{
    struct FramebufferAttributes mFramebufferAttributes;
}

+ (NSDictionary *)framebufferWithFramebufferAttributes:(struct FramebufferAttributes *)arg0;

- (TSCH3DFramebuffer *)initWithFramebufferAttributes:(struct FramebufferAttributes *)arg0;
- (struct FramebufferAttributes *)framebufferAttributes;
- (void).cxx_construct;

@end
