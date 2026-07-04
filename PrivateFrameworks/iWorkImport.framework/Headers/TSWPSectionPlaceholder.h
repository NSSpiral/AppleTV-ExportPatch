/* Runtime dump - TSWPSectionPlaceholder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection>
{
    TSWPStorage * _parentStorage;
}

+ (char)needsObjectUUID;

- (TSWPSectionPlaceholder *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (TSWPStorage *)parentStorage;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(NSObject *)arg0;
- (NSObject *)pageMasterOwningModel:(NSObject *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (TSWPSectionPlaceholder *)initWithContext:(TSPObjectContext *)arg0;

@end
