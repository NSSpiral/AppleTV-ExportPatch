/* Runtime dump - GEOMapRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRequest : NSObject
{
    GEOMapRequestManager * _requestManager;
    id _completionHandler;
    char _isFinished;
}

@property (copy, nonatomic) id completionHandler;
@property (readonly, nonatomic) char isFinished;

- (void)cancel;
- (void)dealloc;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)complete;
- (char)isFinished;
- (GEOMapRequest *)initWithManager:(NSObject *)arg0;

@end
