/* Runtime dump - ATVAssetGroup
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAssetGroup : NSObject
{
    char _prunePolicyLRU;
    int _groupType;
    NSString * _cachePath;
    unsigned int _maxCacheSize;
    unsigned int _pruneCount;
    unsigned int _currentCacheSize;
    NSMutableDictionary * _cacheRecords;
}

@property (nonatomic) int groupType;
@property (retain, nonatomic) NSString * cachePath;
@property (nonatomic) unsigned int maxCacheSize;
@property (nonatomic) unsigned int pruneCount;
@property (nonatomic) char prunePolicyLRU;
@property (nonatomic) unsigned int currentCacheSize;
@property (retain, nonatomic) NSMutableDictionary * cacheRecords;

- (void).cxx_destruct;
- (ATVAssetGroup *)initWithGroupType:(int)arg0 baseCachePath:(NSString *)arg1 folderName:(NSString *)arg2 maxCacheSize:(unsigned int)arg3 purgeOnLoad:(char)arg4;
- (NSString *)assetInfoForKey:(NSString *)arg0 queue:(NSObject *)arg1;
- (void)removeAssetInfoForKey:(NSString *)arg0 queue:(NSObject *)arg1;
- (void)setAssetInfo:(NSDictionary *)arg0 forKey:(NSString *)arg1 queue:(NSObject *)arg2;
- (NSString *)cachePath;
- (int)groupType;
- (void)setCachePath:(NSString *)arg0;
- (void)setGroupType:(int)arg0;
- (void)_removeAssetInfoForKey:(NSString *)arg0;
- (unsigned int)maxCacheSize;
- (void)setMaxCacheSize:(unsigned int)arg0;
- (unsigned int)pruneCount;
- (void)setPruneCount:(unsigned int)arg0;
- (char)prunePolicyLRU;
- (void)setPrunePolicyLRU:(char)arg0;
- (unsigned int)currentCacheSize;
- (void)setCurrentCacheSize:(unsigned int)arg0;
- (NSMutableDictionary *)cacheRecords;
- (void)setCacheRecords:(NSMutableDictionary *)arg0;

@end
