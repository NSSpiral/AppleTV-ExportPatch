/* Runtime dump - ATVMusicStoreMusicVideoMetadataProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseMetadataProvider.h>

@class BRControl;
@interface ATVMusicStoreMusicVideoMetadataProvider : ATVMusicStoreBaseMetadataProvider

+ (void)_initializeMappings:(id)arg0;
+ (void)_initializeDetailedTransformers;
+ (void)_initializeAbbreviatedTransformers;
+ (void)initialize;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (void)_populateDetailedMetadata:(NSData *)arg0;
- (void)_populateAbbreviatedMetadata:(NSData *)arg0;

@end
