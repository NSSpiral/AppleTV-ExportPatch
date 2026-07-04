/* Runtime dump - TSKDocumentSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDocumentSelection : TSKSelection
{
    TSKDocumentRoot * mDocumentRoot;
}

@property (readonly, nonatomic) TSKDocumentRoot * documentRoot;

+ (Class)archivedSelectionClass;

- (TSKDocumentSelection *)initWithDocumentRoot:(TSKDocumentRoot *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSKDocumentRoot *)documentRoot;

@end
