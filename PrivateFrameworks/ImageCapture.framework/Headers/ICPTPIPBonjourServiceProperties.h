/* Runtime dump - ICPTPIPBonjourServiceProperties
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPBonjourServiceProperties : NSObject
{
    struct __CFSocket * _hostSocket;
    NSString * _hostName;
    unsigned short _hostPort;
    NSString * _hostGUID;
    unsigned long _hostMaxConnections;
    int _hostSecuritylevel;
    NSString * _serviceType;
    NSDictionary * _txtRecordsDict;
    struct __CFNetService * _publishedService;
    NSMutableArray * _clients;
    int _clientSpinLock;
    id _delegate;
    int _clientsSpinLock;
}

@property struct __CFSocket * hostSocket;
@property (retain) NSString * hostName;
@property unsigned short hostPort;
@property (retain) NSString * hostGUID;
@property unsigned long hostMaxConnections;
@property int hostSecurityLevel;
@property (retain) NSString * serviceType;
@property (retain) NSDictionary * txtRecordsDict;
@property struct __CFNetService * publishedService;
@property (retain) NSMutableArray * clients;
@property int clientsSpinLock;
@property id delegate;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)setHostName:(NSString *)arg0;
- (NSString *)hostName;
- (NSString *)serviceType;
- (void)setServiceType:(NSString *)arg0;
- (void)setClients:(NSMutableArray *)arg0;
- (void)setHostGUID:(NSString *)arg0;
- (void)setTxtRecordsDict:(NSDictionary *)arg0;
- (struct __CFSocket *)hostSocket;
- (void)setHostSocket:(struct __CFSocket *)arg0;
- (unsigned short)hostPort;
- (void)setHostPort:(unsigned short)arg0;
- (NSString *)hostGUID;
- (unsigned long)hostMaxConnections;
- (void)setHostMaxConnections:(unsigned long)arg0;
- (int)hostSecurityLevel;
- (void)setHostSecurityLevel:(int)arg0;
- (NSDictionary *)txtRecordsDict;
- (struct __CFNetService *)publishedService;
- (void)setPublishedService:(struct __CFNetService *)arg0;
- (NSMutableArray *)clients;
- (int)clientsSpinLock;
- (void)setClientsSpinLock:(int)arg0;
- (void)finalize;

@end
