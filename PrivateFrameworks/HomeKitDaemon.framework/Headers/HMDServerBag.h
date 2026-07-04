/* Runtime dump - HMDServerBag
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDServerBag : NSObject
{
    char _refreshing;
    NSDictionary * _dictionaryRepresentation;
    unsigned int _environment;
    NSURL * _url;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSURLSession * _urlSession;
}

@property (readonly, nonatomic) unsigned int environment;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, copy, nonatomic) NSURL * activationHostnameURL;
@property (readonly, copy, nonatomic) NSURL * activationCertificateHostnameURL;
@property (readonly, copy, nonatomic) NSURL * accessoryReportURL;
@property (readonly, nonatomic) double accessoryReportTimeout;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (readonly, nonatomic) NSURLSession * urlSession;
@property (nonatomic) char refreshing;
@property (copy, nonatomic) NSDictionary * dictionaryRepresentation;

+ (void)initialize;
+ (NSDictionary *)serverBagURLForEnvironment:(unsigned int)arg0;
+ (HMDServerBag *)activationHostnameURLOverride;
+ (HMDServerBag *)activationCertificateHostnameURLOverride;
+ (HMDServerBag *)defaultServerBag;

- (HMDServerBag *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSURL *)url;
- (unsigned int)environment;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMDServerBag *)initWithEnvironment:(unsigned int)arg0;
- (void)_loadDefaultBag;
- (void)_synchronizeWithCompletion:(id /* block */)arg0;
- (char)refreshing;
- (NSURLSession *)urlSession;
- (void)_handleServerBagResponseData:(NSData *)arg0 response:(NSURLResponse *)arg1 error:(NSError *)arg2 completionHandler:(id /* block */)arg3;
- (void)setRefreshing:(char)arg0;
- (void)setDictionaryRepresentation:(NSDictionary *)arg0;
- (NSURL *)activationHostnameURL;
- (NSURL *)activationCertificateHostnameURL;
- (NSURL *)accessoryReportURL;
- (double)accessoryReportTimeout;

@end
