/* Runtime dump - AlphanumericPINTableViewCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface AlphanumericPINTableViewCell : UITableViewCell
{
    AlphanumericPINTextField * _pinTextField;
}

@property (retain, nonatomic) AlphanumericPINTextField * pinTextField;

- (void)dealloc;
- (void)layoutSubviews;
- (AlphanumericPINTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (AlphanumericPINTextField *)pinTextField;
- (void)setPinTextField:(AlphanumericPINTextField *)arg0;

@end
