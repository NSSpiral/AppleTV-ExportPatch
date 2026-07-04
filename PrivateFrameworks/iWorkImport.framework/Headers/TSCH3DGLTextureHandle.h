/* Runtime dump - TSCH3DGLTextureHandle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLTextureHandle : TSCH3DGLHandle
{
    unsigned int mTarget;
    struct tvec3<int> mFullSize;
    struct tvec3<int> mLevel0Size;
}

@property (readonly, nonatomic) unsigned int target;
@property (nonatomic) struct tvec3<int> fullSize;
@property (nonatomic) struct tvec3<int> level0Size;

+ (TSCH3DGLTextureHandle *)handleWithGLHandle:(unsigned int)arg0 target:(unsigned int)arg1;

- (void)destroyResourcesInContext:(NSObject *)arg0;
- (TSCH3DGLTextureHandle *)initWithGLHandle:(unsigned int)arg0 target:(unsigned int)arg1;
- (struct tvec3<int>)fullSize;
- (void)setFullSize:(struct tvec3<int>)arg0;
- (struct tvec3<int>)level0Size;
- (void)setLevel0Size:(struct tvec3<int>)arg0;
- (unsigned int)target;
- (void).cxx_construct;

@end
