/* Runtime dump - LTAirPlayAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRXMLMediaAsset.h>
@interface LTAirPlayAsset : BRXMLMediaAsset

- (id)_metadataRetriever;
- (NSString *)title;
- (id /* <BRImageProxy> */)imageProxy;
- (NSString *)artist;

@end
