/* Runtime dump - ADAnalytics
 * Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate>
{
    ADAdSheetConnection * _connection;
}

@property (retain, nonatomic) ADAdSheetConnection * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ADAnalytics *)sharedInstance;

- (ADAnalytics *)init;
- (ADAdSheetConnection *)connection;
- (void)setConnection:(ADAdSheetConnection *)arg0;
- (char)shouldLaunchAdSheet;
- (NSDictionary *)additionalAdSheetLaunchOptions;
- (NSString *)adSheetMachServiceName;
- (void)configureConnection:(NSXPCConnection *)arg0;
- (void)reportIngestionForPassWithTeamIdentifier:(NSString *)arg0 passTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2 iAdReportingIdentifier:(NSString *)arg3;

@end
