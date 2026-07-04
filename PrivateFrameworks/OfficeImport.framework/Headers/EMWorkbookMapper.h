/* Runtime dump - EMWorkbookMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMWorkbookMapper : CMMapper <CMMapperRoot>
{
    unsigned int mRealSheetCount;
    int mWidth;
    int mHeight;
    EDWorkbook * edWorkbook;
    NSMutableArray * mWorksheetUrls;
    NSMutableArray * mWorksheetNames;
    NSMutableArray * mWorksheetGuids;
    NSString * mResourceUrlPrefix;
    NSString * mResourceUrlProtocol;
    NSString * mStyleSheetGuid;
    CMArchiveManager * mArchiver;
    NSString * mFileName;
    unsigned int mSheetIndex;
    BOOL mIsFirstMappedSheet;
    BOOL mIsFrameset;
    OIXMLDocument * mXhtmlDoc;
    OIXMLElement * mBodyElement;
    OIXMLDocument * mTabBarDoc;
    NSString * mTabBarURL;
    NSMutableArray * mSheetURLs;
    float mTabPosition;
    unsigned int mNumberOfMappedSheets;
    char mHasPushedHeader;
    char mHasPushedFirstSheet;
    char mLoadingMessageVisible;
}

+ (NSCache *)borderStyleCache;
+ (float *)borderWidthCache;
+ (NSCache *)cssStyleCache;

- (NSString *)fileName;
- (void)dealloc;
- (CMArchiveManager *)archiver;
- (OADBlip *)blipAtIndex:(unsigned int)arg0;
- (struct CGSize)pageSizeForDevice;
- (NSString *)documentTitle;
- (OADStyleMatrix *)styleMatrix;
- (void)startMappingWithState:(NSObject *)arg0;
- (void)mapElement:(NSObject *)arg0 atIndex:(unsigned int)arg1 withState:(NSObject *)arg2 isLastElement:(char)arg3;
- (void)finishMappingWithState:(NSObject *)arg0;
- (EDWorkbook *)workbook;
- (EMWorkbookMapper *)initWithEDWorkbook:(EDWorkbook *)arg0 archiver:(NSObject *)arg1;
- (char)hasMultipleSheets;
- (void)mapBodyStyleAt:(id)arg0;
- (NSObject *)copySheetMapperWithEdSheet:(NSObject *)arg0;
- (NSObject *)_copyStringForSheet:(NSObject *)arg0 atIndex:(unsigned int)arg1 withState:(NSObject *)arg2 andMapper:(NSObject *)arg3;
- (id)_frontPageByCopyingMainPage;
- (void)_pushTabForSheet:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (id)_mainPageBack;
- (BOOL)isMultiPage;
- (void)setFileName:(NSString *)arg0;

@end
