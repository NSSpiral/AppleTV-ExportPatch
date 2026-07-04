/* Runtime dump - ATVDataClient
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataClient : NSObject <ATVImageLoader>
{
    NSString * _name;
    unsigned int _clientType;
    int _status;
    NSString * _identifier;
    NSMutableDictionary * _metadataDict;
    int _maxConcurrentQueryCount;
    ATVDataServer * _dataServer;
}

@property (nonatomic) unsigned int clientType;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * identifier;
@property (weak) ATVDataServer * dataServer;
@property int status;
@property (nonatomic) int maxConcurrentQueryCount;
@property (retain) NSMutableDictionary * metadataDict;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void)connect;
- (void).cxx_destruct;
- (void)disconnect;
- (int)status;
- (void)setStatus:(int)arg0;
- (unsigned int)clientType;
- (NSObject *)imageKeyForObject:(NSObject *)arg0;
- (void)connectionCompletedWithStatus:(int)arg0;
- (ATVDataServer *)dataServer;
- (void)concreteDataClientConnect;
- (void)concreteDataClientDisconnect;
- (void)submitDataQuery:(NSObject *)arg0 priority:(int)arg1 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(id /* block */)arg3;
- (void)queryCompleted:(id)arg0 withStatus:(unsigned long)arg1;
- (NSMutableDictionary *)metadataDict;
- (void)setMetadataDict:(NSMutableDictionary *)arg0;
- (ATVDataClient *)initWithName:(NSString *)arg0 clientType:(unsigned int)arg1;
- (void)setMaxConcurrentQueryCount:(int)arg0;
- (char)supportsProperty:(NSObject *)arg0;
- (char)queryFilterSupportsProperty:(NSObject *)arg0;
- (char)groupingSupportsProperty:(NSObject *)arg0;
- (char)canProcessQueryConcurrently:(id)arg0;
- (char)processQueryAsync:(id)arg0;
- (void)executeQuery:(NSObject *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (NSSet *)imageRequestWithAsset:(NSSet *)arg0 imageID:(NSString *)arg1 size:(struct CGSize)arg2 crop:(char)arg3 context:(NSObject *)arg4;
- (void)cancelImageRequest:(NSURLRequest *)arg0;
- (NSDictionary *)networkTestURLWithOptions:(NSDictionary *)arg0 headers:(id *)arg1;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;
- (void)setDataServer:(ATVDataServer *)arg0;
- (void)setClientStatus:(int)arg0;
- (int)maxConcurrentQueryCount;
- (NSSet *)imageURLWithAsset:(NSSet *)arg0 size:(struct CGSize)arg1 crop:(char)arg2;
- (void)setClientType:(unsigned int)arg0;

@end
