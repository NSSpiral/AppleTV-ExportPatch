/* Runtime dump - GQDSLPublication
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDSLPublication : GQDRoot
{
    struct CGSize mPageSize;
    GQDSLPageMargins * mPageMargins;
    GQDSStylesheet * mStylesheet;
    char mHasBody;
    char mIsOldTemplateNameMapInitialized;
    struct __CFDictionary * mOldTemplateNameMap;
    char mShowOutliner;
    char mHasHeaders;
    char mHasFooters;
}

+ (struct _xmlNs *)appNamespace;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1 fileUrl:(struct __CFURL *)arg2;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg0;
- (void)setPageMargins:(GQDSLPageMargins *)arg0;
- (struct __CFString *)createFixedPathForOldAppBundleResourcePath:(struct __CFString *)arg0;
- (GQDSLPageMargins *)pageMargins;
- (char)hasBody;
- (char)showOutliner;
- (char)hasHeaders;
- (char)hasFooters;
- (struct __CFArray *)createUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray *)arg0;
- (struct __CFString *)createUpgradedPathForOldAssetPath:(struct __CFString *)arg0;
- (void)dealloc;
- (GQDSLPublication *)init;
- (void).cxx_construct;
- (struct CGSize)pageSize;
- (VKStylesheet *)stylesheet;
- (void)setStylesheet:(TSSStylesheet *)arg0;

@end
