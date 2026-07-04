/* Runtime dump - MEYTSigningAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRYTSigningAgent;
@interface MEYTSigningAgent : NSObject <BRYTSigningAgent>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)signMessage:(char *)arg0 messageLength:(unsigned long)arg1 signature:(char *)arg2 certificate:(char * *)arg3 certificateLength:(unsigned int *)arg4;

@end
