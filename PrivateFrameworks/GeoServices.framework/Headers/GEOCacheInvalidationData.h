/* Runtime dump - GEOCacheInvalidationData
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheInvalidationData : NSObject
{
    double _timestamp;
    double _ttl;
    unsigned int _version;
    NSArray * _versionDomains;
}

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double ttl;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSArray * versionDomains;

- (void)dealloc;
- (double)timestamp;
- (unsigned int)version;
- (double)ttl;
- (NSArray *)versionDomains;
- (GEOCacheInvalidationData *)initWithTimestamp:(double)arg0 ttl:(double)arg1 version:(unsigned int)arg2 domains:(NSArray *)arg3;

@end
