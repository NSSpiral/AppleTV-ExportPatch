/* Runtime dump - GEOZilchDecoder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOZilchDecoder : GEOMapRequestManager
{
    NSObject<OS_dispatch_queue> * _decoderQueue;
    NSObject<OS_dispatch_queue> * _requestQueue;
    struct mutex _lock;
    <GEOMapAccessRestrictions> * _mapAccessRestrictions;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * decoderQueue;
@property (nonatomic) <GEOMapAccessRestrictions> * mapAccessRestrictions;

+ (char)decodingSupported;

- (void)dealloc;
- (GEOZilchDecoder *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setMapAccessRestrictions:(<GEOMapAccessRestrictions> *)arg0;
- (void)setRequestQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)trackRequest:(NSURLRequest *)arg0;
- (void)requestComplete:(id)arg0;
- (NSObject<OS_dispatch_queue> *)requestQueue;
- (NSString *)decodeZilchMessage:(struct shared_ptr<zilch::Message>)arg0 pathHandler:(struct __shared_weak_count *)arg1 errorHandler:(SSErrorHandler *)arg2;
- (NSObject<OS_dispatch_queue> *)decoderQueue;
- (<GEOMapAccessRestrictions> *)mapAccessRestrictions;

@end
