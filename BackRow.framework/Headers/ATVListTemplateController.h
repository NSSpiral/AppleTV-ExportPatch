/* Runtime dump - ATVListTemplateController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVAppEventDelegate.h>

@protocol ATVAppViewController;

@class ATVFeedElement, ATVListTemplateView, BRControl, BRListControl, BRViewController;
@interface ATVListTemplateController : ATVAppEventDelegate <ATVAppViewController>
{
    BRViewController * _parentController;
    IKAudioElement * _audioElement;
    ATVListTemplateView * _listTemplateView;
    id _imageHeaderControl;
    id _listHeaderControl;
    id _listControl;
    id _contentHeaderControl;
    id _contentControl;
    IKListElement * _list;
    NSIndexPath * _selectedIndexPath;
}

@property (retain, nonatomic) IKAudioElement * audioElement;
@property (retain, nonatomic) ATVListTemplateView * listTemplateView;
@property (retain, nonatomic) id imageHeaderControl;
@property (retain, nonatomic) id listHeaderControl;
@property (retain, nonatomic) id listControl;
@property (retain, nonatomic) id contentHeaderControl;
@property (retain, nonatomic) id contentControl;
@property (retain, nonatomic) IKListElement * list;
@property (retain, nonatomic) NSIndexPath * selectedIndexPath;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) BRViewController * parentController;

- (void)setAudioElement:(IKAudioElement *)arg0;
- (IKAudioElement *)audioElement;
- (IKAudioElement *)backgroundAudio;
- (void)loadWithCompletion:(id /* block */)arg0;
- (void)updateWithViewElement:(ATVFeedElement *)arg0 forceRefresh:(char)arg1;
- (void)setListControl:(BRControl *)arg0;
- (ATVListTemplateView *)listTemplateView;
- (BRControl *)imageHeaderControl;
- (void)setImageHeaderControl:(BRControl *)arg0;
- (BRControl *)listHeaderControl;
- (void)setListHeaderControl:(BRControl *)arg0;
- (BRListControl *)listControl;
- (void)_updateContentViewWithListView:(IKListElement *)arg0;
- (BRControl *)contentControl;
- (void)setContentControl:(BRControl *)arg0;
- (BRControl *)contentHeaderControl;
- (void)setContentHeaderControl:(BRControl *)arg0;
- (char)_handleDefaultActionForAppEvent:(unsigned int)arg0 withControl:(BRControl *)arg1;
- (void)setListTemplateView:(ATVListTemplateView *)arg0;
- (void)setSelectedIndexPath:(NSIndexPath *)arg0;
- (NSIndexPath *)selectedIndexPath;
- (ATVListTemplateController *)init;
- (BRControl *)view;
- (void).cxx_destruct;
- (void)setList:(IKListElement *)arg0;
- (IKListElement *)list;
- (void)setParentController:(BRViewController *)arg0;
- (BRViewController *)parentController;

@end
