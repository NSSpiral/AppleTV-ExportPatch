/* Runtime dump - PMTop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTop : CMTop <OIProgressiveReaderDelegate>
{
    CMArchiveManager * _archiver;
    PMState * _state;
    PMPresentationMapper * _mapper;
    char _xml;
}

+ (void)fillHTMLArchiveForPowerPointFrom:(NSObject *)arg0 inMemory:(char)arg1 xmlFlag:(char)arg2 archiver:(CMArchiveManager *)arg3;
+ (void)fillHTMLArchiveForPowerPointFile:(NSString *)arg0 xmlFlag:(char)arg1 archiver:(CMArchiveManager *)arg2;
+ (void)fillHTMLArchiveForPowerPointData:(NSData *)arg0 fileName:(NSString *)arg1 xmlFlag:(char)arg2 archiver:(CMArchiveManager *)arg3;

- (void)dealloc;
- (char)isCancelled;
- (void)readFile:(NSString *)arg0 xmlFlag:(char)arg1 archiver:(CMArchiveManager *)arg2;
- (void)readData:(NSData *)arg0 fileName:(NSString *)arg1 xmlFlag:(char)arg2 archiver:(CMArchiveManager *)arg3;
- (void)readerDidStartDocument:(NSObject *)arg0 withElementCount:(int)arg1;
- (void)readerDidReadElement:(NSObject *)arg0 atIndex:(unsigned int)arg1 inDocument:(char)arg2 isLastElement:(char)arg3;
- (void)readerDidEndDocument:(NSObject *)arg0;
- (void)readFrom:(NSObject *)arg0 inMemory:(char)arg1 xmlFlag:(char)arg2 archiver:(CMArchiveManager *)arg3;

@end
