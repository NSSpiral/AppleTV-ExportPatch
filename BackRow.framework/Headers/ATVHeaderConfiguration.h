/* Runtime dump - ATVHeaderConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVTextConfiguration;
@interface ATVHeaderConfiguration : NSObject
{
    NSArray * _allowedLayouts;
    int _defaultTitleAlignment;
    ATVTextConfiguration * _titleConfiguration;
    ATVTextConfiguration * _subtitleConfiguration;
    ATVTextConfiguration * _descriptionConfiguration;
    struct ? _size;
}

@property (retain, nonatomic) NSArray * allowedLayouts;
@property (nonatomic) struct ? size;
@property (nonatomic) int defaultTitleAlignment;
@property (readonly, retain, nonatomic) ATVTextConfiguration * titleConfiguration;
@property (readonly, retain, nonatomic) ATVTextConfiguration * subtitleConfiguration;
@property (readonly, retain, nonatomic) ATVTextConfiguration * descriptionConfiguration;

- (NSArray *)allowedLayouts;
- (void)setAllowedLayouts:(NSArray *)arg0;
- (int)defaultTitleAlignment;
- (void)setDefaultTitleAlignment:(int)arg0;
- (ATVTextConfiguration *)titleConfiguration;
- (ATVTextConfiguration *)subtitleConfiguration;
- (ATVTextConfiguration *)descriptionConfiguration;
- (struct ?)size;
- (ATVHeaderConfiguration *)init;
- (void)setSize:(struct ?)arg0;
- (void).cxx_destruct;

@end
