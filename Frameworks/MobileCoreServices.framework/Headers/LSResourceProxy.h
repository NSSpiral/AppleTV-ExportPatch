/* Runtime dump - LSResourceProxy
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSResourceProxy : NSObject
{
    NSString * _localizedName;
    NSString * _boundApplicationIdentifier;
    NSURL * _boundContainerURL;
    NSURL * _boundDataContainerURL;
    NSURL * _boundResourcesDirURL;
    NSDictionary * _boundIconsDictionary;
    NSString * _boundIconCacheKey;
    NSArray * _boundIconFileNames;
    LSApplicationProxy * _typeOwner;
    char _boundIconIsPrerendered;
    char _boundIconIsBadge;
}

@property (readonly, nonatomic) NSString * localizedName;
@property (readonly, nonatomic) char boundIconIsBadge;
@property (readonly, nonatomic) NSDictionary * iconsDictionary;

+ (int)_compareApplicationIconCanvasSize:(struct CGSize)arg0 withSize:(struct CGSize)arg1;
+ (struct CGSize)_applicationIconCanvasSize;

- (struct ? *)_iconDefinitionForSize:(SEL)arg0 style:(struct CGSize)arg1;
- (struct ? *)_iconVariantDefinitions:(SEL)arg0;
- (struct CGSize)_largestImageSize:(NSObject *)arg0;
- (struct CGSize)_defaultStyleSize:(NSObject *)arg0;
- (NSObject *)_iconForStyle:(NSObject *)arg0 size:(struct CGSize)arg1;
- (NSObject *)_iconForStyle:(NSObject *)arg0;
- (void)setBoundApplicationIdentifier:(NSString *)arg0;
- (void)setBoundContainerURL:(NSURL *)arg0;
- (void)setBoundDataContainerURL:(NSURL *)arg0;
- (void)setBoundResourcesDirectoryURL:(NSURL *)arg0;
- (void)setBoundIconsDictionary:(NSDictionary *)arg0;
- (void)setBoundIconCacheKey:(NSString *)arg0;
- (void)setBoundIconFileNames:(NSArray *)arg0;
- (void)setTypeOwner:(LSApplicationProxy *)arg0;
- (void)setBoundIconIsPrerendered:(char)arg0;
- (void)setBoundIconIsBadge:(char)arg0;
- (NSString *)_initWithLocalizedName:(NSString *)arg0 boundApplicationIdentifier:(NSString *)arg1 boundContainerURL:(NSURL *)arg2 dataContainerURL:(NSURL *)arg3 boundResourcesDirectoryURL:(NSURL *)arg4 boundIconsDictionary:(NSDictionary *)arg5 boundIconCacheKey:(NSString *)arg6 boundIconFileNames:(NSArray *)arg7 typeOwner:(LSApplicationProxy *)arg8 boundIconIsPrerendered:(char)arg9 boundIconIsBadge:(char)arg10;
- (NSDictionary *)boundIconsDictionary;
- (LSApplicationProxy *)typeOwner;
- (NSURL *)boundResourcesDirectoryURL;
- (NSString *)boundApplicationIdentifier;
- (NSURL *)boundContainerURL;
- (NSString *)iconStyleDomain;
- (NSString *)boundIconCacheKey;
- (char)boundIconIsPrerendered;
- (NSArray *)boundIconFileNames;
- (NSURL *)boundDataContainerURL;
- (NSString *)_initWithLocalizedName:(NSString *)arg0;
- (NSDictionary *)iconsDictionary;
- (void)dealloc;
- (id)iconDataForVariant:(int)arg0;
- (NSString *)localizedName;
- (char)boundIconIsBadge;
- (NSObject *)iconDataForStyle:(NSObject *)arg0 width:(int)arg1 height:(int)arg2 options:(unsigned int)arg3;
- (void)setLocalizedName:(NSString *)arg0;

@end
