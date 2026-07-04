/* Runtime dump - RUIYTAssetsListSection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/RUIYTListSection.h>

@class RUIYTAssetsInfo;
@interface RUIYTAssetsListSection : RUIYTListSection
{
    char _treatAsPlaylist;
    char _requestsPageLoad;
    RUIYTAssetsInfo * _assetsInfo;
}

@property char treatAsPlaylist;
@property char requestsPageLoad;
@property (retain) RUIYTAssetsInfo * assetsInfo;

- (RUIYTAssetsInfo *)assetsInfo;
- (char)treatAsPlaylist;
- (void)setTreatAsPlaylist:(char)arg0;
- (char)requestsPageLoad;
- (void)setRequestsPageLoad:(char)arg0;
- (void)setAssetsInfo:(RUIYTAssetsInfo *)arg0;
- (void).cxx_destruct;

@end
