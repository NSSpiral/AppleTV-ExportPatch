/* Runtime dump - MusicCloudAdController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent, MusicCloudAdView;
@interface MusicCloudAdController : BRViewController
{
    MusicCloudAdView * _adView;
    NSString * movirURL;
    id _selectionHandler;
}

@property (retain, nonatomic) NSString * movieURL;
@property (copy, nonatomic) id selectionHandler;
@property (retain, nonatomic) MusicCloudAdView * adView;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)setSelectionHandler:(id /* block */)arg0;
- (id /* block */)selectionHandler;
- (MusicCloudAdController *)initWithDescription:(NSString *)arg0 prompt:(NSString *)arg1;
- (void)setAdView:(MusicCloudAdView *)arg0;
- (NSString *)movieURL;
- (MusicCloudAdView *)adView;
- (void)setMovieURL:(NSString *)arg0;
- (MusicCloudAdController *)init;
- (void).cxx_destruct;
- (MusicCloudAdController *)initWithDescription:(NSString *)arg0;

@end
