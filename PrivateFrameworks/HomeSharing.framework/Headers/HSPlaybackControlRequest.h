/* Runtime dump - HSPlaybackControlRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlaybackControlRequest : HSRequest
{
    int _controlCommand;
    unsigned int _interfaceID;
}

@property (readonly, nonatomic) int controlCommand;
@property (readonly, nonatomic) unsigned int interfaceID;

- (unsigned int)interfaceID;
- (HSPlaybackControlRequest *)initWithInterfaceID:(unsigned int)arg0 controlCommand:(int)arg1;
- (int)controlCommand;

@end
