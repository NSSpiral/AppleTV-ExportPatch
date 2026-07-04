/* Runtime dump - GEOMapItemAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAttribution : NSObject
{
    GEOSearchAttributionInfo * _info;
    NSArray * _attributionURLs;
    NSString * _yelpID;
    NSString * _poiID;
}

@property (readonly, nonatomic) NSString * providerID;
@property (readonly, nonatomic) NSString * providerName;
@property (readonly, nonatomic) NSArray * attributionURLs;
@property (readonly, nonatomic) NSArray * attributionApps;
@property (readonly, nonatomic) NSString * webBaseActionURL;
@property (readonly, nonatomic) char requiresAttributionInCallout;

- (void)dealloc;
- (NSString *)providerID;
- (NSString *)providerName;
- (NSArray *)attributionURLs;
- (GEOMapItemAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1 yelpID:(NSString *)arg2;
- (GEOMapItemAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1;
- (GEOMapItemAttribution *)initWithSearchAttributionInfo:(NSDictionary *)arg0 attributionURLs:(NSArray *)arg1 poiID:(NSString *)arg2;
- (NSArray *)attributionApps;
- (NSString *)webBaseActionURL;
- (id)providerLogoPathForScale:(float)arg0;
- (id)providerSnippetLogoPathForScale:(float)arg0;
- (char)requiresAttributionInCallout;
- (id)_yelpHTTPURLForRequirement:(int)arg0 withUID:(struct UUIDData<TSP::UUIDData> *)arg1 writeAReview:(char)arg2;

@end
