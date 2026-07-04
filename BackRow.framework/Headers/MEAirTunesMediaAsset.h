/* Runtime dump - MEAirTunesMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaAsset.h>

@class BRMediaType;
@interface MEAirTunesMediaAsset : BRBaseMediaAsset
{
    NSMutableDictionary * _info;
    ATVImage * _coverArt;
}

- (NSString *)assetID;
- (NSString *)mediaSummary;
- (char)hasCoverArt;
- (NSString *)primaryCollectionTitle;
- (ATVImage *)coverArt;
- (NSObject *)coverArtID;
- (MEAirTunesMediaAsset *)initWithMediaProvider:(NSObject *)arg0;
- (void)clearMetaData;
- (char)coverArtIsPNG;
- (char)setObject:(NSObject *)arg0 forKey:(id /* <NSCopying> */)arg1;
- (long)duration;
- (NSString *)title;
- (void).cxx_destruct;
- (id /* <BRImageProxy> */)imageProxy;
- (NSString *)artist;
- (NSString *)composer;
- (BRMediaType *)mediaType;

@end
