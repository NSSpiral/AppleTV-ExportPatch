/* Runtime dump - GEOUserSession
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSession : NSObject
{
    struct ? _sessionID;
    double _sessionCreationTime;
    unsigned int _sequenceNumber;
    struct ? _usageCollectionSessionID;
    double _usageSessionIDGenerationTime;
    char _shareSessionWithMaps;
    GEOUserSessionEntity * _mapsUserSessionEntity;
    NSLock * _lock;
}

@property char shareSessionWithMaps;
@property (retain, nonatomic) GEOUserSessionEntity * mapsUserSessionEntity;
@property (readonly) struct ? usageCollectionSessionID;

+ (GEOUserSession *)sharedInstance;
+ (void)setIsGeod;

- (void)dealloc;
- (GEOUserSession *)init;
- (GEOUserSessionEntity *)mapsUserSessionEntity;
- (NSString *)_defaultForKey:(NSString *)arg0;
- (void)_renewUsageCollectionSessionID;
- (void)_updateWithNewUUIDForSessionID:(struct ? *)arg0;
- (void)_setDefault:(id)arg0 forKey:(NSString *)arg1;
- (void)_resetSessionID;
- (void)_updateSessionID;
- (void)_mapsSessionEntityWithCallback:(id /* block */)arg0;
- (void)_safe_renewUsageCollectionSessionID;
- (void)mapsSessionEntityWithCallback:(id /* block */)arg0 shareSessionIDWithMaps:(/* block */ id)arg1 resetSession:(char)arg2;
- (struct ?)usageCollectionSessionID;
- (void)setMapsUserSessionEntity:(GEOUserSessionEntity *)arg0;
- (void)setSharedMapsUserSessionEntity:(NSObject *)arg0 shareSessionIDWithMaps:(char)arg1;
- (char)shareSessionWithMaps;
- (void)setShareSessionWithMaps:(char)arg0;

@end
