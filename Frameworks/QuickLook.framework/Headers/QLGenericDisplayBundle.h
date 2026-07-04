/* Runtime dump - QLGenericDisplayBundle
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLGenericDisplayBundle : QLDisplayBundle <QLGenericViewDelegate>
{
    QLGenericView * _airplayView;
    NSError * _error;
}

@property (retain) NSError * error;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)loadWithHints:(NSDictionary *)arg0;
- (QLGenericView *)airplayView;
- (void)setupAirPlayView;
- (void)discardAirPlayView;
- (void)genericViewDidClickOnArchiveButton:(id)arg0;
- (NSString *)subtitleWithDescription:(NSString *)arg0 fileSize:(unsigned long long)arg1;
- (void)_loadPreviewItemInfos;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;
- (void)loadView;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end
