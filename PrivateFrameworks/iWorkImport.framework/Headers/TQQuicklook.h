/* Runtime dump - TQQuicklook
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TQQuicklook : NSObject
{
    NSString * mPath;
    TSACirrusDocument * mDocument;
    TSABaseApplicationDelegate * mBaseAppDelegate;
    TSUTemporaryDirectory * mTemporaryDirectory;
    NSString * mPassphrase;
    <TSKRenderingExporter> * mExporter;
}

+ (void)loadAssetColorMap;
+ (void)unloadAssetColorMap;
+ (NSArray *)tsuColorFromColorArray:(NSArray *)arg0;

- (TQQuicklook *)initWithPath:(NSString *)arg0 passphrase:(NSString *)arg1;
- (id)newPDFPreviewAndClose;
- (NSNumber *)newPDFForPageNumber:(unsigned int)arg0;
- (NSNumber *)sheetNameForPageNumber:(unsigned int)arg0 isForm:(char *)arg1;
- (Class)appDelegateClass;
- (char)writePreviewToOutput:(NSObject *)arg0 pageNumber:(unsigned int)arg1;
- (struct __CFString *)getIdentifierForApp:(id)arg0;
- (void)dealloc;
- (void)close;
- (unsigned int)pageCount;
- (char)load;
- (UIImage *)thumbnail;

@end
