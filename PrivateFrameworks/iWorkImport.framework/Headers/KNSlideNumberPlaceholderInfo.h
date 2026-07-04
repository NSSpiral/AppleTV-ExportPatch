/* Runtime dump - KNSlideNumberPlaceholderInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

- (KNSlideNumberPlaceholderInfo *)initFromUnarchiver:(NSObject *)arg0;
- (Class)repClass;
- (Class)layoutClass;
- (NSArray *)textureDeliveryStylesLocalized:(char)arg0 animationFilter:(NSString *)arg1;
- (NSObject *)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1 chunkIndex:(unsigned int)arg2;
- (NSString *)instructionalText;
- (void)acceptVisitor:(NSObject *)arg0;
- (int)kind;

@end
