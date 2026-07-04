/* Runtime dump - TPAppDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPAppDelegate : TSABaseApplicationDelegate
{
    char _appDoneLaunching;
    char _cachedBidiIsSupported;
}

@property (readonly, nonatomic) NSArray * wordDocumentTypes;

+ (TPAppDelegate *)sharedDelegate;

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
- (char)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (char)textInspectorShowsMoreSubpane;
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
- (void)p_localeChanged:(NSNotification *)arg0;
- (NSArray *)wordDocumentTypes;
- (void)dealloc;
- (TPAppDelegate *)init;
- (NSString *)applicationName;

@end
