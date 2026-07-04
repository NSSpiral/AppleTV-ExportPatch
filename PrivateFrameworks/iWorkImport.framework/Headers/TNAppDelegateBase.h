/* Runtime dump - TNAppDelegateBase
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNAppDelegateBase : TSABaseApplicationDelegate

@property (readonly, nonatomic) NSArray * excelDocumentTypes;

- (NSString *)nativeDocumentType;
- (NSString *)templateDocumentType;
- (NSString *)templateSFFDocumentType;
- (NSString *)tangierEditingFormatDocumentType;
- (NSString *)nativeSFFDocumentType;
- (NSArray *)importableDocumentTypes;
- (NSLocale *)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg0;
- (Class)documentRootClass;
- (id)appChartPropertyOverrides;
- (NSObject *)createCompatibilityDelegate;
- (NSString *)documentTypeDisplayName;
- (NSString *)templateTypeDisplayName;
- (char)supportsRTL;
- (void)registerClassTypeMappings;
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
- (void)configureSharedCode;
- (NSArray *)excelDocumentTypes;
- (Class)documentViewControllerClass;
- (id)image32IconForTXTFiles;
- (NSString *)defaultAppStoreURLString;
- (TNAppDelegateBase *)init;
- (void)applicationDidFinishLaunching:(id)arg0;
- (NSString *)applicationName;

@end
