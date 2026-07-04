/* Runtime dump - BRMetadataLongDescriptionPreviewControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCoverArtImageLayer, BRMetadataLongDescriptionControl, BRReflectionControl;
@interface BRMetadataLongDescriptionPreviewControl : BRControl
{
    id _asset;
    <BRMetadataProvider> * _metadataProvider;
    BRControl * _coverArtWrapper;
    BRCoverArtImageLayer * _coverArtLayer;
    BRReflectionControl * _reflectionLayer;
    BRMetadataLongDescriptionControl * _metadataLayer;
    NSTimer * _timer;
    char _showsMetadataImmediately;
    char _showingMetadata;
    char _shouldAddMarginsToBounds;
    char _shouldBottomAlignArtwork;
    struct ? _maxArtworkSize;
}

@property (nonatomic) struct ? maxArtworkSize;
@property (nonatomic) char shouldAddMarginsToBounds;
@property (nonatomic) char shouldBottomAlignArtwork;

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (BRControl *)metadataControl;
- (void)setMetadataProvider:(<BRMetadataProvider> *)arg0;
- (void)setShowsMetadataImmediately:(char)arg0;
- (void)setShouldAddMarginsToBounds:(char)arg0;
- (void)setShouldBottomAlignArtwork:(char)arg0;
- (void)setMaxArtworkSize:(struct ?)arg0;
- (void)setShowsDefaultCoverArt:(char)arg0;
- (void)_downloadStateChanged:(NSNotification *)arg0;
- (void)setDeletterboxAssetArtwork:(char)arg0;
- (void)_coverArtChanged:(NSNotification *)arg0;
- (char)shouldAddMarginsToBounds;
- (struct CGRect)_frameForArt:(id)arg0 inBounds:(SEL)arg1;
- (struct CGRect)_metadataFrameForBounds:(id)arg0;
- (void)_showMetadataAfterDelay;
- (char)showsDefaultCoverArt;
- (char)showsMetadataImmediately;
- (char)deletterboxAssetArtwork;
- (struct ?)maxArtworkSize;
- (char)shouldBottomAlignArtwork;
- (void)_updateMetadataLayer;
- (void)_metadataTimerFired:(id)arg0;
- (float)_reflectionAmountForArtFrame:(struct CGRect)arg0 bottomCutoff:(struct CGSize)arg1;
- (void)dealloc;
- (BRMetadataLongDescriptionPreviewControl *)init;
- (NSString *)accessibilityLabel;
- (NSSet *)asset;
- (void)setAsset:(NSSet *)arg0;
- (void)setImageProxy:(NSObject *)arg0;

@end
