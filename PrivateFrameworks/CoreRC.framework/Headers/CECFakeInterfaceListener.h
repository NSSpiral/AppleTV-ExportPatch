/* Runtime dump - CECFakeInterfaceListener
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECFakeInterfaceListener : CoreRCInterfaceListener

- (char)interface:(GKLinkedAccountsServicePrivateInterface *)arg0 sendFrame:(struct CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id *)arg3;
- (char)interface:(GKLinkedAccountsServicePrivateInterface *)arg0 pingTo:(unsigned char)arg1 acknowledged:(char *)arg2 error:(id *)arg3;
- (NSDictionary *)fakeAddInterfaceWithProperties:(NSDictionary *)arg0;
- (char)interface:(GKLinkedAccountsServicePrivateInterface *)arg0 setAddressMask:(unsigned short)arg1 error:(id *)arg2;
- (char)interface:(GKLinkedAccountsServicePrivateInterface *)arg0 setPromiscMode:(char)arg1 error:(id *)arg2;

@end
