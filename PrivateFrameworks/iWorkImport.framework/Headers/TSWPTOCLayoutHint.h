/* Runtime dump - TSWPTOCLayoutHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCLayoutHint : NSObject <TSDHint>
{
    struct _NSRange _charRange;
}

@property (readonly, nonatomic) struct _NSRange charRange;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)archivedHintClass;

- (void)saveToArchive:(struct TOCLayoutHintArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPTOCLayoutHint *)initWithArchive:(struct TOCLayoutHintArchive *)arg0 unarchiver:(struct TOCLayoutHintArchive)arg1;
- (char)overlapsWithSelection:(id)arg0;
- (void)offsetByDelta:(int)arg0;
- (<TSDHint> *)firstChildHint;
- (<TSDHint> *)lastChildHint;
- (id)copyForArchiving;
- (char)isFirstHint;
- (struct _NSRange)charRange;
- (void).cxx_construct;
- (TSWPTOCLayoutHint *)initWithRange:(struct _NSRange)arg0;

@end
