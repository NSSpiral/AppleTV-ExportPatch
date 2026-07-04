/* Runtime dump - PSLegalMessagePane
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate>
{
    UIWebView * _webView;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (PSLegalMessagePane *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)webView:(UIWebView *)arg0 shouldStartLoadWithRequest:(NSURLRequest *)arg1 navigationType:(int)arg2;
- (NSString *)markupString;
- (char)shouldInsetContent;
- (void)layoutInsetContent:(struct CGRect)arg0;
- (void)viewDidBecomeVisible;
- (char)handlesDoneButton;
- (id)scrollViewToBeInsetted;
- (NSObject *)htmlFileLocation;

@end
