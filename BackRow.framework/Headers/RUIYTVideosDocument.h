/* Runtime dump - RUIYTVideosDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/RUIYTDocument.h>

@class RUIYTVideosDocumentSpec;
@interface RUIYTVideosDocument : RUIYTDocument
{
    unsigned int _startIndex;
    NSString * _timeFilter;
    RUIYTVideosDocumentSpec * _spec;
    NSArray * _videos;
    int _totalVideos;
    unsigned int _count;
    YTSearchRequest * __request;
    NSArray * __videosPendingEvaluation;
}

@property (nonatomic) unsigned int startIndex;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSString * timeFilter;
@property (retain, nonatomic) RUIYTVideosDocumentSpec * spec;
@property (retain, nonatomic) NSArray * videos;
@property (nonatomic) int totalVideos;
@property (retain, nonatomic) YTSearchRequest * _request;
@property (retain, nonatomic) NSArray * _videosPendingEvaluation;

- (int)totalVideos;
- (void)set_request:(YTSearchRequest *)arg0;
- (RUIYTVideosDocument *)initWithSpec:(RUIYTVideosDocumentSpec *)arg0;
- (void)_loadRequest;
- (void)_cancelLoad;
- (NSString *)timeFilter;
- (void)setTotalVideos:(int)arg0;
- (void)set_videosPendingEvaluation:(NSArray *)arg0;
- (void)_favoritesUpdated:(id)arg0;
- (id)_evaluateVideos:(id)arg0;
- (NSArray *)_videosPendingEvaluation;
- (char)_isYTVideoRestricted:(id)arg0;
- (void)setTimeFilter:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg0;
- (void).cxx_destruct;
- (YTSearchRequest *)_request;
- (RUIYTVideosDocumentSpec *)spec;
- (void)setSpec:(RUIYTVideosDocumentSpec *)arg0;
- (unsigned int)startIndex;
- (void)setStartIndex:(unsigned int)arg0;
- (NSArray *)videos;
- (void)setVideos:(NSArray *)arg0;
- (void)searchRequest:(YTSearchRequest *)arg0 receivedVideos:(id)arg1 startIndex:(unsigned int)arg2 videosRemaining:(unsigned int)arg3;
- (void)searchRequest:(YTSearchRequest *)arg0 didFailWithError:(NSError *)arg1;

@end
