/* Runtime dump - WKPreferences
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPreferences : NSObject
{
    struct RefPtr<WebKit::WebPreferences> _preferences;
}

@property (nonatomic) char _telephoneNumberDetectionIsEnabled;
@property (nonatomic) int _storageBlockingPolicy;
@property (nonatomic) char _compositingBordersVisible;
@property (nonatomic) char _compositingRepaintCountersVisible;
@property (nonatomic) char _tiledScrollingIndicatorVisible;
@property (nonatomic) char _offlineApplicationCacheIsEnabled;
@property (nonatomic) float minimumFontSize;
@property (nonatomic) char javaScriptEnabled;
@property (nonatomic) char javaScriptCanOpenWindowsAutomatically;

- (WKPreferences *)init;
- (void)setMinimumFontSize:(float)arg0;
- (float)minimumFontSize;
- (void)setJavaScriptEnabled:(char)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)javaScriptEnabled;
- (char)javaScriptCanOpenWindowsAutomatically;
- (void)setJavaScriptCanOpenWindowsAutomatically:(char)arg0;
- (char)_telephoneNumberDetectionIsEnabled;
- (void)_setTelephoneNumberDetectionIsEnabled:(char)arg0;
- (int)_storageBlockingPolicy;
- (void)_setStorageBlockingPolicy:(int)arg0;
- (char)_offlineApplicationCacheIsEnabled;
- (void)_setOfflineApplicationCacheIsEnabled:(char)arg0;
- (char)_compositingBordersVisible;
- (void)_setCompositingBordersVisible:(char)arg0;
- (char)_compositingRepaintCountersVisible;
- (void)_setCompositingRepaintCountersVisible:(char)arg0;
- (char)_tiledScrollingIndicatorVisible;
- (void)_setTiledScrollingIndicatorVisible:(char)arg0;

@end
