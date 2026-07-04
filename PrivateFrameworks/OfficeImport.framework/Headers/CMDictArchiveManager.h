/* Runtime dump - CMDictArchiveManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDictArchiveManager : CMArchiveManager
{
    NSMutableString * mCssString;
    NSMutableDictionary * mStyleCache;
    NSMutableDictionary * mResources;
    NSString * mPrefix;
    NSString * mResourceUrlProtocol;
    NSMutableString * mMainHtml;
    NSString * mName;
    BOOL mIsFrameset;
}

- (void)dealloc;
- (NSString *)name;
- (void)pushText:(NSString *)arg0 toPath:(NSString *)arg1;
- (void)pushCssToPath:(NSString *)arg0;
- (NSString *)copyResourceWithName:(NSString *)arg0;
- (void)pushData:(NSData *)arg0 toPath:(NSString *)arg1;
- (NSObject *)addCssStyle:(NSObject *)arg0;
- (unsigned int)resourceCount;
- (void)addCssStyle:(NSObject *)arg0 withName:(NSString *)arg1;
- (NSString *)cssStylesheetString;
- (CMDictArchiveManager *)initWithName:(NSString *)arg0 resourcePathPrefix:(NSString *)arg1;
- (void)setIsFrameset;
- (id)copyDictionaryWithSizeInfos:(char)arg0;
- (NSObject *)resourceUrlProtocol;

@end
