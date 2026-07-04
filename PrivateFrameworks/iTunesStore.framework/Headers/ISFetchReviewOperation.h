/* Runtime dump - ISFetchReviewOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISFetchReviewOperation : ISOperation
{
    int _assetType;
    char _backgroundReview;
    unsigned long long _itemIdentifier;
    unsigned int _softwareVersionIdentifier;
    ISReview * _review;
    NSURL * _url;
}

@property int assetType;
@property unsigned int softwareVersionIdentifier;
@property unsigned long long itemIdentifier;
@property (retain) NSURL * url;
@property char backgroundReview;
@property (retain) ISReview * review;

- (void)setItemIdentifier:(unsigned long long)arg0;
- (void)dealloc;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (void)run;
- (ISReview *)review;
- (void)setReview:(ISReview *)arg0;
- (unsigned long long)itemIdentifier;
- (int)assetType;
- (void)setAssetType:(int)arg0;
- (char)isBackgroundReview;
- (void)setBackgroundReview:(char)arg0;
- (void)_fetchReviewInformation;
- (unsigned int)softwareVersionIdentifier;
- (void)setSoftwareVersionIdentifier:(unsigned int)arg0;

@end
