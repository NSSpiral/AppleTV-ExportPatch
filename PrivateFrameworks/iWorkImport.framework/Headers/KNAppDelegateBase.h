/* Runtime dump - KNAppDelegateBase
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAppDelegateBase : TSABaseApplicationDelegate
{
    char _cachedBidiIsSupported;
}

@property (readonly, nonatomic) NSArray * powerPointDocumentTypes;

- (NSString *)nativeDocumentType;
- (NSString *)templateDocumentType;
- (NSString *)templateSFFDocumentType;
- (NSString *)tangierEditingFormatDocumentType;
- (NSString *)nativeSFFDocumentType;
- (NSArray *)importableDocumentTypes;
- (NSLocale *)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg0;
- (id)invalidURLSchemes;
- (Class)documentRootClass;
- (float)mimimumAspectRatioForPreviewImage;
- (float)maximumAspectRatioForPreviewImage;
- (char)URLIsValidForImportedHyperlink:(NSURL *)arg0;
- (id)appChartPropertyOverrides;
- (char)supportsShrinkTextToFit;
- (NSObject *)createCompatibilityDelegate;
- (NSString *)documentTypeDisplayName;
- (NSString *)templateTypeDisplayName;
- (char)supportsRTL;
- (NSURL *)defaultHyperlinkURL;
- (void)registerClassTypeMappings;
- (void)registerAllowedElementKinds;
- (NSArray *)powerPointDocumentTypes;
- (void)p_inputMethodsChanged:(NSNotification *)arg0;
- (NSObject *)previewImageNameForDocumentType:(NSObject *)arg0;
- (NSObject *)previewImageNameForNativeDocument;
- (NSObject *)previewImageNameForEncryptedNativeDocument;
- (NSString *)stringForCollaboratorConflict;
- (NSObject *)stringForUpdatingDocument;
- (NSString *)stringForCollaboratorConflictDetails;
- (NSString *)stringForCollaboratorConflictWithKeepDetails;
- (NSObject *)stringForCloseDocument;
- (NSString *)stringForDocumentUpdatedTitle;
- (NSString *)stringForDocumentUpdated;
- (NSObject *)stringForDocumentUpdatedByOwner;
- (NSString *)stringForRemoteVersionRestorationAlertMessage;
- (NSString *)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (NSString *)stringForCollaboratorsBlockedWhileOffline;
- (void)applicationDidFinishLaunching;
- (KNAppDelegateBase *)init;
- (NSString *)applicationName;

@end
