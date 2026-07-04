/* Runtime dump - ATVHSDataServer
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataServer : ATVDataServer
{
    ATVHSDataServerConfiguration * _serverConfiguration;
    ATVHSDataServerManager * _dataServerManager;
}

@property (retain, nonatomic) ATVHSDataServerConfiguration * serverConfiguration;
@property (weak, nonatomic) ATVHSDataServerManager * dataServerManager;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_destruct;
- (ATVHSDataServerManager *)dataServerManager;
- (ATVHSDataServer *)initWithServerConfiguration:(ATVHSDataServerConfiguration *)arg0 dataServerManager:(ATVHSDataServerManager *)arg1;
- (void)concreteDataServerResolve;
- (ATVHSDataServerConfiguration *)serverConfiguration;
- (void)setServerConfiguration:(ATVHSDataServerConfiguration *)arg0;
- (void)setDataServerManager:(ATVHSDataServerManager *)arg0;

@end
