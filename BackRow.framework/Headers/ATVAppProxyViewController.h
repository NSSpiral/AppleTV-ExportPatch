/* Runtime dump - ATVAppProxyViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVAppViewController;

@class BRControl, BRViewController;
@interface ATVAppProxyViewController : NSObject <ATVAppViewController>
{
    BRViewController * _parentController;
    BRControl * _proxyView;
}

@property (readonly, retain, nonatomic) BRControl * proxyView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) BRViewController * parentController;

- (IKAudioElement *)backgroundAudio;
- (void)loadWithCompletion:(id /* block */)arg0;
- (BRControl *)proxyView;
- (BRControl *)view;
- (ATVAppProxyViewController *)initWithView:(WKContentView *)arg0;
- (void).cxx_destruct;
- (void)setParentController:(BRViewController *)arg0;
- (BRViewController *)parentController;

@end
