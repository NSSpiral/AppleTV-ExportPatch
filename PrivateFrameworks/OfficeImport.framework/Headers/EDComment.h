/* Runtime dump - EDComment
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDComment : NSObject
{
    char _visible;
    int _rowIndex;
    int _columnIndex;
    EDString * _author;
}

@property (nonatomic) int rowIndex;
@property (nonatomic) int columnIndex;
@property (retain, nonatomic) EDString * author;
@property (nonatomic) char visible;

- (void)dealloc;
- (void)setVisible:(char)arg0;
- (int)rowIndex;
- (char)visible;
- (void)setRowIndex:(int)arg0;
- (void)setAuthor:(EDString *)arg0;
- (EDString *)author;
- (void)setColumnIndex:(int)arg0;
- (int)columnIndex;

@end
