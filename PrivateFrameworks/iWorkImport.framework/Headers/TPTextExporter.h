/* Runtime dump - TPTextExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextExporter : NSObject <TSKExporter>
{
    TPDocumentRoot * mDocumentRoot;
    char mIsCancelled;
    TSUProgressContext * mProgressContext;
}

@property (retain) TSUProgressContext * progressContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TPTextExporter *)initWithDocumentRoot:(NSObject *)arg0;
- (char)exportToURL:(NSURL *)arg0 delegate:(NSObject *)arg1 error:(id *)arg2;
- (void)cancel;
- (void)dealloc;
- (char)isCancelled;
- (void)setup;
- (void)setProgressContext:(TSUProgressContext *)arg0;
- (TSUProgressContext *)progressContext;
- (void)quit;

@end
