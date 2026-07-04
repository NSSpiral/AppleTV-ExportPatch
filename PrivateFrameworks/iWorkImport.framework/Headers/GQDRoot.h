/* Runtime dump - GQDRoot
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRoot : NSObject
{
    struct __CFDictionary * mUidToObjectMap;
    char mAppBundleColorMapLoaded;
    struct __CFDictionary * mAppBundleResourceToColorMap;
    char mAppBundleResourcesUrlInitialized;
    struct __CFURL * mAppBundleResourcesUrl;
    char mIsOldAssetNameMapInitialized;
    struct __CFDictionary * mOldAssetNameMap;
    int mAppBundleVersion;
    unsigned long long mDocVersion;
}

+ (struct _xmlNs *)appNamespace;

- (char *)addIdentifiedObject:(SEL)arg0 fromCurrentNode:(NSObject *)arg1;
- (id)objectWithXmlUid:(char *)arg0;
- (char)addObject:(struct objc_method *)arg0 withOwnedXmlUid:(char *)arg1;
- (void)forgetAboutObject:(NSObject *)arg0 withXmlUid:(char *)arg1;
- (void)loadAppBundleResourceToColorMap;
- (struct __CFURL *)appBundleResourcesUrl:(struct __CFURL *)arg0;
- (char)appBundleCanProcessCurrentDocVersion;
- (NSObject *)colorForMissingAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1 fileUrl:(struct __CFURL *)arg2;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg0;
- (char)readDocumentVersion:(struct _xmlTextReader *)arg0 isTooNew:(char *)arg1;
- (unsigned int)documentReleaseVersion;
- (char)includeStyleWithIdentifier:(char *)arg0 parentIdentifier:(char *)arg1 uid:(char *)arg2;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg0 processorBundle:(struct __CFBundle *)arg1 fileExists:(char *)arg2 fileUrl:(struct __CFURL *)arg3;
- (char)readDocumentVersion:(struct _xmlTextReader *)arg0;
- (void)dealloc;
- (GQDRoot *)init;
- (NSString *)uuid;
- (Class)classForName:(char *)arg0;

@end
