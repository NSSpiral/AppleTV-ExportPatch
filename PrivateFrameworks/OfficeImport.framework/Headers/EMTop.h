/* Runtime dump - EMTop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMTop : CMTop <OIProgressiveReaderDelegate>
{
    CMArchiveManager * _archiver;
    EMState * _state;
    EMWorkbookMapper * _mapper;
    NSString * _inFileName;
    char _xml;
}

+ (void)fillHTMLArchiveForExcelFile:(NSString *)arg0 xmlFlag:(char)arg1 archiver:(CMArchiveManager *)arg2;
+ (void)fillHTMLArchiveForExcelData:(NSData *)arg0 fileName:(NSString *)arg1 xmlFlag:(char)arg2 archiver:(CMArchiveManager *)arg3;

- (void)dealloc;
- (void)readFile:(NSString *)arg0 xmlFlag:(char)arg1 archiver:(CMArchiveManager *)arg2;
- (void)readData:(NSData *)arg0 fileName:(NSString *)arg1 xmlFlag:(char)arg2 archiver:(CMArchiveManager *)arg3;
- (void)_streamWorkbook:(id)arg0;
- (void)readFile:(NSString *)arg0 orData:(NSData *)arg1 withDataFileName:(NSString *)arg2 xmlFlag:(char)arg3 archiver:(CMArchiveManager *)arg4;
- (void)readerDidStartDocument:(NSObject *)arg0 withElementCount:(int)arg1;
- (void)readerDidReadElement:(NSObject *)arg0 atIndex:(unsigned int)arg1 inDocument:(char)arg2 isLastElement:(char)arg3;
- (void)readerDidEndDocument:(NSObject *)arg0;

@end
