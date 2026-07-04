/* Runtime dump - ATVMusicStoreMusicAlbumMetadataProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseMetadataProvider.h>

@class BRControl;
@interface ATVMusicStoreMusicAlbumMetadataProvider : ATVMusicStoreBaseMetadataProvider

+ (void)initialize;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (void)_populateAlbumDetails:(id)arg0;
- (struct WebBackForwardListItem *)_item;

@end
