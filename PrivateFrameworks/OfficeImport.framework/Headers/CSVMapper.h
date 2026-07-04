/* Runtime dump - CSVMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CSVMapper : CMMapper
{
    CMArchiveManager * mArchiver;
    NSMutableArray * mRows;
    NSString * mFileName;
    unsigned int mColumnCount;
    struct CGSize mPageSize;
}

- (void)dealloc;
- (void).cxx_construct;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (CSVMapper *)initWithRows:(NSArray *)arg0 fileName:(NSString *)arg1 columnCount:(unsigned int)arg2 archiver:(NSObject *)arg3;
- (struct CGSize)pageSize;

@end
