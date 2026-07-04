/* Runtime dump - ATVAppSlideShowViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVAppViewController;

@class ATVFeedElement, BRControl, BRMediaPlayer, BRViewController;
@interface ATVAppSlideShowViewController : NSObject <ATVAppViewController>
{
    BRViewController * _parentController;
    IKAudioElement * _audioElement;
    NSString * _transition;
    NSNumber * _transitionInterval;
    NSArray * _photoAssets;
    BRMediaPlayer * _player;
}

@property (retain, nonatomic) IKAudioElement * audioElement;
@property (retain, nonatomic) NSString * transition;
@property (retain, nonatomic) NSNumber * transitionInterval;
@property (retain, nonatomic) NSArray * photoAssets;
@property (retain, nonatomic) BRMediaPlayer * player;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) BRViewController * parentController;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (NSObject *)_backgroundAudioFromElement:(NSObject *)arg0;
- (void)setAudioElement:(IKAudioElement *)arg0;
- (void)setTransitionInterval:(NSNumber *)arg0;
- (void)setPhotoAssets:(NSArray *)arg0;
- (NSArray *)photoAssets;
- (void)_initiateSlideshow;
- (IKAudioElement *)audioElement;
- (IKAudioElement *)backgroundAudio;
- (void)loadWithCompletion:(id /* block */)arg0;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (void)dealloc;
- (BRControl *)view;
- (void)setTransition:(NSString *)arg0;
- (NSString *)transition;
- (void).cxx_destruct;
- (NSNumber *)transitionInterval;
- (void)setParentController:(BRViewController *)arg0;
- (BRViewController *)parentController;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
