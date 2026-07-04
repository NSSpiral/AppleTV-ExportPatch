/* Runtime dump - SKTextureAtlasPacker
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureAtlasPacker : NSObject

+ (struct CGImage *)copyProcessedImageSource:(NSObject *)arg0;

- (void)generateTextureAtlasImages:(id)arg0 outputDictionary:(id *)arg1;
- (struct CGRect)calcNonAlphaArea:(id)arg0;
- (struct CGImage *)copyRotateCGImage:(struct CGImage *)arg0 direction:(char)arg1;
- (char)isFullyOpaque:(struct CGImage *)arg0;
- (id)partitionTextureFilesByResolution:(id)arg0;
- (NSDictionary *)generateMetaData;
- (id)processPackedTextureAtlas:(struct vector<CGSize, std::__1::allocator<CGSize> > *)arg0 suffix:(struct vector<CGSize, std::__1::allocator<CGSize> >)arg1 packer:(struct CGSize *)arg2 sortedTrimArray:(struct __compressed_pair<CGSize *, std::__1::allocator<CGSize> >)arg3 sortedTextureArray:(NSArray *)arg4;
- (NSArray *)getTextureFileList:(NSArray *)arg0 modDate:(id *)arg1;

@end
