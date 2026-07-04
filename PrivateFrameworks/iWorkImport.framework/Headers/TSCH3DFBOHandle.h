/* Runtime dump - TSCH3DFBOHandle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFBOHandle : TSCH3DGLHandle
{
    struct tvec2<int> mSize;
    <TSCH3DGLBindable> * mColorbuffer;
    <TSCH3DGLBindable> * mDepthbuffer;
}

@property (readonly, nonatomic) struct tvec2<int> size;
@property (readonly, nonatomic) <TSCH3DGLBindable> * colorbuffer;
@property (readonly, nonatomic) <TSCH3DGLBindable> * depthbuffer;

+ (TSCH3DFBOHandle *)handleWithGLHandle:(unsigned int)arg0 size:(struct tvec2<int> *)arg1 colorBuffer:(struct tvec2<int>)arg2 depthBuffer:(unsigned int)arg3;

- (void)destroyResourcesInContext:(NSObject *)arg0;
- (TSCH3DFBOHandle *)initWithGLHandle:(unsigned int)arg0 size:(struct tvec2<int> *)arg1 colorBuffer:(struct tvec2<int>)arg2 depthBuffer:(unsigned int)arg3;
- (<TSCH3DGLBindable> *)colorbuffer;
- (<TSCH3DGLBindable> *)depthbuffer;
- (void)dealloc;
- (struct tvec2<int>)size;
- (void).cxx_construct;
- (char)valid;
- (void)destroyFramebuffer;

@end
