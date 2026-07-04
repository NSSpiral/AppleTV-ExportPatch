/* Runtime dump - TSCH3DGLRenderBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable>
{
    unsigned int mBuffer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)bindInSession:(NSObject *)arg0;
- (void)destroyResourcesInContext:(NSObject *)arg0;
- (void)deactivateInContext:(NSObject *)arg0;
- (TSCH3DGLRenderBuffer *)initWithGLBuffer:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)description;
- (char)valid;

@end
