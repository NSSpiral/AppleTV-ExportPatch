/* Runtime dump - TSCH3DTextureResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureResource : TSCH3DResource <TSCHUnretainedParent, TSCH3DOptimizedTextureResource>
{
    TSCH3DTexture * mParent;
    NSNumber * mCachedHash;
}

- (void)clearParent;
- (char)canLoadCachedFullMipmapBufferForDataCache:(NSObject *)arg0;
- (NSObject *)optimizedMipmapBuffer;
- (NSCache *)databufferForDataCache:(NSObject *)arg0;
- (NSObject *)p_parent;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)get;
- (TSCH3DTextureResource *)initWithParent:(NSObject *)arg0;

@end
