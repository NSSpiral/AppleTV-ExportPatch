/* Runtime dump - TSABaseApplicationDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSABaseApplicationDelegate : TSKApplicationDelegate
{
    TSADocumentRoot * mDocumentRoot;
    <TSADownloadDelegate> * _downloadDelegate;
}

@property (nonatomic) TSADocumentRoot * documentRoot;
@property (readonly, nonatomic) NSString * nativeDocumentType;
@property (readonly, nonatomic) NSString * nativeDocumentExtension;
@property (readonly, nonatomic) NSString * templateDocumentType;
@property (readonly, nonatomic) NSString * templateSFFDocumentType;
@property (readonly, nonatomic) NSString * templateDocumentExtension;
@property (readonly, nonatomic) NSString * tangierEditingFormatDocumentType;
@property (readonly, nonatomic) NSString * nativeSFFDocumentType;
@property (readonly, nonatomic) NSArray * readableDocumentTypes;
@property (readonly, nonatomic) NSArray * importableDocumentTypes;
@property (readonly, nonatomic) NSArray * applicationTemplateVariants;
@property (retain, nonatomic) <TSADownloadDelegate> * downloadDelegate;
@property (readonly, nonatomic) NSString * collaboratorPersonID;

+ (void)resetSharedConfigurations;
+ (TSABaseApplicationDelegate *)sharedDelegate;

- (void)registerDefaults;
- (NSString *)nativeDocumentType;
- (NSString *)templateDocumentType;
- (NSString *)templateSFFDocumentType;
- (NSString *)tangierEditingFormatDocumentType;
- (NSString *)nativeSFFDocumentType;
- (NSArray *)importableDocumentTypes;
- (NSArray *)readableDocumentTypes;
- (NSLocale *)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg0;
- (id)invalidURLSchemes;
- (NSObject *)iCloudPreferencesForDocumentShareID:(NSObject *)arg0;
- (NSString *)collaboratorPersonIDKey;
- (NSString *)stringForICloudPreferenceKey:(NSString *)arg0 defaultValueGenerator:(id)arg1;
- (NSString *)collaboratorPersonID;
- (NSArray *)iCloudPreferenceKeys;
- (NSString *)keyPathForICloudPreferenceKey:(NSString *)arg0;
- (NSString *)documentPreferenceKeyPrefix;
- (NSObject *)iCloudDocumentPreferenceKeyForDocumentShareID:(NSObject *)arg0 isMatchingKey:(char *)arg1;
- (NSString *)iWorkAuthorName;
- (Class)documentRootClass;
- (void)wakeUpDownloadManager;
- (void)persistenceError:(NSError *)arg0;
- (NSString *)nativeDocumentExtension;
- (NSString *)templateDocumentExtension;
- (char)isReadableDocumentType:(NSObject *)arg0;
- (NSArray *)applicationTemplateVariants;
- (float)mimimumAspectRatioForPreviewImage;
- (float)maximumAspectRatioForPreviewImage;
- (char)URLIsValidForImportedHyperlink:(NSURL *)arg0;
- (NSString *)existingNestedDocumentPathForPath:(NSString *)arg0;
- (char)shouldShowLogMenu;
- (void)registerICloudPreferences;
- (NSObject *)collaboratorNameForDocumentShareID:(NSObject *)arg0;
- (void)setICloudPreferences:(id)arg0 forDocumentShareID:(NSObject *)arg1;
- (void)setIWorkAuthorName:(NSString *)arg0;
- (char)hasIWorkAuthorName;
- (unsigned int)iWorkAuthorColorIndex;
- (void)setIWorkAuthorColorIndex:(unsigned int)arg0;
- (TSABaseApplicationDelegate *)init;
- (char)openURL:(NSURL *)arg0;
- (void)setDownloadDelegate:(<TSADownloadDelegate> *)arg0;
- (TSADocumentRoot *)documentRoot;
- (void)setDocumentRoot:(TSADocumentRoot *)arg0;
- (<TSADownloadDelegate> *)downloadDelegate;
- (void)ubiquitousKeyValueStoreDidChange:(NSDictionary *)arg0;

@end
