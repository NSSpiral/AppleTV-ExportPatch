/* Runtime dump - ATVMovieTrailersController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRAlertControl, BRControl, BRCursorControl, BREvent, BRMovieTrailersProvider, BRPanelControl, BRScrollControl, BRWaitPromptControl;
@interface ATVMovieTrailersController : BRController
{
    NSArray * _trailers;
    BRPanelControl * _panel;
    BRMovieTrailersProvider * _trailersProvider;
    BRWaitPromptControl * _loadingControl;
    BRScrollControl * _scroller;
    BRCursorControl * _cursor;
    BRAlertControl * _errorControl;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (void)_movieTrailersLoaded:(id)arg0;
- (void)_movieTrailersLoading:(id)arg0;
- (void)_movieTrailersLoadFailed:(id)arg0;
- (NSString *)_movieTrailersTitle;
- (void)_removeControls;
- (void)_addLoadingControl;
- (void)_objectSelected:(id)arg0;
- (NSArray *)_providers;
- (void)_addTrailersMediaControl;
- (void)_addErrorControlWithError:(NSError *)arg0;
- (void)_passRemoveControls:(id)arg0;
- (void)_passErrorControlWithError:(NSError *)arg0;
- (void)_passTrailersMediaControl:(BRControl *)arg0;
- (void)_passLoadingControl:(BRControl *)arg0;
- (char)isNetworkDependent;
- (id)_movieTrailers:(id *)arg0;
- (void)dealloc;
- (ATVMovieTrailersController *)init;
- (NSString *)accessibilityLabel;

@end
