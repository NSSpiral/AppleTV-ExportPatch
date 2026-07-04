/* Runtime dump - TSAApplicationTemplateInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAApplicationTemplateInfo : TSATemplateInfo <NSCopying>
{
    NSString * _name;
    NSString * _documentVariant;
    NSString * _previewVariant;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * documentVariant;
@property (readonly, nonatomic) NSString * previewVariant;
@property (readonly, nonatomic) NSURL * documentContainerURL;
@property (readonly, nonatomic) int downloadState;
@property (readonly, nonatomic) NSURL * templateZipURL;
@property (readonly, nonatomic) NSURL * downloadedDocumentContainerURL;
@property (readonly, nonatomic) NSBundle * previewBundle;
@property (readonly, nonatomic) NSURL * bundledDocumentContainerURL;

+ (NSURL *)documentURLWithDocumentContainerURL:(NSURL *)arg0 variant:(struct CGSize)arg1;
+ (NSURL *)localizationBundleForDocumentContainerURL:(NSURL *)arg0;
+ (NSURL *)bundledDocumentContainerDirectoryURL;
+ (NSURL *)downloadedDocumentContainerDirectoryURL;
+ (NSString *)templateZipURLForTemplateName:(NSString *)arg0;
+ (NSURL *)localizationBundleForDocumentURL:(NSURL *)arg0;
+ (void)setBundledDocumentContainerDirectoryURL:(NSURL *)arg0;

- (TSAApplicationTemplateInfo *)initHeadlessWithName:(NSString *)arg0;
- (TSAApplicationTemplateInfo *)initHeadlessWithName:(NSString *)arg0 variant:(unsigned int)arg1;
- (NSBundle *)localizationBundle;
- (TSAApplicationTemplateInfo *)initWithDisplayName:(NSString *)arg0 name:(NSString *)arg1 documentVariant:(NSString *)arg2 previewVariant:(NSString *)arg3;
- (NSString *)documentVariant;
- (NSBundle *)previewBundle;
- (NSURL *)documentContainerURL;
- (NSURL *)documentURLWithDocumentContainerURL:(NSURL *)arg0;
- (NSURL *)templateZipURL;
- (NSURL *)bundledDocumentContainerURL;
- (NSURL *)downloadedDocumentContainerURL;
- (TSAApplicationTemplateInfo *)initWithPropertyList:(NSArray *)arg0 documentVariant:(NSString *)arg1 previewVariant:(NSString *)arg2;
- (NSString *)makeIdentifier;
- (NSURL *)previewImageURL;
- (TSAApplicationTemplateInfo *)initHeadlessWithName:(NSString *)arg0 variant:(unsigned int)arg1 locale:(struct __CFLocale *)arg2;
- (int)downloadState;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (TSAApplicationTemplateInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)documentURL;
- (NSString *)previewVariant;
- (char)isAvailable;

@end
