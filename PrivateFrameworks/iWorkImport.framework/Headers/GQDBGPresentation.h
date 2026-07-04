/* Runtime dump - GQDBGPresentation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGPresentation : GQDRoot
{
    struct __CFArray * mThemes;
    struct CGSize mSlideSize;
}

+ (NSString *)parseNumberOutOfBasename:(id)arg0 returningNumber:(int *)arg1;
+ (struct _xmlNs *)appNamespace;
+ (void)initialize;

- (void)loadAppBundleResourceToColorMap;
- (struct __CFString *)createUpgradedAppBundleResourcePath:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1;
- (void)addTheme:(TSSTheme *)arg0;
- (NSObject *)colorForMissingAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1 fileUrl:(struct __CFURL *)arg2;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg0;
- (void)dealloc;
- (GQDBGPresentation *)init;
- (void).cxx_construct;
- (struct CGSize)slideSize;
- (struct __CFArray *)themes;

@end
