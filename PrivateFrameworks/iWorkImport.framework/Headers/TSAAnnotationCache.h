/* Runtime dump - TSAAnnotationCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAAnnotationCache : TSPObject
{
    NSArray * _annotations;
}

@property (copy, nonatomic) NSArray * annotations;

- (TSAAnnotationCache *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct AnnotationCacheArchive *)arg0 archiver:(NSObject *)arg1;
- (void)documentDidLoad;
- (void)loadFromArchive:(struct AnnotationCacheArchive *)arg0 unarchiver:(struct AnnotationCacheArchive)arg1;
- (void)documentWillUnload;
- (NSArray *)annotations;
- (void)dealloc;
- (TSAAnnotationCache *)init;
- (void)setAnnotations:(NSArray *)arg0;

@end
