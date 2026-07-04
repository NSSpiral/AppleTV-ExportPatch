/* Runtime dump - PrefsUILinkLabel
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PrefsUILinkLabel : UILabel
{
    NSURL * _url;
    char _touchingURL;
    id _target;
    SEL _action;
    NSURL * _URL;
}

@property (retain, nonatomic) NSURL * URL;
@property (nonatomic) id target;
@property (nonatomic) SEL action;

- (PrefsUILinkLabel *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)openURL:(NSURL *)arg0;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (NSObject *)target;
- (void)setAction:(SEL)arg0;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (void)tappedLink:(id)arg0;
- (UIColor *)color:(UIColor *)arg0 byMultiplyingSubComponentsBy:(float)arg1;

@end
