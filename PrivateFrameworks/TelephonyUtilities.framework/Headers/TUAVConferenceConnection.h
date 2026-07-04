/* Runtime dump - TUAVConferenceConnection
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAVConferenceConnection : NSObject
{
    char _host;
    char _receivedDidStart;
    NSString * _identifier;
    id _didStartHandler;
    id _didStopHandler;
}

@property (copy, nonatomic) NSString * identifier;
@property (nonatomic) char host;
@property (nonatomic) char receivedDidStart;
@property (copy, nonatomic) id didStartHandler;
@property (copy, nonatomic) id didStopHandler;

+ (NSString *)conferenceConnectionWithIdentifier:(NSString *)arg0 host:(char)arg1;

- (char)isHost;
- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void)setHost:(char)arg0;
- (id /* block */)didStartHandler;
- (void)setDidStartHandler:(id /* block */)arg0;
- (void)setDidStopHandler:(id /* block */)arg0;
- (void)setReceivedDidStart:(char)arg0;
- (void)invokeDidStartIfNecessary:(char)arg0 error:(NSError *)arg1;
- (char)receivedDidStart;
- (void)invokeDidStopIfNecessary:(char)arg0 error:(NSError *)arg1;
- (id /* block */)didStopHandler;

@end
