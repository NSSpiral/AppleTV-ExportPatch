/* Runtime dump - TSDCommentStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCommentStorage : TSPObject <TSPCopying>
{
    NSString * mText;
    NSDate * mCreationDate;
    TSKAnnotationAuthor * mAuthor;
}

@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSDate * creationDate;
@property (retain, nonatomic) TSKAnnotationAuthor * author;

- (TSDCommentStorage *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct CommentStorageArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct CommentStorageArchive *)arg0 unarchiver:(struct CommentStorageArchive)arg1;
- (void)commentWillBeAddedToDocumentRoot;
- (TSDCommentStorage *)initWithContext:(NSObject *)arg0 text:(NSString *)arg1 creationDate:(NSDate *)arg2 author:(TSKAnnotationAuthor *)arg3;
- (TSDCommentStorage *)initWithContext:(NSObject *)arg0 author:(TSKAnnotationAuthor *)arg1;
- (void)appendText:(NSString *)arg0;
- (NSString *)creationDateString;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDCommentStorage *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (TSDCommentStorage *)initWithContext:(TSPObjectContext *)arg0;
- (NSDate *)creationDate;
- (void)setAuthor:(TSKAnnotationAuthor *)arg0;
- (TSKAnnotationAuthor *)author;
- (void)setCreationDate:(NSDate *)arg0;

@end
