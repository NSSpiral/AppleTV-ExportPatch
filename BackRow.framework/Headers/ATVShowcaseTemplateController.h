/* Runtime dump - ATVShowcaseTemplateController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVAppEventDelegate.h>

@protocol ATVAppViewController;

@class ATVFeedElement, ATVShowcaseTemplateViewContainer, ATVShowcaseTransitioningController, BRControl, BRHeaderControl, BRViewController;
@interface ATVShowcaseTemplateController : ATVAppEventDelegate <ATVAppViewController>
{
    char _disabled;
    BRViewController * _parentController;
    ATVShowcaseTransitioningController * _transitioningController;
    IKAudioElement * _audioElement;
    NSArray * _modeContexts;
    unsigned int _currentModeIndex;
    ATVShowcaseTemplateViewContainer * _containerView;
    NSArray * _items;
    unsigned int _selectedIndex;
    NSString * _autoHighlightIdentifier;
    id _headerControl;
    <BRImageProxy> * _backgroundImageProxy;
    id _loadCompletion;
}

@property (retain, nonatomic) ATVShowcaseTransitioningController * transitioningController;
@property (retain, nonatomic) IKAudioElement * audioElement;
@property (copy, nonatomic) NSArray * modeContexts;
@property (nonatomic) unsigned int currentModeIndex;
@property (retain, nonatomic) ATVShowcaseTemplateViewContainer * containerView;
@property (retain, nonatomic) NSArray * items;
@property (nonatomic) unsigned int selectedIndex;
@property (retain, nonatomic) NSString * autoHighlightIdentifier;
@property (retain, nonatomic) id headerControl;
@property (retain, nonatomic) <BRImageProxy> * backgroundImageProxy;
@property (copy, nonatomic) id loadCompletion;
@property (nonatomic) char disabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) BRViewController * parentController;

- (BRHeaderControl *)headerControl;
- (ATVShowcaseTransitioningController *)transitioningController;
- (void)setTransitioningController:(ATVShowcaseTransitioningController *)arg0;
- (void)_imageUpdated:(id)arg0;
- (void)setAudioElement:(IKAudioElement *)arg0;
- (IKAudioElement *)audioElement;
- (IKAudioElement *)backgroundAudio;
- (void)loadWithCompletion:(id /* block */)arg0;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (void)setHeaderControl:(BRControl *)arg0;
- (void)_imageNotAvailable:(id)arg0;
- (char)_handleDefaultActionForAppEvent:(unsigned int)arg0 withControl:(BRControl *)arg1;
- (<BRImageProxy> *)backgroundImageProxy;
- (NSString *)_currentModeContext;
- (void)_performPostSelectionUpdates;
- (NSArray *)modeContexts;
- (NSObject *)_backgroundImageViewFromProxy:(NSObject *)arg0;
- (void)setModeContexts:(NSArray *)arg0;
- (void)setCurrentModeIndex:(unsigned int)arg0;
- (void)setBackgroundImageProxy:(<BRImageProxy> *)arg0;
- (void)setAutoHighlightIdentifier:(NSString *)arg0;
- (void)_performPostTransitioningUpdates;
- (char)_handleContainerEvent:(NSObject *)arg0;
- (char)_handleCarouselEvent:(NSObject *)arg0;
- (unsigned int)currentModeIndex;
- (void)_transitionToCurrentModeView;
- (void)_displayShowcaseDescriptionOverlayForOneup:(id)arg0;
- (void)_updateShowcaseDescriptionForCoverflow:(id)arg0;
- (void)_updateOneupDescriptionForCoverflow:(id)arg0;
- (void)_displayDescriptiveOverlayForOneup:(id)arg0;
- (NSObject *)_showcaseDescriptionViewForSelectedItem;
- (NSObject *)_oneupDescriptionViewForSelectedItem;
- (char)_handleEvent:(NSObject *)arg0 withControl:(BRControl *)arg1;
- (void)dealloc;
- (ATVShowcaseTemplateController *)init;
- (ATVShowcaseTemplateViewContainer *)containerView;
- (BRControl *)view;
- (void)setContainerView:(ATVShowcaseTemplateViewContainer *)arg0;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (unsigned int)selectedIndex;
- (void)setSelectedIndex:(unsigned int)arg0;
- (void)setDisabled:(char)arg0;
- (void).cxx_destruct;
- (NSString *)autoHighlightIdentifier;
- (void)setParentController:(BRViewController *)arg0;
- (BRViewController *)parentController;
- (void)setLoadCompletion:(id /* block */)arg0;
- (id /* block */)loadCompletion;
- (char)isDisabled;

@end
