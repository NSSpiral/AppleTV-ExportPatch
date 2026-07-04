/* Runtime dump - TSCH3DGLESRTT
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable>
{
    unsigned int mTexture;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)colorbufferWithAllocatorInfo:(struct RenderbufferAllocatorInfo *)arg0;
+ (NSDictionary *)depthbufferWithAllocatorInfo:(struct RenderbufferAllocatorInfo *)arg0;
+ (char)isTexturable;
+ (NSDictionary *)bufferWithAllocatorInfo:(struct RenderbufferAllocatorInfo *)arg0 internalFormat:(struct RenderbufferAllocatorInfo)arg1 format:(struct tvec2<int> *)arg2 attachment:(NSObject *)arg3;
+ (char)isEqual:(NSObject *)arg0;

- (void)bindInSession:(NSObject *)arg0;
- (void)destroyResourcesInContext:(NSObject *)arg0;
- (void)deactivateInContext:(NSObject *)arg0;
- (TSCH3DGLESRTT *)initWithGLTexture:(unsigned int)arg0;
- (void)dealloc;
- (char)valid;

@end
