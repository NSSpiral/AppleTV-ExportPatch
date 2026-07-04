/* Runtime dump - PSQuotaInfo
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSQuotaInfo : NSObject
{
    NSMutableDictionary * _mediaKindDict;
    unsigned long long _totalStorage;
    unsigned long long _usedStorage;
}

@property (nonatomic) unsigned long long totalStorage;
@property (nonatomic) unsigned long long usedStorage;

- (void)dealloc;
- (PSQuotaInfo *)init;
- (unsigned int)storageInUseForMediaKind:(int)arg0;
- (unsigned long long)totalStorage;
- (unsigned long long)usedStorage;
- (void)setStorageInUse:(unsigned int)arg0 forMediaKind:(int)arg1;
- (void)setTotalStorage:(unsigned long long)arg0;
- (void)setUsedStorage:(unsigned long long)arg0;

@end
