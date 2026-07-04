/* Runtime dump - MTLDebugBlitCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder
{
    char canDealloc;
    char canEndEncoding;
    char hasEndEncoding;
}

- (void)_setDefaults;
- (void)copyFromTexture:(NSObject *)arg0 sourceSlice:(unsigned int)arg1 sourceLevel:(unsigned int)arg2 sourceOrigin:(struct ?)arg3 sourceSize:(struct ?)arg4 toTexture:(NSObject *)arg5 destinationSlice:(unsigned int)arg6 destinationLevel:(unsigned int)arg7 destinationOrigin:(struct ?)arg8;
- (void)copyFromBuffer:(NSObject *)arg0 sourceOffset:(unsigned int)arg1 sourceBytesPerRow:(unsigned int)arg2 sourceBytesPerImage:(unsigned int)arg3 sourceSize:(struct ?)arg4 toTexture:(NSObject *)arg5 destinationSlice:(unsigned int)arg6 destinationLevel:(unsigned int)arg7 destinationOrigin:(struct ?)arg8;
- (void)copyFromTexture:(NSObject *)arg0 sourceSlice:(unsigned int)arg1 sourceLevel:(unsigned int)arg2 sourceOrigin:(struct ?)arg3 sourceSize:(struct ?)arg4 toBuffer:(NSObject *)arg5 destinationOffset:(unsigned int)arg6 destinationBytesPerRow:(unsigned int)arg7 destinationBytesPerImage:(unsigned int)arg8;
- (void)generateMipmapsForTexture:(NSObject *)arg0;
- (void)fillBuffer:(NSObject *)arg0 range:(struct _NSRange)arg1 value:(unsigned char)arg2;
- (void)copyFromBuffer:(NSObject *)arg0 sourceOffset:(unsigned int)arg1 toBuffer:(NSObject *)arg2 destinationOffset:(unsigned int)arg3 size:(unsigned int)arg4;
- (MTLDebugBlitCommandEncoder *)initWithBlitCommandEncoder:(NSObject *)arg0 commandBuffer:(struct CommandBuffer *)arg1;
- (void)endEncoding;
- (void)dealloc;

@end
