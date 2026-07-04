/* Runtime dump - ATVMusicStorePresentsProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRTitleProvider;

@class BRMediaType;
@interface ATVMusicStorePresentsProvider : NSObject <BRTitleProvider>
{
    NSString * _requestID;
    BRMediaType * _mediaType;
    NSURL * _url;
    NSURL * _fallbackURL;
    NSDictionary * _catalogCollection;
    char _storeLoadInProgress;
    double _lastStoreLoadTime;
    char _storeRestricted;
    NSString * _title;
    unsigned int _collectionNumber;
    unsigned int _fallbackCollectionNumber;
    char _usingFallback;
    NSString * _URLKey;
    char _fallBackEnabled;
    unsigned int _primaryRetryCount;
    char _requiresStoreAccount;
    char _needsUpdateData;
    ATVDataType * _redownloadMediaType;
    NSMutableArray * _items;
    double _minimumReloadInterval;
}

@property ATVDataType * redownloadMediaType;
@property (nonatomic) char requiresStoreAccount;
@property (nonatomic) double minimumReloadInterval;
@property (readonly, nonatomic) char needsUpdateData;
@property (retain, nonatomic) NSMutableArray * items;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)storeMainMenuPresentsURLKey;
+ (NSObject *)providerWithMediaType:(BRMediaType *)arg0 URLKey:(NSString *)arg1 forID:(NSObject *)arg2 fallBack:(char)arg3;

- (void)_parentalControlAccessChanged:(NSNotification *)arg0;
- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (void)_redownloadAcquired:(id)arg0;
- (ATVMusicStorePresentsProvider *)initWithMediaType:(BRMediaType *)arg0 URLKey:(NSString *)arg1 forID:(NSObject *)arg2 fallBack:(char)arg3;
- (ATVMusicStorePresentsProvider *)initWithMediaType:(BRMediaType *)arg0 URLKey:(NSString *)arg1 forID:(NSObject *)arg2 fallBack:(char)arg3 requiresStoreAccount:(char)arg4;
- (void)setRequiresStoreAccount:(char)arg0;
- (void)_resetStoreData;
- (void)reloadStoreData:(char)arg0;
- (double)minimumReloadInterval;
- (char)_okToFetchNewData;
- (void)_loadStoreDataFromURL:(NSURL *)arg0;
- (void)_accountChanged:(NSNotification *)arg0;
- (char)needsUpdateData;
- (void)_clearStoreData;
- (void)setNeedsUpdateData;
- (void)_supplementalResponseReceived:(id)arg0 redirectURL:(NSURL *)arg1;
- (void)_parseCatalogCollection:(id)arg0;
- (char)requiresStoreAccount;
- (void)reloadStoreData;
- (ATVDataType *)redownloadMediaType;
- (void)setRedownloadMediaType:(ATVDataType *)arg0;
- (void)setMinimumReloadInterval:(double)arg0;
- (void)dealloc;
- (NSString *)title;
- (NSMutableArray *)items;
- (void)setItems:(NSMutableArray *)arg0;
- (void)_setTitle:(NSString *)arg0;
- (char)isLoading;
- (void)_networkChanged:(NSNotification *)arg0;
- (NSObject *)dataAtIndex:(long)arg0;

@end
