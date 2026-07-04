/* Runtime dump - MPRadioController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioController : NSObject <MPClientRadioController>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _connection;
    char _isRadioAvailable;
}

@property (readonly, nonatomic) char radioAvailable;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_setRadioAvailable:(char)arg0;
- (void)clientRadioControllerRadioAvailabilityDidChange:(char)arg0;
- (void)clientRadioControllerRecentStationsDidChange;
- (char)isRadioAvailable;
- (void)getRecentStationGroupsWithCompletionHandler:(id /* block */)arg0;
- (void)dealloc;
- (MPRadioController *)init;
- (void).cxx_destruct;
- (NSXPCConnection *)_connection;

@end
