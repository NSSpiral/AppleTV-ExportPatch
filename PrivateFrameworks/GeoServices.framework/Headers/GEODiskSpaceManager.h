/* Runtime dump - GEODiskSpaceManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODiskSpaceManager : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _freeableClaims;
}

+ (GEODiskSpaceManager *)sharedManager;

- (void)dealloc;
- (GEODiskSpaceManager *)init;
- (unsigned long long)getFreeableSpace;
- (unsigned long long)freeDiskSpaceBy:(unsigned long long)arg0;

@end
