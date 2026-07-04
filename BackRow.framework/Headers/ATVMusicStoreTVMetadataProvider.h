/* Runtime dump - ATVMusicStoreTVMetadataProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseMetadataProvider.h>

@class BRControl;
@interface ATVMusicStoreTVMetadataProvider : ATVMusicStoreBaseMetadataProvider

+ (void)_initializeMappings:(id)arg0;
+ (void)_initializeDetailedTransformers;
+ (void)_initializeAbbreviatedTransformers;
+ (void)initialize;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (id)_detailControlWithDetail:(IKJSObject *)arg0;
- (void)_populateMetadataForControl:(BRControl *)arg0 withStoreOffer:(MPStoreOffer *)arg1;
- (void)_populateDetailedMetadata:(NSData *)arg0 withStoreOffer:(MPStoreOffer *)arg1;
- (void)_populateAbbreviatedMetadata:(NSData *)arg0 withStoreOffer:(MPStoreOffer *)arg1;
- (id)_formatControlForStoreOffer:(id)arg0 requestedBy:(NSObject *)arg1;

@end
