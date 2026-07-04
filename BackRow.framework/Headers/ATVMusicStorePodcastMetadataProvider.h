/* Runtime dump - ATVMusicStorePodcastMetadataProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseMetadataProvider.h>

@class BRControl;
@interface ATVMusicStorePodcastMetadataProvider : ATVMusicStoreBaseMetadataProvider

+ (void)initialize;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (void)_populatePodcastMetadataDetails:(id)arg0;
- (void)_populateShowDetails:(id)arg0;

@end
