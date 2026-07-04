/* Runtime dump - ATVRadioStationPreviewView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRPosterControl;
@interface ATVRadioStationPreviewView : BRControl
{
    struct CGSize posterSize;
    float posterReflectionHeight;
    <BRImageProxy> * _imageProxy;
    BRControl * _metadataControl;
    BRPosterControl * _poster;
    BRPosterControl * _loadingPoster;
}

@property (retain, nonatomic) <BRImageProxy> * imageProxy;
@property (retain, nonatomic) BRControl * metadataControl;
@property (retain, nonatomic) BRPosterControl * poster;
@property (retain, nonatomic) BRPosterControl * loadingPoster;

- (void)layoutSubcontrols;
- (void)loadPosterWithImageProxy:(<BRImageProxy> *)arg0;
- (void)setMetadataControl:(BRControl *)arg0;
- (BRControl *)metadataControl;
- (void)metadataUpdated;
- (id)_previewPoster;
- (BRPosterControl *)poster;
- (void)setPoster:(BRPosterControl *)arg0;
- (BRPosterControl *)loadingPoster;
- (void)setLoadingPoster:(BRPosterControl *)arg0;
- (ATVRadioStationPreviewView *)init;
- (void).cxx_destruct;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;

@end
