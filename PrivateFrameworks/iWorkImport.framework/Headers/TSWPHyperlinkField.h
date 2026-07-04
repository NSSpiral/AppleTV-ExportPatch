/* Runtime dump - TSWPHyperlinkField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHyperlinkField : TSWPSmartField
{
    NSURL * _url;
}

@property (retain, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSString * displayText;

+ (TSWPHyperlinkField *)defaultFieldStyleIdentifier;
+ (char)schemeIsValidForURL:(NSURL *)arg0;
+ (char)schemeIsValidForURLReference:(NSObject *)arg0;
+ (TSWPHyperlinkField *)defaultURLFromDefaultsKey:(NSString *)arg0 defaultValue:(NSString *)arg1;
+ (TSWPHyperlinkField *)defaultFileURL;
+ (TSWPHyperlinkField *)defaultMailURL;
+ (NSObject *)newURLFromURLReference:(NSObject *)arg0;
+ (NSURL *)urlReferenceFromURL:(NSURL *)arg0;
+ (int)schemeFromURL:(NSURL *)arg0;
+ (TSWPHyperlinkField *)defaultWebURL;
+ (NSString *)urlWithEmailAddress:(NSString *)arg0 subject:(SBFSubject *)arg1;

- (TSWPHyperlinkField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct HyperlinkFieldArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPHyperlinkField *)initWithContext:(NSObject *)arg0 url:(NSURL *)arg1;
- (void)loadFromArchive:(struct HyperlinkFieldArchive *)arg0 unarchiver:(struct HyperlinkFieldArchive)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (int)smartFieldKind;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0 storage:(TSWPStorage *)arg1;
- (NSObject *)urlReference;
- (void)setURLReference:(NSObject *)arg0;
- (void)p_performHyperlinkSelector:(SEL)arg0 onStorage:(NSStorage *)arg1;
- (NSString *)urlPrefix;
- (char)hasDisplayText;
- (NSString *)displayText;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSURL *)url;
- (int)scheme;
- (char)isFileURL;
- (void)setURL:(NSString *)arg0;
- (char)allowsEditing;
- (NSString *)filePath;
- (NSString *)fullPath;

@end
