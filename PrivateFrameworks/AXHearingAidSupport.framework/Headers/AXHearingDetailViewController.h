/* Runtime dump - AXHearingDetailViewController
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingDetailViewController : PSListController
{
    char _isLiveListening;
    AXRemoteHearingAidDevice * _device;
}

@property (retain, nonatomic) AXRemoteHearingAidDevice * device;

- (void)setDevice:(AXRemoteHearingAidDevice *)arg0;
- (AXHearingDetailViewController *)init;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewDidDisappear:(char)arg0;
- (void)updateView;
- (NSString *)specifierForKey:(NSString *)arg0;
- (void)updateLiveListenCell:(NSObject *)arg0;
- (NSArray *)deviceSpecifiers;
- (NSArray *)_volumeSpecifiers;
- (NSArray *)_modeSpecifiers;
- (void)liveListenToggle:(id)arg0;
- (NSArray *)disconnectedSpecifiers;
- (struct _NSRange)programsRange;
- (NSArray *)specifiers;
- (AXRemoteHearingAidDevice *)device;

@end
