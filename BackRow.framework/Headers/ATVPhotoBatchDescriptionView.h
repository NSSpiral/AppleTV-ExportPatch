/* Runtime dump - ATVPhotoBatchDescriptionView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVPhotoBatchDescriptionView : BRControl
{
    NSAttributedString * _dimmedTitle;
    NSAttributedString * _title;
    NSAttributedString * _boldTitle;
    NSDateFormatter * _dayMonthFormatter;
    NSDateFormatter * _dayMonthYearFormatter;
}

@property (retain, nonatomic) NSAttributedString * dimmedTitle;
@property (retain, nonatomic) NSAttributedString * title;
@property (retain, nonatomic) NSAttributedString * boldTitle;
@property (retain, nonatomic) NSDateFormatter * dayMonthFormatter;
@property (retain, nonatomic) NSDateFormatter * dayMonthYearFormatter;

- (void)updatePhotoCount:(NSObject *)arg0 description:(NSString *)arg1;
- (void)updatePhotoCount:(NSObject *)arg0 albumName:(NSString *)arg1 modifiedDate:(NSDate *)arg2;
- (NSDictionary *)_dimmedTitleAttributes;
- (void)setDimmedTitle:(NSAttributedString *)arg0;
- (NSDictionary *)_boldTitleAttributes;
- (void)setBoldTitle:(NSAttributedString *)arg0;
- (NSDateFormatter *)dayMonthFormatter;
- (NSDateFormatter *)dayMonthYearFormatter;
- (NSAttributedString *)boldTitle;
- (NSAttributedString *)dimmedTitle;
- (void)setTitle:(NSAttributedString *)arg0 boldTitle:(NSAttributedString *)arg1 dimmedTitle:(NSAttributedString *)arg2;
- (void)setDayMonthFormatter:(NSDateFormatter *)arg0;
- (void)setDayMonthYearFormatter:(NSDateFormatter *)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (ATVPhotoBatchDescriptionView *)init;
- (void)setTitle:(NSAttributedString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSAttributedString *)title;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (NSDictionary *)_titleAttributes;

@end
