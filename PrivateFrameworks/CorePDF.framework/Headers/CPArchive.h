/* Runtime dump - CPArchive
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPArchive : NSObject <CPDisposable>
{
    struct __CFArray * selections;
    struct __CFArray * imageNodes;
    NSMutableString * plainText;
    NSMutableString * htmlString;
    NSMutableString * htmlStringNoImages;
    NSData * webArchiveData;
}

- (void)dealloc;
- (CPArchive *)init;
- (void)dispose;
- (void)addSelection:(struct CGPDFSelection *)arg0;
- (NSMutableString *)plainText;
- (NSString *)html;
- (NSData *)webArchiveData;
- (void)finalize;

@end
