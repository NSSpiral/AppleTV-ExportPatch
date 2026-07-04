/* Runtime dump - CECRouter
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECRouter : NSObject <CECInterfaceDelegate>
{
    CECInterface * _sinkInterface;
    NSMutableSet * _interfaces;
    NSDictionary * _properties;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CECRouter *)routerWithSinkInterface:(CECInterface *)arg0;

- (NSDictionary *)properties;
- (char)interface:(GKLinkedAccountsServicePrivateInterface *)arg0 sendFrame:(struct CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id *)arg3;
- (void)interfacePropertiesChanged:(CECInterface *)arg0;
- (char)interface:(GKLinkedAccountsServicePrivateInterface *)arg0 setAddressMask:(unsigned short)arg1 error:(id *)arg2;
- (char)interface:(GKLinkedAccountsServicePrivateInterface *)arg0 setPromiscMode:(char)arg1 error:(id *)arg2;
- (void)interface:(CECInterface *)arg0 receivedFrame:(struct CECFrame)arg1;
- (CECRouter *)initWithSinkInterface:(CECInterface *)arg0;
- (id)newRouterInterface;

@end
