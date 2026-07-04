/* Runtime dump - RUIYTCollectionsDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/RUIYTDocument.h>

@class RUIYTCollectionsDocumentSpec;
@interface RUIYTCollectionsDocument : RUIYTDocument
{
    unsigned int _startIndex;
    unsigned int _count;
    RUIYTCollectionsDocumentSpec * _spec;
    NSArray * _collections;
    int _totalCollectiont;
    YTSubscriptionsRequest * __request;
}

@property (nonatomic) unsigned int startIndex;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) RUIYTCollectionsDocumentSpec * spec;
@property (retain, nonatomic) NSArray * collections;
@property (nonatomic) int totalCollections;
@property (retain, nonatomic) YTSubscriptionsRequest * _request;

- (int)totalCollections;
- (void)set_request:(YTSubscriptionsRequest *)arg0;
- (void)setTotalCollections:(int)arg0;
- (RUIYTCollectionsDocument *)initWithSpec:(RUIYTCollectionsDocumentSpec *)arg0;
- (void)_loadRequest;
- (void)_cancelLoad;
- (NSArray *)collections;
- (void)dealloc;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg0;
- (void).cxx_destruct;
- (YTSubscriptionsRequest *)_request;
- (RUIYTCollectionsDocumentSpec *)spec;
- (void)setSpec:(RUIYTCollectionsDocumentSpec *)arg0;
- (void)setCollections:(NSArray *)arg0;
- (unsigned int)startIndex;
- (void)setStartIndex:(unsigned int)arg0;
- (void)subscriptionsRequest:(NSURLRequest *)arg0 receivedSubscriptions:(id)arg1 startIndex:(unsigned int)arg2 resultsRemaining:(unsigned int)arg3;
- (void)subscriptionsRequest:(NSURLRequest *)arg0 didFailWithError:(NSError *)arg1;

@end
