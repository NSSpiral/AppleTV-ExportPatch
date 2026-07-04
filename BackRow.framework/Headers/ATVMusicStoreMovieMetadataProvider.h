/* Runtime dump - ATVMusicStoreMovieMetadataProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreBaseMetadataProvider.h>

@class BRControl, WLKChannelDetails;
@interface ATVMusicStoreMovieMetadataProvider : ATVMusicStoreBaseMetadataProvider

+ (void)initialize;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)populateMetadataForControl:(BRControl *)arg0;
- (void)_populateMetadataDetails:(id)arg0 withStoreOffer:(MPStoreOffer *)arg1;
- (void)_populateMovieDetails:(id)arg0 withStoreOffer:(MPStoreOffer *)arg1;
- (void)_populateSubtitles:(id)arg0;
- (void)_populateAudio:(id)arg0;
- (void)_populateSubtitlesAndAudioLanguages:(id)arg0;
- (void)_populateActors:(id)arg0;
- (void)_populateDirectorsAndProducers:(id)arg0;
- (void)_populateDirector:(id)arg0;
- (void)_populateProducers:(id)arg0;
- (void)_populateSubtitlesAndAudioDetailPage:(id)arg0;
- (NSString *)_labelControlWithLabel:(NSString *)arg0;
- (id)_detailControlWithDetail:(IKJSObject *)arg0;
- (void)_addSplitDetails:(id)arg0 withTopDetailStrings:(id)arg1 topLabel:(NSString *)arg2 bottomDetailStrings:(id)arg3 bottomLabel:(NSString *)arg4;
- (void)_addDetail:(PSFlickrSettingsDetail *)arg0 withStrings:(NSArray *)arg1 label:(NSString *)arg2;
- (id)_detailControlsWithDetails:(WLKChannelDetails *)arg0;

@end
