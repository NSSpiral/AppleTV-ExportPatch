/* Runtime dump - CKDKeyValueDiskCache
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDKeyValueDiskCache : NSObject
{
    PQLConnection * _db;
    NSString * _identifier;
    CKDClientContext * _context;
    double _expirationTimeout;
}

@property (nonatomic) double expirationTimeout;
@property (retain, nonatomic) PQLConnection * db;
@property (retain, nonatomic) NSString * identifier;
@property (weak, nonatomic) CKDClientContext * context;

- (void)dealloc;
- (NSString *)identifier;
- (CKDClientContext *)context;
- (void)setIdentifier:(NSString *)arg0;
- (void)setContext:(CKDClientContext *)arg0;
- (void).cxx_destruct;
- (PQLConnection *)db;
- (void)setExpirationTimeout:(double)arg0;
- (CKDKeyValueDiskCache *)initWithIdentifier:(NSString *)arg0 context:(CKDClientContext *)arg1;
- (char)setupCacheWithError:(id *)arg0;
- (NSString *)dbPath;
- (void)_garbageCollectExpiredEntries;
- (double)expirationTimeout;
- (long)expirationTimeoutAsTime;
- (void)removeCachedValueForKey:(NSString *)arg0;
- (void)deleteCachedValuesBecauseOfLowDisk;
- (void)setCachedValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)cachedValueForKey:(NSString *)arg0;
- (void)setDb:(PQLConnection *)arg0;

@end
