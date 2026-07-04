/* Runtime dump - GQDLSDocument
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDLSDocument : GQDRoot
{
    GQDSStylesheet * mStylesheet;
}

+ (struct _xmlNs *)appNamespace;

- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1 fileUrl:(struct __CFURL *)arg2;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg0;
- (struct __CFString *)createUpgradedAppBundleResourcePath:(struct __CFString *)arg0;
- (void)dealloc;
- (VKStylesheet *)stylesheet;
- (void)setStylesheet:(TSSStylesheet *)arg0;

@end
