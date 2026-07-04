/* Runtime dump - BRMetadataPreviewControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCoverArtImageLayer, BRMetadataControl, BRReflectionControl;
@interface BRMetadataPreviewControl : BRControl
{
    id _asset;
    <BRMetadataProvider> * _metadataProvider;
    BRControl * _coverArtWrapper;
    BRCoverArtImageLayer * _coverArtLayer;
    BRReflectionControl * _reflectionLayer;
    BRMetadataControl * _metadataLayer;
    NSTimer * _timer;
    char _showsMetadataImmediately;
    char _showingMetadata;
}

- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (BRControl *)metadataControl;
- (void)setMetadataProvider:(<BRMetadataProvider> *)arg0;
- (void)setShowsMetadataImmediately:(char)arg0;
- (void)setShowsDefaultCoverArt:(char)arg0;
- (void)_downloadStateChanged:(NSNotification *)arg0;
- (void)setDeletterboxAssetArtwork:(char)arg0;
- (void)_coverArtChanged:(NSNotification *)arg0;
- (struct CGRect)_frameForArt:(id)arg0 inBounds:(SEL)arg1;
- (struct CGRect)_metadataFrameForBounds:(id)arg0;
- (void)_showMetadataAfterDelay;
- (char)showsDefaultCoverArt;
- (char)showsMetadataImmediately;
- (char)deletterboxAssetArtwork;
- (void)_updateMetadataLayer;
- (void)_metadataTimerFired:(id)arg0;
- (float)_reflectionAmountForArtFrame:(struct CGRect)arg0 bottomCutoff:(struct CGSize)arg1;
- (struct CGRect)_frameForArt:(id)arg0 withMetadataFrame:(SEL)arg1 inBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg2;
- (void)dealloc;
- (BRMetadataPreviewControl *)init;
- (NSString *)accessibilityLabel;
- (NSSet *)asset;
- (void)setAsset:(NSSet *)arg0;
- (void)setImageProxy:(NSObject *)arg0;

@end
