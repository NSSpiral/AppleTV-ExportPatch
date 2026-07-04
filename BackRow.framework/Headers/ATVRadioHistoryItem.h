/* Runtime dump - ATVRadioHistoryItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioAdItem, ATVRadioItem;
@interface ATVRadioHistoryItem : ATVDataItem
{
    RadioHistoryItem * _historyItem;
    RadioHistoryCategory * _historyCategory;
    long _adRequestToken;
    ATVRadioAdItem * _adItem;
    ATVRadioItem * _trackItem;
    id _completionHandler;
}

@property (copy, nonatomic) RadioHistoryItem * historyItem;
@property (copy, nonatomic) RadioHistoryCategory * historyCategory;
@property (nonatomic) long adRequestToken;
@property (retain, nonatomic) ATVRadioAdItem * adItem;
@property (retain, nonatomic) ATVRadioItem * trackItem;
@property (copy, nonatomic) id completionHandler;

- (ATVRadioHistoryItem *)initWithDataClient:(ATVDataClient *)arg0 radioHistoryItem:(NSObject *)arg1 category:(NSString *)arg2;
- (RadioHistoryItem *)historyItem;
- (void)setAdItem:(ATVRadioAdItem *)arg0;
- (void)setAdRequestToken:(long)arg0;
- (void)setTrackItem:(ATVRadioItem *)arg0;
- (ATVRadioAdItem *)adItem;
- (RadioHistoryCategory *)historyCategory;
- (ATVRadioItem *)trackItem;
- (void)_didReceiveAd:(id)arg0 forToken:(long)arg1 withError:(NSError *)arg2;
- (void)setHistoryItem:(RadioHistoryItem *)arg0;
- (void)setHistoryCategory:(RadioHistoryCategory *)arg0;
- (long)adRequestToken;
- (void)dealloc;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)loadWithCompletionHandler:(id /* block */)arg0;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (NSMutableDictionary *)adData;

@end
