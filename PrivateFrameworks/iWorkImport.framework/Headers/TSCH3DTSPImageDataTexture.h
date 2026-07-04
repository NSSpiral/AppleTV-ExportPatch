/* Runtime dump - TSCH3DTSPImageDataTexture
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture
{
    TSCH3DTSPImageData * mData;
    TSCH3DTSPMipmapData * mOptimizedMipmapData;
    NSNumber * mCachedHash;
}

@property (readonly, nonatomic) TSCH3DTSPImageData * data;
@property (readonly, nonatomic) TSPData * imageData;

+ (TSCH3DTSPImageDataTexture *)instanceWithArchive:(struct Chart3DTSPImageDataTextureArchive *)arg0 unarchiver:(struct Chart3DTSPImageDataTextureArchive)arg1;
+ (NSData *)textureWithImageData:(TSPData *)arg0 optimizedMipmapData:(NSData *)arg1;

- (void)saveToArchive:(struct Chart3DTSPImageDataTextureArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DTSPImageDataTexture *)initWithArchive:(struct Chart3DTSPImageDataTextureArchive *)arg0 unarchiver:(struct Chart3DTSPImageDataTextureArchive)arg1;
- (char)hasCompleteData;
- (char)canLoadCachedFullMipmapBufferForDataCache:(NSObject *)arg0;
- (NSObject *)optimizedMipmapBuffer;
- (NSCache *)databufferForDataCache:(NSObject *)arg0;
- (TSCH3DTSPImageDataTexture *)initWithImageData:(TSPData *)arg0 optimizedMipmapData:(NSData *)arg1;
- (void)p_setOptimizedMipMapData:(NSData *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DTSPImageData *)data;
- (TSPData *)imageData;
- (void)setChanged:(char)arg0;

@end
