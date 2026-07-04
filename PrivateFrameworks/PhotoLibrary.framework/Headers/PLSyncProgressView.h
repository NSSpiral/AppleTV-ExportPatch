/* Runtime dump - PLSyncProgressView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSyncProgressView : UIView
{
    UIActivityIndicatorView * _spinner;
    UILabel * _infoLabel;
    NSNumberFormatter * _countFormatter;
    int _style;
    int _progressType;
    unsigned int _currentCount;
    unsigned int _totalCount;
}

@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) int progressType;
@property (readonly, nonatomic) unsigned int currentCount;
@property (readonly, nonatomic) unsigned int totalCount;

- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (int)style;
- (PLSyncProgressView *)initWithStyle:(int)arg0;
- (unsigned int)totalCount;
- (unsigned int)currentCount;
- (NSString *)_progressDescription;
- (void)setCurrentCount:(unsigned int)arg0 totalCount:(unsigned int)arg1 progressType:(int)arg2;
- (int)progressType;

@end
