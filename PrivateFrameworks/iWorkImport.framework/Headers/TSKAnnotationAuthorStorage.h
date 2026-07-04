/* Runtime dump - TSKAnnotationAuthorStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnnotationAuthorStorage : TSPObject
{
    NSMutableSet * mAuthors;
}

@property (readonly, nonatomic) NSSet * authors;

- (NSString *)packageLocator;
- (TSKAnnotationAuthorStorage *)initFromUnarchiver:(NSObject *)arg0;
- (char)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)authorWithName:(NSString *)arg0;
- (void)p_addAuthor:(id)arg0 isFromDocumentSupport:(char)arg1;
- (int)p_hashCodeForColorKey:(NSString *)arg0;
- (int)indexForColorKey:(NSString *)arg0 usedColors:(id)arg1;
- (void)removeAuthor:(WDCitationAuthor *)arg0;
- (UIColor *)nextAuthorColor;
- (NSString *)currentAuthorColorWithAuthorName:(NSString *)arg0;
- (void)didAddAuthorRelationshipToDocument;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)dealloc;
- (NSString *)description;
- (NSSet *)authors;
- (void)addAuthor:(WDCitationAuthor *)arg0;

@end
