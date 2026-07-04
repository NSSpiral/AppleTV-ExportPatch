/* Runtime dump - MIDINetworkConnection
 * Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDINetworkConnection : NSObject
{
    struct _MIDINetworkConnectionImpl * _impl;
}

@property (readonly, retain, nonatomic) MIDINetworkHost * host;

+ (NSString *)connectionWithHost:(MIDINetworkHost *)arg0;

- (void)dealloc;
- (MIDINetworkConnection *)init;
- (MIDINetworkHost *)host;

@end
