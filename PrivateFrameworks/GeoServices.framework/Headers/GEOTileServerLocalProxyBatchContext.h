/* Runtime dump - GEOTileServerLocalProxyBatchContext
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerLocalProxyBatchContext : NSObject
{
    GEOTileKeyList * _fullList;
    GEOTileKeyList * _interestList;
    GEOTileKeyList * _networkList;
    GEOTileKeyList * _pendingNetworkList;
    GEOTileRequester * _tileRequester;
}

@property (retain, nonatomic) GEOTileKeyList * fullList;
@property (retain, nonatomic) GEOTileKeyList * interestList;
@property (retain, nonatomic) GEOTileKeyList * networkList;
@property (retain, nonatomic) GEOTileKeyList * pendingNetworkList;
@property (retain, nonatomic) GEOTileRequester * tileRequester;

- (void)dealloc;
- (GEOTileKeyList *)interestList;
- (GEOTileRequester *)tileRequester;
- (GEOTileKeyList *)pendingNetworkList;
- (void)setTileRequester:(GEOTileRequester *)arg0;
- (void)setFullList:(GEOTileKeyList *)arg0;
- (void)setInterestList:(GEOTileKeyList *)arg0;
- (void)setNetworkList:(GEOTileKeyList *)arg0;
- (void)setPendingNetworkList:(GEOTileKeyList *)arg0;
- (GEOTileKeyList *)networkList;
- (GEOTileKeyList *)fullList;

@end
