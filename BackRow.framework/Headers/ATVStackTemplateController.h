/* Runtime dump - ATVStackTemplateController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVAppViewController;

@class ATVFeedElement, ATVStackTemplateView, BRControl, BRGridControl, BRHeaderControl, BRViewController;
@interface ATVStackTemplateController : NSObject <ATVAppViewController>
{
    BRViewController * _parentController;
    IKAudioElement * _audioElement;
    ATVStackTemplateView * _scrollerTemplateView;
    id _headerControl;
    NSArray * _controls;
    NSString * _previousAutohighlight;
}

@property (retain, nonatomic) IKAudioElement * audioElement;
@property (retain, nonatomic) ATVStackTemplateView * scrollerTemplateView;
@property (retain, nonatomic) id headerControl;
@property (retain, nonatomic) NSArray * controls;
@property (retain, nonatomic) NSString * previousAutohighlight;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) BRViewController * parentController;

- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (BRHeaderControl *)headerControl;
- (void)setAudioElement:(IKAudioElement *)arg0;
- (IKAudioElement *)audioElement;
- (IKAudioElement *)backgroundAudio;
- (void)loadWithCompletion:(id /* block */)arg0;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (void)setHeaderControl:(BRControl *)arg0;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (void)_viewDataWithViewElement:(NSObject *)arg0 header:(id *)arg1 items:(id *)arg2 background:(id *)arg3;
- (ATVStackTemplateView *)scrollerTemplateView;
- (NSString *)previousAutohighlight;
- (void)setPreviousAutohighlight:(NSString *)arg0;
- (void)setScrollerTemplateView:(ATVStackTemplateView *)arg0;
- (ATVStackTemplateController *)init;
- (BRControl *)view;
- (void).cxx_destruct;
- (void)setParentController:(BRViewController *)arg0;
- (BRViewController *)parentController;
- (void)setControls:(NSArray *)arg0;
- (NSArray *)controls;

@end
