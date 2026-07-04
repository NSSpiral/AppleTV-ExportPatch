/* Runtime dump - TSAAnnotationReference
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAAnnotationReference : TSPObject
{
    <TSKAnnotation> * _annotation;
    unsigned int _pageIndex;
}

@property (retain, nonatomic) <TSKAnnotation> * annotation;
@property (nonatomic) unsigned int pageIndex;

+ (NSString *)referenceWithObjectContext:(TSPObjectContext *)arg0 annotation:(<TSKAnnotation> *)arg1 searchReference:(NSObject *)arg2 pageIndex:(unsigned int)arg3;

- (TSAAnnotationReference *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct AnnotationReferenceArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct AnnotationReferenceArchive *)arg0 unarchiver:(struct AnnotationReferenceArchive)arg1;
- (char)referencesAnnotation:(NSObject *)arg0;
- (void)dealloc;
- (<TSKAnnotation> *)annotation;
- (void)setAnnotation:(<TSKAnnotation> *)arg0;
- (unsigned int)pageIndex;
- (void)setPageIndex:(unsigned int)arg0;

@end
