/* Runtime dump - ISOpenURLOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISOpenURLOperation : ISOperation
{
    ISOpenURLRequest * _request;
}

@property (readonly) ISOpenURLRequest * openURLRequest;

- (void)dealloc;
- (ISOpenURLOperation *)init;
- (void)run;
- (ISOpenURLOperation *)initWithOpenURLRequest:(ISOpenURLRequest *)arg0;
- (char)_openURL:(NSURL *)arg0;
- (NSArray *)_newSortedTargetsArray;
- (ISOpenURLRequest *)openURLRequest;

@end
