/* Runtime dump - BRCZonePurgeOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZonePurgeOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCPrivateServerZone * _serverZone;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCZonePurgeOperation *)initWithServerZone:(BRCPrivateServerZone *)arg0;

@end
