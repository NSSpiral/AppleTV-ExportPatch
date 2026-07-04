/* Runtime dump - MKTileOverlayRequester
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlayRequester : GEOTileRequester
{
    char _cancelled;
    NSMutableArray * _waiting;
    NSMutableSet * _running;
    NSMutableArray * _errors;
}

+ (unsigned int)registerOverlay:(NSObject *)arg0;
+ (void)unregisterOverlay:(unsigned int)arg0;
+ (unsigned char)tileProviderIdentifier;

- (void)cancel;
- (void)dealloc;
- (void)_cleanup;
- (void)start;
- (char)isRunning;
- (void).cxx_destruct;
- (void)_doWorkOrFinish;
- (void)_operationFailed:(id)arg0 error:(NSError *)arg1;
- (void)_operationFinished:(id)arg0;

@end
