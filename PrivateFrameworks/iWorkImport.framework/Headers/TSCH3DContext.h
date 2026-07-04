/* Runtime dump - TSCH3DContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DContext : NSObject <NSCopying>
{
    struct FramebufferAttributes mCurrentFramebufferAttributes;
}

- (void)setCurrentFramebufferAttributes:(struct FramebufferAttributes *)arg0;
- (struct FramebufferAttributes *)currentFramebufferAttributes;
- (unsigned int)hash;
- (TSCH3DContext *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
