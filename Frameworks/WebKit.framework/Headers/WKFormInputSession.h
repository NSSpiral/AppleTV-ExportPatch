/* Runtime dump - WKFormInputSession
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormInputSession : NSObject <_WKFormInputSession>
{
    WKContentView * _contentView;
    struct RetainPtr<NSObject<NSSecureCoding> > _userObject;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char valid;
@property (readonly, nonatomic) NSObject<NSSecureCoding> * userObject;
@property (copy, nonatomic) NSString * accessoryViewCustomButtonTitle;

- (void)invalidate;
- (char)isValid;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject<NSSecureCoding> *)userObject;
- (NSString *)accessoryViewCustomButtonTitle;
- (void)setAccessoryViewCustomButtonTitle:(NSString *)arg0;
- (WKFormInputSession *)initWithContentView:(WKContentView *)arg0 userObject:(NSObject<NSSecureCoding> *)arg1;

@end
