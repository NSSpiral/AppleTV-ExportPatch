/* Runtime dump - TNSheetSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNSheetSelection : TSKSelection
{
    char mIsPaginated;
    TNSheet * mSheet;
}

@property (readonly, retain, nonatomic) TNSheet * sheet;
@property (readonly, nonatomic) char paginated;

+ (Class)archivedSelectionClass;
+ (NSObject *)selectionForSheet:(NSObject *)arg0 paginated:(char)arg1;

- (char)isPaginated;
- (TNSheetSelection *)initWithSheet:(TNSheet *)arg0 paginated:(char)arg1;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TNSheetSelection *)copyWithZone:(struct _NSZone *)arg0;
- (TNSheet *)sheet;

@end
