/* Runtime dump - BRMetadataPopulatorFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRMetadataPopulatorFactory : BRSingleton
{
    <BRMediaImagePopulator> * _imagePopulatorForStoreDictionary;
    <BRMetadataPopulator> * _tvShowPopulator;
    <BRMetadataPopulator> * _podcastPopulator;
    <BRMetadataPopulator> * _musicVideoPopulator;
    <BRMetadataPopulator> * _songPopulator;
    <BRMetadataPopulator> * _moviePopulator;
    <BRMetadataPopulator> * _movieTrailerPopulator;
    <BRMetadataPopulator> * _rssPopulator;
    <BRMetadataPopulator> * _audiobookPopulator;
    <BRMetadataPopulator> * _musicAlbumPopulator;
    <BRMetadataPopulator> * _ytPopulator;
    <BRMetadataPopulator> * _airTunesPopulator;
    <BRMetadataPopulator> * _radioPopulator;
}

+ (BRMetadataPopulatorFactory *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (NSSet *)populatorForAsset:(NSSet *)arg0;
- (NSSet *)_populatorForMediaAsset:(NSSet *)arg0;
- (id)_populatorForMediaCollection:(id)arg0;
- (void)dealloc;

@end
