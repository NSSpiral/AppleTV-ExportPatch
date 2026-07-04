/* Runtime dump - ISReviewProvider
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISReviewProvider : ISDataProvider <NSCopying>
{
    char _backgroundReview;
}

@property char backgroundReview;

- (ISReviewProvider *)copyWithZone:(struct _NSZone *)arg0;
- (char)parseData:(NSData *)arg0 returningError:(id *)arg1;
- (char)isBackgroundReview;
- (void)setBackgroundReview:(char)arg0;

@end
