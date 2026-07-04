/* Runtime dump - TUAccountsController
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAccountsController : NSObject
{
    NSXPCConnection * _xpcConnection;
    int _outgoingRelayCallerIDChangedToken;
}

@property (readonly, copy, nonatomic) NSString * outgoingRelayCallerID;
@property (readonly, copy, nonatomic) NSString * formattedOutgoingRelayCallerID;
@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (nonatomic) int outgoingRelayCallerIDChangedToken;

- (void)dealloc;
- (TUAccountsController *)init;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;
- (void)_tearDownXPCConnection;
- (void)_setUpXPCConnection;
- (NSString *)outgoingRelayCallerID;
- (NSString *)formattedOutgoingRelayCallerID;
- (int)outgoingRelayCallerIDChangedToken;
- (void)setOutgoingRelayCallerIDChangedToken:(int)arg0;

@end
