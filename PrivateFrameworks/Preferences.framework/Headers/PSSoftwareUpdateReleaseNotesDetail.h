/* Runtime dump - PSSoftwareUpdateReleaseNotesDetail
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate>
{
    NSString * _releaseNotes;
}

@property (retain, nonatomic) NSString * releaseNotes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PSSoftwareUpdateReleaseNotesDetail *)init;
- (void)loadView;
- (char)webView:(NSObject *)arg0 shouldStartLoadWithRequest:(NSURLRequest *)arg1 navigationType:(int)arg2;
- (NSArray *)specifiers;
- (void)setReleaseNotes:(NSString *)arg0;
- (NSString *)releaseNotes;

@end
