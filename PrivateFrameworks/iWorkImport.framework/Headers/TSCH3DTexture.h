/* Runtime dump - TSCH3DTexture
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexture : NSObject
{
    TSCH3DTextureResource * mTextureResource;
}

@property (readonly, nonatomic) TSCH3DResource * resource;

- (void)didInitFromSOS;
- (char)hasCompleteData;
- (char)canLoadCachedFullMipmapBufferForDataCache:(NSObject *)arg0;
- (NSObject *)optimizedMipmapBuffer;
- (void)resetResource;
- (void)dealloc;
- (TSCH3DTexture *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DTexture *)copyWithZone:(struct _NSZone *)arg0;
- (TSCH3DResource *)resource;

@end
