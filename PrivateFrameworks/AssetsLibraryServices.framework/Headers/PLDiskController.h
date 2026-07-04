/* Runtime dump - PLDiskController
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLDiskController : NSObject
{
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct ? _flags;
}

+ (PLDiskController *)sharedInstance;
+ (long long)diskSpaceAvailableForUse;
+ (long long)freeDiskSpaceThreshold;

- (void)dealloc;
- (PLDiskController *)init;
- (void)_actuallyUpdateCookie;
- (void)_updateCookie;
- (void)_diskSpaceDidBecomeLow;
- (char)hasEnoughDiskToTakePicture;
- (long long)bytesToAutomaticallyClear;
- (void)updateAvailableDiskSpace;

@end
