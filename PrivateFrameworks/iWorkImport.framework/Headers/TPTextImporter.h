/* Runtime dump - TPTextImporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextImporter : NSObject <TSKImporter>
{
    NSURL * mURL;
    TSUProgressContext * mProgressContext;
}

@property (retain) TSUProgressContext * progressContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)importToDocumentRoot:(NSObject *)arg0 delegate:(NSObject *)arg1 error:(id *)arg2;
- (NSString *)initialTemplateName;
- (char)stylesheetUpdatesRequired;
- (char)importStartsWithThemeOnly;
- (void)cancel;
- (void)dealloc;
- (TPTextImporter *)initWithURL:(NSString *)arg0;
- (void)setURL:(NSString *)arg0;
- (void)setProgressContext:(TSUProgressContext *)arg0;
- (TSUProgressContext *)progressContext;
- (void)quit;

@end
