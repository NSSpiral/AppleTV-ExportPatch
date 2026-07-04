/* Runtime dump - ATVAppDocumentController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol IKAppDocumentDelegate;

@class ATVAppBackgroundPlayer, ATVAppInfo, BRControl;
@interface ATVAppDocumentController : BRViewController <IKAppDocumentDelegate>
{
    char _viewNeedsRefresh;
    char _viewNeedsLoad;
    IKAppDocument * _appDocument;
    id _templateControl;
    ATVAppBackgroundPlayer * _bgPlayer;
    IKAudioElement * _backgroundAudio;
    ATVAppInfo * _appInfo;
    <ATVAppViewController> * _viewController;
}

@property (readonly, retain, nonatomic) IKAppDocument * appDocument;
@property (retain, nonatomic) id templateControl;
@property (readonly, weak, nonatomic) ATVAppBackgroundPlayer * bgPlayer;
@property (retain, nonatomic) IKAudioElement * backgroundAudio;
@property (retain, nonatomic) ATVAppInfo * appInfo;
@property (retain, nonatomic) <ATVAppViewController> * viewController;
@property (nonatomic) char viewNeedsRefresh;
@property (nonatomic) char viewNeedsLoad;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (ATVAppBackgroundPlayer *)bgPlayer;
- (ATVAppDocumentController *)initWithAppInfo:(ATVAppInfo *)arg0 appDocument:(IKAppDocument *)arg1 bgPlayer:(ATVAppBackgroundPlayer *)arg2;
- (void)controlWasActivated;
- (IKAudioElement *)backgroundAudio;
- (void)wasBuried;
- (void)wasExhumed;
- (void)_handleWindowMaxBoundsChanged;
- (void)_updateFromAppDocument;
- (BRControl *)templateControl;
- (char)viewNeedsRefresh;
- (void)setViewNeedsRefresh:(char)arg0;
- (void)_configureWithUpdate:(char)arg0;
- (void)setViewNeedsLoad:(char)arg0;
- (void)setTemplateControl:(BRControl *)arg0;
- (char)viewNeedsLoad;
- (NSError *)_alertViewWithError:(NSError *)arg0;
- (void)setBackgroundAudio:(IKAudioElement *)arg0;
- (void)setAppInfo:(ATVAppInfo *)arg0;
- (void)setViewController:(<ATVAppViewController> *)arg0;
- (<ATVAppViewController> *)viewController;
- (void).cxx_destruct;
- (ATVAppInfo *)appInfo;
- (void)documentNeedsUpdate:(IKAppDocument *)arg0;
- (void)documentDidUpdate:(IKAppDocument *)arg0;
- (IKAppDocument *)appDocument;

@end
