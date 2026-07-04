/* Runtime dump - ATVMusicStoreTVSeasonMetadataProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseMetadataProvider.h>

@class BRControl;
@interface ATVMusicStoreTVSeasonMetadataProvider : ATVMusicStoreBaseMetadataProvider

+ (void)initialize;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (id)_formatControlForStoreOffer:(id)arg0 requestedBy:(NSObject *)arg1;
- (struct WebBackForwardListItem *)_item;

@end
