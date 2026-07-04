/* Runtime dump - MPAVDestinationBrowser
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVDestinationBrowser : NSObject
{
    MPAVRoutingController * _routingController;
    char _scansForDestinationsWhenEnteringForeground;
    char _isScanning;
}

@property (nonatomic) char scansForDestinationsWhenEnteringForeground;

- (void)_beginScanningForDestinationsNotification:(NSNotification *)arg0;
- (void)_endScanningForDestinationsNotification:(NSNotification *)arg0;
- (void)setScansForDestinationsWhenEnteringForeground:(char)arg0;
- (void)endScanningForDestinations;
- (void)beginScanningForDestinations;
- (char)scansForDestinationsWhenEnteringForeground;
- (void)dealloc;
- (MPAVDestinationBrowser *)init;
- (void).cxx_destruct;

@end
