/* Runtime dump - ODDDiagram
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDDiagram : OADDrawable
{
    ODDNodePoint * mDocumentPoint;
    ODDColorTransform * mColorTransform;
    ODDStyleDefinition * mStyleDefinition;
}

- (void)dealloc;
- (ODDDiagram *)init;
- (NSString *)description;
- (NSObject *)documentPoint;
- (NSObject *)styleDefinition;
- (NSString *)colorTransform;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (void)setDocumentPoint:(NSObject *)arg0;

@end
