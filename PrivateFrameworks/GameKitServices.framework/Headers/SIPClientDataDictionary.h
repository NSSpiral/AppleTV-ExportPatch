/* Runtime dump - SIPClientDataDictionary
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface SIPClientDataDictionary : NSObject
{
    NSMutableDictionary * allCalls;
}

- (void)dealloc;
- (SIPClientDataDictionary *)init;
- (NSString *)objectForKey:(NSString *)arg0 p2pID:(unsigned long)arg1;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 forP2PID:(unsigned long)arg2;

@end
