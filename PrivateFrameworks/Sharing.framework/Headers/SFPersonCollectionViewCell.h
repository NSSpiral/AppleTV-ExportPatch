/* Runtime dump - SFPersonCollectionViewCell
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPersonCollectionViewCell : UICollectionViewCell
{
    struct CGRect _personViewFrame;
    _SFPersonImageView * _personImageView;
    SFCircleProgressView * _circleProgressView;
    UILabel * _nameLabel;
    struct CGRect _nameLabelOneLineFrame;
    struct CGRect _nameLabelTwoLinesFrame;
    CALayer * _nameLabelMaskLayer;
    float _nameLabelOriginY;
    UILabel * _secondaryNameLabel;
    UILabel * _waitingLabel;
    UILabel * _sendingLabel;
    UILabel * _sentLabel;
    UILabel * _declinedLabel;
    UILabel * _failedLabel;
    id _progressToken;
    NSProgress * _progress;
    NSArray * _progressKeyPaths;
    char _darkStyleOnLegacyApp;
    char _stateBeingRestored;
    SFAirDropNode * _person;
    int _cellState;
    NSString * _sessionID;
    UIColor * _textColor;
    NSObject<SFPersonCollectionViewCellDelegate> * _delegate;
}

@property (nonatomic) char darkStyleOnLegacyApp;
@property (retain, nonatomic) SFAirDropNode * person;
@property (retain, nonatomic) NSProgress * progress;
@property (nonatomic) int cellState;
@property (nonatomic) char stateBeingRestored;
@property (retain, nonatomic) NSString * sessionID;
@property (retain, nonatomic) UIColor * textColor;
@property (weak, nonatomic) NSObject<SFPersonCollectionViewCellDelegate> * delegate;

- (SFPersonCollectionViewCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject<SFPersonCollectionViewCellDelegate> *)arg0;
- (void)didMoveToWindow;
- (NSObject<SFPersonCollectionViewCellDelegate> *)delegate;
- (void)setTextColor:(UIColor *)arg0;
- (void)setProgress:(NSProgress *)arg0;
- (void)setHighlighted:(char)arg0;
- (void)prepareForReuse;
- (UIColor *)textColor;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSProgress *)progress;
- (char)darkStyleOnLegacyApp;
- (void)setDarkStyleOnLegacyApp:(char)arg0;
- (void).cxx_destruct;
- (SFAirDropNode *)person;
- (void)setPerson:(SFAirDropNode *)arg0;
- (NSString *)sessionID;
- (void)setSessionID:(NSString *)arg0;
- (NSObject *)createLabelWithFrame:(struct CGRect)arg0;
- (void)setCellState:(int)arg0;
- (void)resetPersonIconView;
- (void)resetNameLabel;
- (void)removeObserverOfValuesForKeyPaths:(NSArray *)arg0 ofObject:(NSObject *)arg1;
- (void)addObserverOfValuesForKeyPaths:(NSArray *)arg0 ofObject:(NSObject *)arg1;
- (void)updatePersonIconView;
- (void)updateNameLabel;
- (void)triggerKVOForKeyPaths:(NSArray *)arg0 ofObject:(NSObject *)arg1;
- (void)setCellState:(int)arg0 animated:(char)arg1;
- (void)switchToStatusLabel:(NSString *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (NSString *)visibleStatusLabel;
- (void)handleKVOUpdateForPerson:(NSObject *)arg0 keyPath:(NSString *)arg1;
- (void)handleKVOUpdateForProgress:(id)arg0 keyPath:(NSString *)arg1;
- (void)restoreCellStateFromFinalTransferState:(int)arg0;
- (void)animateCellShow:(char)arg0 delay:(double)arg1 completion:(id /* block */)arg2;
- (void)userDidSelect;
- (void)userDidCancel;
- (int)cellState;
- (char)stateBeingRestored;
- (void)setStateBeingRestored:(char)arg0;

@end
