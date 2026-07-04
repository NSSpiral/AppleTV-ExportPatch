/* Runtime dump - VCSessionMessaging
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCSessionMessaging : NSObject
{
    NSString * remoteVersion;
    NSMutableDictionary * topics;
    unsigned long p2pID;
}

- (void)dealloc;
- (NSDictionary *)newPackedMessageFromDictionary:(NSDictionary *)arg0;
- (void)sendMessage:(NSString *)arg0 withTopic:(NSString *)arg1;
- (void)stopMessaging;
- (VCSessionMessaging *)initWithP2PID:(unsigned long)arg0 remoteVersion:(NSString *)arg1;
- (void)addTopic:(VCSessionMessageTopic *)arg0 associatedStrings:(NSArray *)arg1 allowConcurrent:(char)arg2 receiveHandler:(id /* block */)arg3;
- (NSString *)newDictionaryFromUnpackedMessage:(NSString *)arg0;

@end
