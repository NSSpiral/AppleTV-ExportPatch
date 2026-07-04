/* Runtime dump - ATVRadioAdSlotFetchContext
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioAdSlot;
@interface ATVRadioAdSlotFetchContext : NSObject
{
    char _finished;
    ATVRadioAdSlot * _adSlot;
    id _completionHandler;
}

@property (retain, nonatomic) ATVRadioAdSlot * adSlot;
@property (copy, nonatomic) id completionHandler;
@property (nonatomic) char finished;

- (ATVRadioAdSlot *)adSlot;
- (void)finishFetchWithVisuallyEngagedAds:(char)arg0 visuallyDisengagedAds:(id)arg1;
- (void)setAdSlot:(ATVRadioAdSlot *)arg0;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (char)isFinished;
- (void)setFinished:(char)arg0;

@end
