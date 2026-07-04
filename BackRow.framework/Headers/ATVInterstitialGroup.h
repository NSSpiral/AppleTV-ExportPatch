/* Runtime dump - ATVInterstitialGroup
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedDocument, ATVFeedInterstitialGroupElement;
@interface ATVInterstitialGroup : NSObject
{
    ATVFeedDocument * _feedDocument;
    NSDictionary * _feedDictionary;
    ATVFeedInterstitialGroupElement * _feedElement;
    NSArray * _interstitials;
    NSArray * _collapsedInterstitials;
    NSArray * _netTimeChapters;
}

@property (readonly, nonatomic) NSArray * interstitials;
@property (readonly, nonatomic) NSArray * collapsedInterstitials;
@property (readonly, nonatomic) NSDictionary * feedDictionary;
@property (readonly, nonatomic) ATVFeedInterstitialGroupElement * feedElement;
@property (retain, nonatomic) NSArray * netTimeChapters;

- (ATVInterstitialGroup *)initWithFeedElement:(ATVFeedInterstitialGroupElement *)arg0;
- (ATVFeedInterstitialGroupElement *)feedElement;
- (NSArray *)interstitials;
- (NSArray *)netTimeChapters;
- (NSArray *)collapsedInterstitials;
- (double)netTimeForGrossTime:(double)arg0;
- (NSDictionary *)feedDictionary;
- (double)grossTimeForNetTime:(double)arg0;
- (ATVInterstitialGroup *)initWithFeedDictionary:(NSDictionary *)arg0;
- (id)collapsedInterstitialForGrossTime:(double)arg0;
- (void)setNetTimeChapters:(NSArray *)arg0;
- (void)dealloc;

@end
