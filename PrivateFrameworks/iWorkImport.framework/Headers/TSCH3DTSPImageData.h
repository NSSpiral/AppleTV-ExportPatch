/* Runtime dump - TSCH3DTSPImageData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSPImageData : NSObject <TSCHUnretainedParent>
{
    TSCH3DTSPImageDataTexture * mParent;
    TSPData * mData;
}

@property (retain, nonatomic) TSPData * data;

+ (NSData *)dataWithTSPImageData:(NSData *)arg0;

- (struct CGImage *)newCGImage;
- (void)clearParent;
- (char)hasCompleteData;
- (NSCache *)databufferForDataCache:(NSObject *)arg0;
- (TSCH3DTSPImageData *)initWithTSPImageData:(NSData *)arg0;
- (NSObject *)p_encodeImageSize:(struct tvec4<int> *)arg0 andMipmapData:(NSData *)arg1;
- (NSString *)uniqueFilename;
- (NSObject *)p_generateMipmapsBuffer;
- (NSData *)p_decodeCachedData:(NSData *)arg0 imageSize:(struct tvec4<int> *)arg1;
- (char)canLoadCachedDataForDataCache:(NSObject *)arg0;
- (void)dealloc;
- (TSPData *)data;
- (void)setData:(TSPData *)arg0;
- (void)setParent:(NSObject *)arg0;

@end
