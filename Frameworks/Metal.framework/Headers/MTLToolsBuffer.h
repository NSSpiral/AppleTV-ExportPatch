/* Runtime dump - MTLToolsBuffer
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer>
{
    MTLToolsPointerArray * _textures;
}

@property (readonly, nonatomic) MTLToolsPointerArray * textures;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy) NSString * label;
@property (readonly) <MTLDevice> * device;
@property (readonly) unsigned int cpuCacheMode;
@property (readonly) unsigned int length;

- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsBuffer *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (NSObject *)newTextureWithDescriptor:(NSObject *)arg0 offset:(unsigned int)arg1 bytesPerRow:(unsigned int)arg2;
- (unsigned int)length;
- (void *)contents;
- (void).cxx_destruct;
- (MTLToolsPointerArray *)textures;

@end
