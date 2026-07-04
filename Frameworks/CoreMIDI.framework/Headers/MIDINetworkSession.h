/* Runtime dump - MIDINetworkSession
 * Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDINetworkSession : NSObject
{
    struct _MIDINetworkSessionImpl * _impl;
}

@property (nonatomic) char enabled;
@property (readonly, nonatomic) unsigned int networkPort;
@property (readonly, nonatomic) NSString * networkName;
@property (readonly, nonatomic) NSString * localName;
@property (nonatomic) unsigned int connectionPolicy;

+ (MIDINetworkSession *)defaultSession;

- (char)removeConnection:(NSURLConnection *)arg0;
- (char)addConnection:(NSURLConnection *)arg0;
- (NSArray *)contacts;
- (NSArray *)connections;
- (void)setStateToEntity;
- (void)updateFromEntity;
- (void)refreshBonjourName;
- (char)addOrRemoveConnection:(NSURLConnection *)arg0 add:(char)arg1;
- (unsigned int)networkPort;
- (char)addContact:(CNContact *)arg0;
- (char)removeContact:(CNContact *)arg0;
- (void)sessionChanged;
- (void)contactsChanged;
- (struct OpaqueMIDIEndpoint *)sourceEndpoint;
- (struct OpaqueMIDIEndpoint *)destinationEndpoint;
- (void)dealloc;
- (MIDINetworkSession *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (NSString *)localName;
- (NSString *)networkName;
- (unsigned int)connectionPolicy;
- (void)setConnectionPolicy:(unsigned int)arg0;

@end
