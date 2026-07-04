/* Runtime dump - RUIYTRelatedDocumentSpec
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/RUIYTVideosDocumentSpec.h>

@class RUIYTMediaAsset;
@interface RUIYTRelatedDocumentSpec : RUIYTVideosDocumentSpec
{
    RUIYTMediaAsset * _asset;
}

@property (retain, nonatomic) RUIYTMediaAsset * asset;

- (void).cxx_destruct;
- (RUIYTMediaAsset *)asset;
- (void)setAsset:(RUIYTMediaAsset *)arg0;

@end
