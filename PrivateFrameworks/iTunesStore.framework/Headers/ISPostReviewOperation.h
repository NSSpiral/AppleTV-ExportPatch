/* Runtime dump - ISPostReviewOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate>
{
    char _backgroundReview;
    ISReview * _review;
}

@property char backgroundReview;
@property (retain) ISReview * review;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)run;
- (void)operation:(ISURLOperation *)arg0 finishedWithOutput:(AVPlayerLayer *)arg1;
- (ISReview *)review;
- (void)setReview:(ISReview *)arg0;
- (char)isBackgroundReview;
- (void)setBackgroundReview:(char)arg0;
- (NSObject *)_httpBody;

@end
