/* Runtime dump - ATVFeedMenuItemElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedMenuItemElement : ATVFeedElement
{
    char _dimmed;
    NSString * _label;
    NSString * _label2;
    NSString * _rightLabel;
    ATVFeedImageElement * _image;
    ATVFeedImageElement * _defaultImage;
    ATVFeedElement * _preview;
    NSArray * _accessories;
    int _ordinal;
    int _maxOrdinalDigits;
    int _progressPercentage;
    NSDictionary * _styleKeyValues;
}

@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * label2;
@property (copy, nonatomic) NSString * rightLabel;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) ATVFeedImageElement * defaultImage;
@property (retain, nonatomic) ATVFeedElement * preview;
@property (retain, nonatomic) NSArray * accessories;
@property (nonatomic) int ordinal;
@property (nonatomic) int maxOrdinalDigits;
@property (nonatomic) int progressPercentage;
@property (nonatomic) char dimmed;
@property (readonly, retain, nonatomic) UIColor * labelColor;
@property (readonly, retain, nonatomic) UIColor * labelColor2;
@property (retain, nonatomic) NSDictionary * styleKeyValues;

- (void)setDefaultImage:(ATVFeedImageElement *)arg0;
- (ATVFeedMenuItemElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setPreview:(ATVFeedElement *)arg0;
- (ATVFeedElement *)preview;
- (ATVFeedImageElement *)defaultImage;
- (void)setOrdinal:(int)arg0;
- (NSDictionary *)styleKeyValues;
- (void)setStyleKeyValues:(NSDictionary *)arg0;
- (void)setRightLabel:(NSString *)arg0;
- (void)setLabel2:(NSString *)arg0;
- (void)setMaxOrdinalDigits:(int)arg0;
- (UIColor *)labelColor2;
- (NSString *)label2;
- (int)maxOrdinalDigits;
- (int)progressPercentage;
- (NSString *)rightLabel;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (ATVFeedImageElement *)image;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setDimmed:(char)arg0;
- (char)dimmed;
- (void)setAccessories:(NSArray *)arg0;
- (NSArray *)accessories;
- (int)ordinal;
- (void)setProgressPercentage:(int)arg0;
- (UIColor *)labelColor;

@end
