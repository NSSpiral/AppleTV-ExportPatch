/* Runtime dump - BRControlMediator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface BRControlMediator : NSObject
{
    NSString * _identifier;
    BRControl * _control;
    BRControl * _preview;
    char _active;
}

+ (BRControlMediator *)mediatorWithControl:(BRControl *)arg0 identifier:(NSString *)arg1;
+ (TSCHChartMediator *)mediator;

- (void)setPreviewControl:(BRControl *)arg0;
- (BRControl *)previewControl;
- (void)dealloc;
- (BRControlMediator *)init;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (char)active;
- (void)setActive:(char)arg0;
- (void)setControl:(BRControl *)arg0;
- (BRControl *)control;

@end
