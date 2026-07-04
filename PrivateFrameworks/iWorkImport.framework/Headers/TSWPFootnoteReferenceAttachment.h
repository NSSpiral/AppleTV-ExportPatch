/* Runtime dump - TSWPFootnoteReferenceAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment
{
    TSWPStorage * _containedStorage;
    NSString * _customMarkString;
}

@property (retain, nonatomic) TSWPStorage * containedStorage;
@property (retain, nonatomic) NSString * customMarkString;

- (TSWPFootnoteReferenceAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (TSWPStorage *)containedStorage;
- (int)elementKind;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (id)stringEquivalent;
- (NSString *)customMarkString;
- (unsigned int)findCharIndex;
- (NSNumber *)objectsForStyleMigrating;
- (char)supportsUUID;
- (void)setContainedStorage:(TSWPStorage *)arg0;
- (struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg0;
- (char)shouldArchiveStringEquivalent;
- (TSWPFootnoteReferenceAttachment *)initWithContext:(NSObject *)arg0 wpStorage:(TSPObject *)arg1;
- (void)applyMark;
- (void)setCustomMarkString:(NSString *)arg0;
- (void)setContainedStorageParentInfoToStorage:(id)arg0;
- (void)checkDebug;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (TSWPFootnoteReferenceAttachment *)initWithContext:(TSPObjectContext *)arg0;
- (char)isSearchable;

@end
