/* Runtime dump - CMArchiveManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMArchiveManager : NSObject <TCCancelDelegate>
{
    char mIsThumbnail;
    char mIsOnPhone;
    unsigned int mPageCount;
    NSString * mPassphrase;
    NSMutableDictionary * mDrawableCache;
    NSString * mResourcePathPrefix;
    NSMutableSet * mPausedPaths;
    int mHeight;
    int mWidth;
    float mCommitInterval;
    char mAutoCommit;
    NSCache * mStyleObjectCache;
}

@property (copy) NSString * passphrase;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CMArchiveManager *)resourceTypeToExtension:(int)arg0;
+ (int)blipTypeToResourceType:(int)arg0;
+ (NSString *)resourceTypeToMIME:(int)arg0;

- (void)dealloc;
- (CMArchiveManager *)init;
- (char)isCancelled;
- (unsigned int)pageCount;
- (void)setPageCount:(unsigned int)arg0;
- (void)setHTMLWidth:(int)arg0;
- (void)setHTMLHeight:(int)arg0;
- (void)pushText:(NSString *)arg0 toPath:(NSString *)arg1;
- (void)pushCssToPath:(NSString *)arg0;
- (void)commitDataAtPath:(NSString *)arg0;
- (void)closeResourceAtPath:(NSString *)arg0;
- (char)isOnPhone;
- (char)progressiveMappingIsPausedOnPath:(NSString *)arg0;
- (void)pauseProgressiveMappingOnPath:(NSString *)arg0;
- (void)restartProgressiveMappingOnPath:(NSString *)arg0;
- (void)setIsOnPhone:(char)arg0;
- (char)isThumbnail;
- (void)setIsThumbnail:(char)arg0;
- (NSString *)copyResourceWithName:(NSString *)arg0;
- (NSObject *)copyResourceWithType:(int)arg0;
- (void)pushData:(NSData *)arg0 toPath:(NSString *)arg1;
- (NSObject *)addResource:(NSObject *)arg0 withType:(int)arg1;
- (NSObject *)addCssStyle:(NSObject *)arg0;
- (void)setCommitInterval:(float)arg0;
- (void)setAutoCommit:(char)arg0;
- (NSData *)_validateData:(NSData *)arg0 withType:(int *)arg1;
- (NSObject *)addResource:(NSObject *)arg0 withName:(NSString *)arg1;
- (id)addResourceForDrawable:(id)arg0 withType:(int)arg1 drawable:(TSDDrawableInfo *)arg2;
- (id)cachedPathForDrawable:(id)arg0;
- (unsigned int)resourceCount;
- (void)addCssStyle:(NSObject *)arg0 withName:(NSString *)arg1;
- (NSString *)cssStylesheetString;
- (void)setResourcePathPrefix:(NSString *)arg0;
- (NSString *)resourcePathPrefix;
- (NSString *)appendResourcePathToName:(NSString *)arg0;
- (char)isProgressive;
- (NSString *)passphrase;
- (void)setPassphrase:(NSString *)arg0;
- (NSObject *)addStyle:(struct __CFString *)arg0;

@end
