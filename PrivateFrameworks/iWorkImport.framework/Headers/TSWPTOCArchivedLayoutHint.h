/* Runtime dump - TSWPTOCArchivedLayoutHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSWPTOCLayoutHint * _hint;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) <TSDHint> * hint;

- (TSWPTOCArchivedLayoutHint *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSWPTOCArchivedLayoutHint *)initWithContext:(NSObject *)arg0 hint:(<TSDHint> *)arg1;
- (void)setHint:(<TSDHint> *)arg0;
- (void)dealloc;
- (<TSDHint> *)hint;

@end
