/* Runtime dump - TSCH3DTSPMipmapData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSPMipmapData : NSObject <TSCHUnretainedParent>
{
    TSCH3DTSPImageDataTexture * mParent;
    TSPData * mData;
}

@property (readonly, nonatomic) TSPData * data;

+ (NSData *)dataWithTSPData:(NSData *)arg0;

- (void)clearParent;
- (TSCH3DTSPMipmapData *)initWithTSPData:(NSData *)arg0;
- (id)databuffer;
- (void)dealloc;
- (TSPData *)data;
- (void)setParent:(NSObject *)arg0;

@end
