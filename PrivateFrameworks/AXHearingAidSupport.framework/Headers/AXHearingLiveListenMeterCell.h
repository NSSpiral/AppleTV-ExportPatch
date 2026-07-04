/* Runtime dump - AXHearingLiveListenMeterCell
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingLiveListenMeterCell : PSTableCell
{
    NSArray * dotImageViews;
    NSString * _liveListenUpdateUUID;
}

@property (retain, nonatomic) NSArray * dotImageViews;
@property (retain, nonatomic) NSString * liveListenUpdateUUID;

- (void)setSpecifier:(PSSpecifier *)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (AXHearingLiveListenMeterCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setDotImageViews:(NSArray *)arg0;
- (NSArray *)dotImageViews;
- (void)audioLevelDidChange:(float)arg0;
- (void)setMeterLevel:(int)arg0;
- (NSString *)liveListenUpdateUUID;
- (void)setLiveListenUpdateUUID:(NSString *)arg0;

@end
