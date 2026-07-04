/* Runtime dump - ATVMovieTrailersDetailController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRBoxControl, BRDetailedMediaControl, BREvent, BRMediaShelfView, BRMovieTrailerCollection, BRMovieTrailersProvider;
@interface ATVMovieTrailersDetailController : BRController
{
    BRMovieTrailersProvider * _provider;
    BRMovieTrailerCollection * _trailer;
    BRDetailedMediaControl * _detailedControl;
    BRBoxControl * _relatedBox;
    BRMediaShelfView * _relatedShelf;
}

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (ATVMovieTrailersDetailController *)initWithProvider:(BRMovieTrailersProvider *)arg0 trailer:(BRMovieTrailerCollection *)arg1;
- (void)_setupDetailControls;
- (BRMovieTrailerCollection *)trailer;
- (void)_setActionControl;
- (void)_setImageProxy;
- (void)_setCopyrightText;
- (void)_setMetadataControl;
- (void)_setRelatedContent;
- (char)handleSelectionForActionShelf:(id)arg0;
- (char)handleSelectionForRelatedShelf:(id)arg0;
- (void)dealloc;

@end
