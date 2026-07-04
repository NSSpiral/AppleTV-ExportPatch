/* Runtime dump - BRMediaCollectionGeniusMixInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaCollectionGeniusMixInfo : NSObject

+ (void)setImplementationClass:(Class)arg0;
+ (BRMediaCollectionGeniusMixInfo *)geniusMixInfoForGeniusMix:(id)arg0;

- (BRMediaCollectionGeniusMixInfo *)initWithGeniusMix:(char)arg0;
- (NSString *)basedOnText;
- (UIImage *)generatedImage;
- (void)setGeneratedImage:(UIImage *)arg0;
- (char)isValid;
- (NSArray *)images;

@end
