/* Runtime dump - QLPreviewConverter
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewConverter : NSObject
{
    QLPreviewParts * _previewParts;
    NSDictionary * _options;
}

@property (readonly, nonatomic) NSString * previewFileName;
@property (readonly, nonatomic) NSString * previewUTI;
@property (readonly, nonatomic) NSURLRequest * previewRequest;
@property (readonly, nonatomic) NSURLResponse * previewResponse;
@property (readonly, nonatomic) QLPreviewParts * previewParts;

+ (QLPreviewConverter *)_officeUTIs;
+ (QLPreviewConverter *)_iWorkUTIs;
+ (QLPreviewConverter *)_csvUTIs;
+ (QLPreviewConverter *)_lpdfUTIs;
+ (QLPreviewConverter *)_rtfUTIs;
+ (QLPreviewConverter *)_spreadSheetUTIs;
+ (char)canConvertDocumentType:(NSObject *)arg0;
+ (char)isSafeURL:(NSURL *)arg0;
+ (char)isOfficeDocumentType:(NSObject *)arg0;
+ (char)isIWorkDocumentType:(NSObject *)arg0;
+ (char)isCSVDocumentType:(NSObject *)arg0;
+ (char)isLPDFDocumentType:(NSObject *)arg0;
+ (char)isRTFDocumentType:(NSObject *)arg0;
+ (char)isSpreadSheetDocumentType:(NSObject *)arg0;
+ (char)isSafeRequest:(NSURLRequest *)arg0;

- (char)isComputed;
- (void)setHtmlErrorDisabled:(char)arg0;
- (char)htmlErrorDisabled;
- (QLPreviewConverter *)initWithURL:(NSString *)arg0 uti:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)_register;
- (QLPreviewParts *)previewParts;
- (void)cancel;
- (void)dealloc;
- (char)isCancelled;
- (void)appendData:(NSData *)arg0;
- (NSString *)previewUTI;
- (QLPreviewConverter *)initWithData:(NSData *)arg0 name:(NSString *)arg1 uti:(NSString *)arg2 options:(NSDictionary *)arg3;
- (NSURLRequest *)previewRequest;
- (NSURLRequest *)safeRequestForRequest:(NSURLRequest *)arg0;
- (QLPreviewConverter *)initWithConnection:(NSURLConnection *)arg0 delegate:(NSObject *)arg1 response:(NSURLResponse *)arg2 options:(NSDictionary *)arg3;
- (NSURLResponse *)previewResponse;
- (void)appendDataArray:(NSArray *)arg0;
- (void)finishedAppendingData;
- (void)finishConverting;
- (NSString *)previewFileName;

@end
