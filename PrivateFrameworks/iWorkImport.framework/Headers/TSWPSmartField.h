/* Runtime dump - TSWPSmartField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying>
{
    TSWPStorage * _parentStorage;
    unsigned int _lastTableIndex;
}

@property (nonatomic) TSWPStorage * parentStorage;
@property (readonly, nonatomic) int attributeArrayKind;
@property (readonly, nonatomic) int styleAttributeArrayKind;
@property (readonly, nonatomic) struct _NSRange range;

+ (TSWPSmartField *)defaultFieldStyleIdentifier;
+ (TSWPSmartField *)allocWithZone:(struct _NSZone *)arg0;

- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct SmartFieldArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct SmartFieldArchive *)arg0 unarchiver:(struct SmartFieldArchive)arg1;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (int)smartFieldKind;
- (int)styleAttributeArrayKind;
- (TSWPStorage *)parentStorage;
- (char)canCopy:(struct _NSRange)arg0;
- (int)attributeArrayKind;
- (char)allowsPasteAsSmartField;
- (void)dealloc;
- (NSString *)text;
- (TSWPSmartField *)initWithContext:(TSPObjectContext *)arg0;
- (struct _NSRange)range;
- (char)allowsEditing;

@end
