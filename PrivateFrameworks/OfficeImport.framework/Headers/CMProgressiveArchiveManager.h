/* Runtime dump - CMProgressiveArchiveManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMProgressiveArchiveManager : CMArchiveManager
{
    void * mClient;
    struct ? * mCallBacks;
    NSMutableDictionary * mDataCache;
    NSMutableDictionary * mStyleCache;
    NSMutableString * mCssString;
    char mMainDataInited;
    NSDate * mStartDate;
    NSDate * mLastCommitDate;
    NSMutableString * mHtmlLogString;
}

- (void)dealloc;
- (char)isCancelled;
- (void)pushText:(NSString *)arg0 toPath:(NSString *)arg1;
- (void)pushCssToPath:(NSString *)arg0;
- (void)commitDataAtPath:(NSString *)arg0;
- (void)closeResourceAtPath:(NSString *)arg0;
- (NSString *)copyResourceWithName:(NSString *)arg0;
- (void)pushData:(NSData *)arg0 toPath:(NSString *)arg1;
- (NSObject *)addCssStyle:(NSObject *)arg0;
- (void)addCssStyle:(NSObject *)arg0 withName:(NSString *)arg1;
- (NSString *)cssStylesheetString;
- (char)isProgressive;
- (CMProgressiveArchiveManager *)initWithClient:(void *)arg0 andCallBacks:(void)arg1;

@end
