/* Runtime dump - ATVJSSlideShow
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext, BRMediaPlayer;
@interface ATVJSSlideShow : NSObject
{
    ATVJSContext * _context;
    id _ntCurrentAssetChanged;
    id _ntStateChanged;
    BRMediaPlayer * _player;
}

@property (retain, nonatomic) id ntCurrentAssetChanged;
@property (retain, nonatomic) id ntStateChanged;
@property (retain, nonatomic) BRMediaPlayer * player;

- (void)setNtCurrentAssetChanged:(NSNotification *)arg0;
- (void)setNtStateChanged:(NSNotification *)arg0;
- (void)runFromIndex:(int)arg0 mediaAssets:(NSArray *)arg1 dataClient:(ATVDataClient *)arg2 couplingObject:(NSObject *)arg3 completionCallback:(id /* block */)arg4;
- (NSNotification *)ntCurrentAssetChanged;
- (NSNotification *)ntStateChanged;
- (void)showSettingsWithMediaAssets:(NSArray *)arg0 dataClient:(ATVDataClient *)arg1 couplingObject:(NSObject *)arg2 completionCallback:(id /* block */)arg3;
- (void)dealloc;
- (ATVJSSlideShow *)initWithContext:(ATVJSContext *)arg0;
- (void)teardown;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
