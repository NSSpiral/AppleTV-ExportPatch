/* Runtime dump - TSCH3DTSDFillTexture
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSDFillTexture : TSCH3DTexture
{
    TSDFill * mFill;
}

+ (TSCH3DTSDFillTexture *)textureWithTSDFill:(id)arg0;

- (char)hasCompleteData;
- (NSCache *)databufferForDataCache:(NSObject *)arg0;
- (TSCH3DTSDFillTexture *)initWithTSDFill:(TSDFill *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;

@end
