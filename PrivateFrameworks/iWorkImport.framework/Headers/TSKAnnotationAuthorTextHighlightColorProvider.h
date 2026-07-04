/* Runtime dump - TSKAnnotationAuthorTextHighlightColorProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject <TSKCGColorProvider>
{
    TSKAnnotationAuthor * mAnnotationAuthor;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSKAnnotationAuthorTextHighlightColorProvider *)initWithAnnotationAuthor:(TSKAnnotationAuthor *)arg0;
- (void)dealloc;
- (struct CGColor *)cgColor;

@end
