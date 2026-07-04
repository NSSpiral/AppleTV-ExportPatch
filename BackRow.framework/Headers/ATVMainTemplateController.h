/* Runtime dump - ATVMainTemplateController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVAppViewController;

@class ATVFeedElement, ATVMainTemplateView, BRControl, BRViewController;
@interface ATVMainTemplateController : NSObject <ATVAppViewController>
{
    BRViewController * _parentController;
    IKAudioElement * _audioElement;
    ATVMainTemplateView * _outlineView;
    NSArray * _menuItems;
    NSArray * _imageProxies;
    unsigned int _indexOfFetchedImage;
    NSString * _imageIDOfFetchedImage;
    unsigned int _displayImageIndex;
    id _loadCompletionBlock;
    NSTimer * _displayIntervalTimer;
    double _displayInterval;
}

@property (retain, nonatomic) IKAudioElement * audioElement;
@property (retain, nonatomic) ATVMainTemplateView * outlineView;
@property (retain, nonatomic) NSArray * menuItems;
@property (retain, nonatomic) NSArray * imageProxies;
@property (nonatomic) unsigned int indexOfFetchedImage;
@property (retain, nonatomic) NSString * imageIDOfFetchedImage;
@property (nonatomic) unsigned int displayImageIndex;
@property (copy, nonatomic) id loadCompletionBlock;
@property (nonatomic) double displayInterval;
@property (weak, nonatomic) NSTimer * displayIntervalTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) BRViewController * parentController;

- (void)_imageUpdated:(id)arg0;
- (void)_imageUnavailable:(id)arg0;
- (void)setAudioElement:(IKAudioElement *)arg0;
- (IKAudioElement *)audioElement;
- (IKAudioElement *)backgroundAudio;
- (void)loadWithCompletion:(id /* block */)arg0;
- (void)viewWasActivated;
- (void)viewWasDeactivated;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (NSArray *)imageProxies;
- (void)setImageProxies:(NSArray *)arg0;
- (void)setIndexOfFetchedImage:(unsigned int)arg0;
- (void)_fetchNext;
- (void)setDisplayInterval:(double)arg0;
- (void)setLoadCompletionBlock:(id /* block */)arg0;
- (void)_updateBackgroundImageWithIndex:(unsigned int)arg0;
- (NSString *)imageIDOfFetchedImage;
- (id /* block */)loadCompletionBlock;
- (NSTimer *)displayIntervalTimer;
- (double)displayInterval;
- (void)_displayIntervalTimerFired:(id)arg0;
- (void)setDisplayIntervalTimer:(NSTimer *)arg0;
- (unsigned int)indexOfFetchedImage;
- (void)setImageIDOfFetchedImage:(NSString *)arg0;
- (void)setDisplayImageIndex:(unsigned int)arg0;
- (unsigned int)displayImageIndex;
- (void)dealloc;
- (ATVMainTemplateController *)init;
- (BRControl *)view;
- (void)setMenuItems:(NSArray *)arg0;
- (NSArray *)menuItems;
- (void).cxx_destruct;
- (void)setOutlineView:(ATVMainTemplateView *)arg0;
- (ATVMainTemplateView *)outlineView;
- (void)setParentController:(BRViewController *)arg0;
- (BRViewController *)parentController;

@end
