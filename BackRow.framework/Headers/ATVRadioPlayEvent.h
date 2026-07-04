/* Runtime dump - ATVRadioPlayEvent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRadioPlayEvent : NSObject
{
    ATVDataItem * _dataItem;
    RadioMutablePlayEvent * _radioPlayEvent;
    double _trackDuration;
}

@property (retain, nonatomic) ATVDataItem * dataItem;
@property (retain, nonatomic) RadioMutablePlayEvent * radioPlayEvent;
@property (nonatomic) double trackDuration;

- (RadioMutablePlayEvent *)radioPlayEvent;
- (ATVRadioPlayEvent *)initWithDataItem:(ATVDataItem *)arg0 timedMetadata:(NSData *)arg1;
- (id)_trackTypeStr;
- (id)_endReasonStr;
- (NSNumber *)_formatedDuration;
- (void)setRadioPlayEvent:(RadioMutablePlayEvent *)arg0;
- (double)trackDuration;
- (NSString *)description;
- (void).cxx_destruct;
- (ATVDataItem *)dataItem;
- (ATVRadioPlayEvent *)initWithDataItem:(ATVDataItem *)arg0;
- (void)setDataItem:(ATVDataItem *)arg0;
- (void)setTrackDuration:(double)arg0;

@end
