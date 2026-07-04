/* Runtime dump - PSAboutHTMLSheetViewController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)presentAboutSheetTitled:(id)arg0 HTMLContent:(NSObject *)arg1 fromViewController:(BRController *)arg2;

- (void)dealloc;
- (void)loadView;
- (char)webView:(NSObject *)arg0 shouldStartLoadWithRequest:(NSURLRequest *)arg1 navigationType:(int)arg2;
- (void)viewDidBecomeVisible;
- (void)donePressed;
- (void)setHTMLContent:(NSObject *)arg0 isFragment:(char)arg1;

@end
