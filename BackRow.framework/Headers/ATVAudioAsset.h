/* Runtime dump - ATVAudioAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRXMLMediaAsset.h>

@protocol BRMercantile;

@class ATVFeedAudioAssetElement, ATVFeedDocument, ATVMerchant;
@interface ATVAudioAsset : BRXMLMediaAsset <BRMercantile>
{
    ATVMerchant * _merchant;
    NSDate * _eventStart;
    ATVFeedDocument * _feedDocument;
    char _startFromStartDate;
    char _shouldShowTrackPopup;
    ATVFeedAudioAssetElement * _feedElement;
}

@property (retain, nonatomic) ATVMerchant * merchant;
@property (retain, nonatomic) NSDate * eventStart;
@property (retain, nonatomic) ATVFeedAudioAssetElement * feedElement;
@property (nonatomic) char shouldShowTrackPopup;
@property (nonatomic) char startFromStartDate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVMerchant *)merchant;
- (void)setMerchant:(ATVMerchant *)arg0;
- (char)isScrubbable;
- (char)shouldShowTrackPopup;
- (ATVAudioAsset *)initWithFeedElement:(ATVFeedAudioAssetElement *)arg0;
- (ATVFeedAudioAssetElement *)feedElement;
- (void)setFeedElement:(ATVFeedAudioAssetElement *)arg0;
- (void)setShouldShowTrackPopup:(char)arg0;
- (void)setEventStart:(NSDate *)arg0;
- (void)setStartFromStartDate:(char)arg0;
- (char)startFromStartDate;
- (NSDate *)eventStart;
- (void).cxx_destruct;
- (NSString *)rating;
- (NSDate *)startDate;

@end
